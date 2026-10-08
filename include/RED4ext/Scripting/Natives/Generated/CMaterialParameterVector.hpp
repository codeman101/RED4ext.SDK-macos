#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CMaterialParameterVector : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterVector";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<CMaterialParameter>];
    Vector4 vector; // 40
#else
    Vector4 vector; // 40
#endif
};
RED4EXT_ASSERT_SIZE(CMaterialParameterVector, 0x50);
} // namespace RED4ext

// clang-format on
