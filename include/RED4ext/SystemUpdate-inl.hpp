#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/SystemUpdate.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/Natives/Generated/IUpdatableSystem.hpp>

RED4EXT_INLINE void RED4ext::UpdateRegistrar::RegisterUpdate(UpdateTickGroup aGroup, IUpdatableSystem* aSystem,
                                                             const char* aName, GroupUpdateCallback&& aCallback)
{
    using func_t = void (*)(UpdateRegistrar*, UpdateTickGroup, CClass*, const char*, GroupUpdateCallback&&, uint32_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::UpdateRegistrar_RegisterGroupUpdate);

    #if defined(__APPLE__)
    // Mac (R21): the last argument is live. Windows hard-codes 0xA inside the function; on Mac all 128 game call sites pass 0xA.
    func(this, aGroup, aSystem->GetNativeType(), aName, std::forward<GroupUpdateCallback>(aCallback), 0xA);
#else
    func(this, aGroup, aSystem->GetNativeType(), aName, std::forward<GroupUpdateCallback>(aCallback), 0);
#endif
}

RED4EXT_INLINE void RED4ext::UpdateRegistrar::RegisterUpdate(UpdateBucketMask aBuckets, UpdateBucketStage aStage,
                                                             IUpdatableSystem* aSystem, const char* aName,
                                                             BucketUpdateCallback&& aCallback)
{
    using func_t = void (*)(UpdateRegistrar*, UpdateBucketMask, UpdateBucketStage, CClass*, const char*,
                            BucketUpdateCallback&&, uint32_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::UpdateRegistrar_RegisterBucketUpdate);

    #if defined(__APPLE__)
    // Mac (R21): the last argument is live. Windows hard-codes 0xD inside the function; on Mac all 64 game call sites pass 0xD.
    func(this, aBuckets, aStage, aSystem->GetNativeType(), aName, std::forward<BucketUpdateCallback>(aCallback), 0xD);
#else
    func(this, aBuckets, aStage, aSystem->GetNativeType(), aName, std::forward<BucketUpdateCallback>(aCallback), 0);
#endif
}
