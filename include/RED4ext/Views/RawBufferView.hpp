#pragma once

#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
template<typename T>
struct RawBufferView
{
    RawBufferView(RawBuffer& aRaw)
        : raw(aRaw)
    {
    }

    RawBufferView(DataBuffer& aRaw)
        : raw(aRaw.buffer)
    {
    }

    T& operator*()
    {
        return Front();
    }

    T& operator->()
    {
        return Front();
    }

    T& operator[](uint32_t aIndex)
    {
        return At(aIndex);
    }

    [[nodiscard]] T& At(uint32_t aIndex) const
    {
        return *(reinterpret_cast<T*>(raw.data) + aIndex);
    }

    [[nodiscard]] uint32_t Size() const
    {
        return raw.size / sizeof(T);
    }

    [[nodiscard]] bool IsEmpty() const
    {
        return raw.size == 0;
    }

    [[nodiscard]] T* Begin() const
    {
        return reinterpret_cast<T*>(raw.data);
    }

    [[nodiscard]] T* End() const
    {
        return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(raw.data) + raw.size);
    }

    [[nodiscard]] T& Front() const
    {
        return At(0);
    }

    [[nodiscard]] T& Back() const
    {
        return At(Size() - 1);
    }

#pragma region STL
    [[nodiscard]] inline T* begin() const
    {
        return Begin();
    }

    [[nodiscard]] inline T* end() const
    {
        return End();
    }
#pragma endregion

private:
    RawBuffer& raw;
};
} // namespace RED4ext
