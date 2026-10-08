#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct InputAction_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questInputAction_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    bool anyInputAction; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(anyInputAction))];
    CName inputAction; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(inputAction))];
    bool checkIfButtonAlreadyPressed; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(checkIfButtonAlreadyPressed))];
    bool axisAction; // 41
    uint8_t unk_44[0x44 - (0x41 + sizeof(axisAction))];
    float valueLessThan; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(valueLessThan))];
    float valueMoreThan; // 48
#else
    bool anyInputAction; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName inputAction; // 40
    bool checkIfButtonAlreadyPressed; // 48
    bool axisAction; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    float valueLessThan; // 4C
    float valueMoreThan; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(InputAction_ConditionType, 0x58);
} // namespace quest
using questInputAction_ConditionType = quest::InputAction_ConditionType;
} // namespace RED4ext

// clang-format on
