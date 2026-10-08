#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct DropItemEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDropItemEvent";
    static constexpr const char* ALIAS = "gameDropItemEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    TweakDBID slotId; // 40
#else
    TweakDBID slotId; // 40
#endif
};
RED4EXT_ASSERT_SIZE(DropItemEvent, 0x48);
} // namespace game::events
using gameeventsDropItemEvent = game::events::DropItemEvent;
using gameDropItemEvent = game::events::DropItemEvent;
} // namespace RED4ext

// clang-format on
