#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StoryTier.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct StoryTierConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorStoryTierConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    Handle<AI::ArgumentMapping> storyTier; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(storyTier))];
    game::StoryTier tier; // 48
#else
    Handle<AI::ArgumentMapping> storyTier; // 38
    game::StoryTier tier; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(StoryTierConditionDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorStoryTierConditionDefinition = AI::behavior::StoryTierConditionDefinition;
} // namespace RED4ext

// clang-format on
