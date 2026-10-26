#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Buffer.hpp>
#endif

RED4EXT_INLINE RED4ext::RawBufferAllocator::RawBufferAllocator(Memory::IAllocator* aAllocator)
    : allocator(aAllocator ? *reinterpret_cast<uintptr_t*>(aAllocator) : 0)
{
}

RED4EXT_INLINE void* RED4ext::RawBufferAllocator::ReallocAligned(void* aData, uint32_t aSize, uint32_t aAlignment) const
{
    auto innerAllocator = reinterpret_cast<const Memory::IAllocator*>(&allocator);

    if (!innerAllocator)
        return nullptr;

    Memory::AllocationResult allocation{aData, 0};
    return innerAllocator->ReallocAligned(allocation, aSize, aAlignment).memory;
}

RED4EXT_INLINE void RED4ext::RawBufferAllocator::Free(void* aData) const
{
    auto innerAllocator = reinterpret_cast<const Memory::IAllocator*>(&allocator);

    if (!innerAllocator)
        return;

    Memory::AllocationResult allocation{aData, 0};
    innerAllocator->Free(allocation);
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::RawBufferAllocator::GetAllocator() const
{
    return reinterpret_cast<Memory::IAllocator*>(const_cast<uintptr_t*>(&allocator));
}

RED4EXT_INLINE RED4ext::RawBuffer::RawBuffer()
    : data(nullptr)
    , size(0)
    , alignment(8)
    , allocator{0}
{
}

RED4EXT_INLINE RED4ext::RawBuffer::RawBuffer(void* aData, uint32_t aSize, uint32_t aAlignment)
    : data(aData)
    , size(aSize)
    , alignment(aAlignment)
    , allocator{0}
{
}

RED4EXT_INLINE RED4ext::RawBuffer::RawBuffer(RawBuffer&& aOther)
    : RawBuffer()
{
    Swap(aOther);
}

RED4EXT_INLINE RED4ext::RawBuffer::~RawBuffer()
{
    Clear();
}

RED4EXT_INLINE RED4ext::RawBuffer& RED4ext::RawBuffer::operator=(RawBuffer&& aRhs)
{
    RawBuffer(std::move(aRhs)).Swap(*this);
    return *this;
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::RawBuffer::GetAllocator() const
{
    if (!allocator[0])
    {
        return nullptr;
    }

    return reinterpret_cast<const RawBufferAllocator*>(&allocator)->GetAllocator();
}

RED4EXT_INLINE void RED4ext::RawBuffer::Initialize(Memory::IAllocator* aAllocator, uint32_t aSize, uint32_t aAlignment)
{
    if (data)
    {
        return;
    }

    if (!aAllocator)
    {
        aAllocator = AllocatorType::Get();
    }

    data = aAllocator->AllocAligned(aSize, aAlignment).memory;
    size = aSize;
    alignment = aAlignment;

    new (reinterpret_cast<RawBufferAllocator*>(&allocator)) RawBufferAllocator(aAllocator);
}

RED4EXT_INLINE void RED4ext::RawBuffer::Resize(uint32_t aSize)
{
    if (!data || !allocator[0])
    {
        return;
    }

    data = reinterpret_cast<RawBufferAllocator*>(&allocator)->ReallocAligned(data, aSize, alignment);
    size = aSize;
}

RED4EXT_INLINE void RED4ext::RawBuffer::Clear()
{
    if (data && allocator[0])
    {
        reinterpret_cast<RawBufferAllocator*>(&allocator)->Free(data);

        data = nullptr;
        size = 0;
    }
}

RED4EXT_INLINE void RED4ext::RawBuffer::Swap(RawBuffer& aOther)
{
    std::swap(data, aOther.data);
    std::swap(size, aOther.size);
    std::swap(alignment, aOther.alignment);
    std::swap(allocator, aOther.allocator);
}

RED4EXT_INLINE RED4ext::RawBuffer::operator bool() const noexcept
{
    return data;
}

RED4EXT_INLINE RED4ext::SharedPtr<RED4ext::DeferredDataBufferToken> RED4ext::DeferredDataBuffer::LoadAsync()
{
#ifdef __APPLE__
    // macOS: 16-byte result through x8 with the JobHandle at +8 (x0 = buffer, x1 = int64 arg).
    using LoadBufferAsync_t = JobHandleResult (*)(DeferredDataBuffer*, int64_t);
    static UniversalRelocFunc<LoadBufferAsync_t> func(Detail::AddressHashes::DeferredDataBuffer_LoadAsync);

    JobHandleResult result = func(this, 0);

    return MakeShared<DeferredDataBufferToken>(*this, result.job);
#else
    using LoadBufferAsync_t = JobHandle* (*)(DeferredDataBuffer*, JobHandle*, int64_t);
    static UniversalRelocFunc<LoadBufferAsync_t> func(Detail::AddressHashes::DeferredDataBuffer_LoadAsync);

    JobHandle loadingJob;
    func(this, &loadingJob, 0);

    return MakeShared<DeferredDataBufferToken>(*this, loadingJob);
#endif
}

RED4EXT_INLINE RED4ext::SharedPtr<RED4ext::DeferredDataBufferCopyToken> RED4ext::DeferredDataBuffer::LoadCopyAsync()
{
#if defined(__APPLE__)
    // Mac: the result comes back through x8 (the game function 2.3.1 0x226276C / 2.5.0 0x1215680 copies x8 into a callee saved
    // register in its prologue, as LoadAsync does) and the Windows out argument is gone. The 2.5 function takes the extra bool in x2
    // (2.3.1: only the int8 in x1). The SharedPtr return type itself is the Windows one and is not proven on Mac.
    using LoadBufferRefAsync_t = SharedPtr<DeferredDataBufferCopyToken> (*)(DeferredDataBuffer*, int8_t, bool);
    static UniversalRelocFunc<LoadBufferRefAsync_t> func(Detail::AddressHashes::DeferredDataBuffer_LoadRefAsync);

    return func(this, 0, false);
#else
    using LoadBufferRefAsync_t = void* (*)(DeferredDataBuffer*, SharedPtr<DeferredDataBufferCopyToken>*, int8_t, bool);
    static UniversalRelocFunc<LoadBufferRefAsync_t> func(Detail::AddressHashes::DeferredDataBuffer_LoadRefAsync);

    SharedPtr<DeferredDataBufferCopyToken> token;
    func(this, &token, 0, false);

    return token;
#endif
}

RED4EXT_INLINE RED4ext::DeferredDataBufferToken::DeferredDataBufferToken(DeferredDataBuffer& aBuffer,
                                                                         JobHandle& aJob) noexcept
    : buffer(aBuffer)
    , job(aJob)
{
}

RED4EXT_INLINE void RED4ext::DeferredDataBufferToken::OnLoaded(LoadedCallback&& aCallback)
{
    JobQueue jobQueue;
    jobQueue.Wait(job);
    jobQueue.Dispatch([self = MakeShared<DeferredDataBufferToken>(*this), callback = std::move(aCallback)]()
                      { callback(self->buffer); });
}

RED4EXT_INLINE RED4ext::DeferredDataBufferCopyToken::~DeferredDataBufferCopyToken()
{
#ifdef __APPLE__
    // macOS: no out-of-line release exists; see Detail::ReleaseUnk38.
    Detail::ReleaseUnk38(unk30);
#else
    using DestructUnk28_t = void (*)(void**);
    static UniversalRelocFunc<DestructUnk28_t> DestructUnk28(Detail::AddressHashes::ResourceToken_DestructUnk38);
    DestructUnk28(&unk28);
#endif
}

RED4EXT_INLINE void RED4ext::DeferredDataBufferCopyToken::OnLoaded(LoadedCallback&& aCallback) const
{
    JobQueue jobQueue;
    jobQueue.Wait(job);
    jobQueue.Dispatch([self = self.Lock(), callback = std::move(aCallback)]() { callback(self); });
}
