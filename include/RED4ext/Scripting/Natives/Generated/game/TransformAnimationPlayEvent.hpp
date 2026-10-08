#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationEvent.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimationPlayEvent : game::TransformAnimationEvent
{
    static constexpr const char* NAME = "gameTransformAnimationPlayEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::TransformAnimationEvent>];
    float timeScale; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(timeScale))];
    bool looping; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(looping))];
    uint32_t timesPlayed; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(timesPlayed))];
    bool useEntitySetup; // 54
#else
    float timeScale; // 48
    bool looping; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    uint32_t timesPlayed; // 50
    bool useEntitySetup; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
#endif
};
RED4EXT_ASSERT_SIZE(TransformAnimationPlayEvent, 0x58);
} // namespace game
using gameTransformAnimationPlayEvent = game::TransformAnimationPlayEvent;
} // namespace RED4ext

// clang-format on
