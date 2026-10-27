#pragma once

#include <RED4ext/Containers/DynArray.hpp>

namespace RED4ext
{
template<typename T>
struct DynArrayView
{
    DynArrayView(DynArray<uint8_t>& aRaw)
        : raw(aRaw)
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
        return *(reinterpret_cast<T*>(raw.Data()) + aIndex);
    }

    [[nodiscard]] uint32_t Size() const
    {
        return raw.Size() / sizeof(T);
    }

    [[nodiscard]] bool IsEmpty() const
    {
        return raw.IsEmpty();
    }

    [[nodiscard]] T* Begin() const
    {
        return reinterpret_cast<T*>(raw.Begin());
    }

    [[nodiscard]] T* End() const
    {
        return reinterpret_cast<T*>(raw.End());
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
    DynArray<uint8_t>& raw;
};
} // namespace RED4ext
