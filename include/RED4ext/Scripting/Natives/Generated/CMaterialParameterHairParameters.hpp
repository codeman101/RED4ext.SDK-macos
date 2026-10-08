#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct CHairProfile;

struct CMaterialParameterHairParameters : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterHairParameters";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<CMaterialParameter>];
    Ref<CHairProfile> hairProfile; // 40
#else
    Ref<CHairProfile> hairProfile; // 40
#endif
};
RED4EXT_ASSERT_SIZE(CMaterialParameterHairParameters, 0x58);
} // namespace RED4ext

// clang-format on
