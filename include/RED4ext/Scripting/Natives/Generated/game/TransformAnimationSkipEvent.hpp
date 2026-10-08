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
struct TransformAnimationSkipEvent : game::TransformAnimationEvent
{
    static constexpr const char* NAME = "gameTransformAnimationSkipEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::TransformAnimationEvent>];
    float time; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(time))];
    bool skipToEnd; // 4C
    uint8_t unk_4D[0x4D - (0x4C + sizeof(skipToEnd))];
    bool forcePlay; // 4D
#else
    float time; // 48
    bool skipToEnd; // 4C
    bool forcePlay; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
#endif
};
RED4EXT_ASSERT_SIZE(TransformAnimationSkipEvent, 0x50);
} // namespace game
using gameTransformAnimationSkipEvent = game::TransformAnimationSkipEvent;
} // namespace RED4ext

// clang-format on
