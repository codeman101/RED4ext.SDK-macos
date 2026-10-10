#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct EventWithTagConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorEventWithTagConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    CName tag; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(tag))];
    bool consumeEvent; // 40
#else
    CName tag; // 38
    bool consumeEvent; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(EventWithTagConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorEventWithTagConditionDefinition = AI::behavior::EventWithTagConditionDefinition;
} // namespace RED4ext

// clang-format on
