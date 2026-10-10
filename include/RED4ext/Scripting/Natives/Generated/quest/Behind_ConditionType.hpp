#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/BehindInteractionEventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISensesConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Behind_ConditionType : quest::ISensesConditionType
{
    static constexpr const char* NAME = "questBehind_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISensesConditionType>];
    game::EntityReference targetRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(targetRef))];
    quest::BehindInteractionEventType eventType; // 70
#else
    game::EntityReference targetRef; // 38
    quest::BehindInteractionEventType eventType; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(Behind_ConditionType, 0x78);
} // namespace quest
using questBehind_ConditionType = quest::Behind_ConditionType;
} // namespace RED4ext

// clang-format on
