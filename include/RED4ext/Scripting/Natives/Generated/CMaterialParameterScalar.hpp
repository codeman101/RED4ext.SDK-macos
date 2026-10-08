#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct CMaterialParameterScalar : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterScalar";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CMaterialParameter>];
    float scalar; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(scalar))];
    float min; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(min))];
    float max; // 44
#else
    float scalar; // 40
    float min; // 44
    float max; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(CMaterialParameterScalar, 0x50);
} // namespace RED4ext

// clang-format on
