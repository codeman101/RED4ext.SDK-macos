#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct GameTimeDelay_ConditionType : quest::ITimeConditionType
{
    static constexpr const char* NAME = "questGameTimeDelay_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ITimeConditionType>];
    uint32_t days; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(days))];
    uint32_t hours; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(hours))];
    uint32_t minutes; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(minutes))];
    uint32_t seconds; // 40
#else
    uint32_t days; // 38
    uint32_t hours; // 3C
    uint32_t minutes; // 40
    uint32_t seconds; // 44
#endif
};
RED4EXT_ASSERT_SIZE(GameTimeDelay_ConditionType, 0x48);
} // namespace quest
using questGameTimeDelay_ConditionType = quest::GameTimeDelay_ConditionType;
} // namespace RED4ext

// clang-format on
