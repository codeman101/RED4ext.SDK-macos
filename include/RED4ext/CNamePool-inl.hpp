#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CNamePool.hpp>
#endif

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const char* aText)
{
#if defined(__APPLE__)
    // Mac ABI: uint64_t(const char*) returns the hash. "None" returns 0.
    static UniversalRelocFunc<uint64_t (*)(const char*)> func(Detail::AddressHashes::CNamePool_AddCstr);
    return CName(func(aText));
#else
    CName result;

    static UniversalRelocFunc<CName* (*)(CName&, const char*)> func(Detail::AddressHashes::CNamePool_AddCstr);
    func(result, aText);
    return result;
#endif
}

RED4EXT_INLINE RED4ext::CName RED4ext::CNamePool::Add(const CString& aText)
{
#if defined(__APPLE__)
    // No Mac body for CNamePool_AddCString. Add the characters.
    return Add(aText.c_str());
#else
    CName result;

    static UniversalRelocFunc<CName* (*)(CName&, const CString&)> func(Detail::AddressHashes::CNamePool_AddCString);
    func(result, aText);
    return result;
#endif
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const char* aText)
{
#if defined(__APPLE__)
    // Mac ABI: uint8_t(uint64_t hash, const char*), hash by value.
    static UniversalRelocFunc<uint8_t (*)(uint64_t, const char*)> func(Detail::AddressHashes::CNamePool_AddPair);
    func(aName.hash, aText);
#else
    static UniversalRelocFunc<uint8_t (*)(const CName&, const char*)> func(Detail::AddressHashes::CNamePool_AddPair);
    func(aName, aText);
#endif
}

RED4EXT_INLINE void RED4ext::CNamePool::Add(const CName& aName, const CString& aText)
{
    Add(aName, aText.c_str());
}

RED4EXT_INLINE const char* RED4ext::CNamePool::Get(const CName& aName)
{
    static UniversalRelocFunc<const char* (*)(const CName&)> func(Detail::AddressHashes::CNamePool_Get);
    auto result = func(aName);
    if (result)
    {
        return result;
    }

    return "";
}
