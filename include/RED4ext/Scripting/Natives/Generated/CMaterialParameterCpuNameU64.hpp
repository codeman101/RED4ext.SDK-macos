#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct CMaterialParameterCpuNameU64 : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterCpuNameU64";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<CMaterialParameter>];
    CName name; // 40
#else
    CName name; // 40
#endif
};
RED4EXT_ASSERT_SIZE(CMaterialParameterCpuNameU64, 0x48);
} // namespace RED4ext

// clang-format on
