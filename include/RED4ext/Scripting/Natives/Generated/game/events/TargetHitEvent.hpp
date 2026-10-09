#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct __declspec(align(0x10)) TargetHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsTargetHitEvent";
    static constexpr const char* ALIAS = "gameTargetHitEvent";

#if defined(__APPLE__)
    uint8_t unkF0[0xF8 - 0xF0]; // F0
#else
    uint8_t unkF0[0x100 - 0xF0]; // F0
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(TargetHitEvent, 0x100);
} // namespace game::events
using gameeventsTargetHitEvent = game::events::TargetHitEvent;
using gameTargetHitEvent = game::events::TargetHitEvent;
} // namespace RED4ext

// clang-format on
