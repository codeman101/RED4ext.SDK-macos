#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ObjectInteractionEventType.hpp>

namespace RED4ext
{
namespace quest
{
struct Interaction_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questInteraction_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    NodeRef objectRef; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(objectRef))];
    quest::ObjectInteractionEventType eventType; // 40
#else
    NodeRef objectRef; // 38
    quest::ObjectInteractionEventType eventType; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(Interaction_ConditionType, 0x48);
} // namespace quest
using questInteraction_ConditionType = quest::Interaction_ConditionType;
} // namespace RED4ext

// clang-format on
