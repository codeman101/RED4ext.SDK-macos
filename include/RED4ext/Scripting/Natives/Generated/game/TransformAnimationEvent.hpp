#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimationEvent : red::Event
{
    static constexpr const char* NAME = "gameTransformAnimationEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName animationName; // 40
#else
    CName animationName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(TransformAnimationEvent, 0x48);
} // namespace game
using gameTransformAnimationEvent = game::TransformAnimationEvent;
} // namespace RED4ext

// clang-format on
