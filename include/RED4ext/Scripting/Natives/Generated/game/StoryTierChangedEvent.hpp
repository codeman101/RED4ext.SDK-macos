#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StoryTier.hpp>

namespace RED4ext
{
namespace game
{
struct StoryTierChangedEvent : AI::AIEvent
{
    static constexpr const char* NAME = "gameStoryTierChangedEvent";
    static constexpr const char* ALIAS = "StoryTierChangedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    game::StoryTier newTier; // 4C
#else
    game::StoryTier newTier; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(StoryTierChangedEvent, 0x58);
} // namespace game
using gameStoryTierChangedEvent = game::StoryTierChangedEvent;
using StoryTierChangedEvent = game::StoryTierChangedEvent;
} // namespace RED4ext

// clang-format on
