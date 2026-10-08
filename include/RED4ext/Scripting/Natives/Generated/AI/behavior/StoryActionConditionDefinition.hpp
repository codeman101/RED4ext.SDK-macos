#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/StoryActionType.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct StoryActionConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorStoryActionConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    AI::behavior::StoryActionType action; // 34
#else
    AI::behavior::StoryActionType action; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(StoryActionConditionDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorStoryActionConditionDefinition = AI::behavior::StoryActionConditionDefinition;
} // namespace RED4ext

// clang-format on
