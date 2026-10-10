#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISensesConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Vision_ConditionType : quest::ISensesConditionType
{
    static constexpr const char* NAME = "questVision_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISensesConditionType>];
    game::EntityReference observerPuppetRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(observerPuppetRef))];
    game::EntityReference observedTargetRef; // 70
    uint8_t unk_A8[0xA8 - (0x70 + sizeof(observedTargetRef))];
    bool isObservedTargetPlayer; // A8
    uint8_t unk_A9[0xA9 - (0xA8 + sizeof(isObservedTargetPlayer))];
    bool inverted; // A9
    uint8_t unk_AA[0xAA - (0xA9 + sizeof(inverted))];
    bool isInstant; // AA
#else
    game::EntityReference observerPuppetRef; // 38
    game::EntityReference observedTargetRef; // 70
    bool isObservedTargetPlayer; // A8
    bool inverted; // A9
    bool isInstant; // AA
    uint8_t unkAB[0xB0 - 0xAB]; // AB
#endif
};
RED4EXT_ASSERT_SIZE(Vision_ConditionType, 0xB0);
} // namespace quest
using questVision_ConditionType = quest::Vision_ConditionType;
} // namespace RED4ext

// clang-format on
