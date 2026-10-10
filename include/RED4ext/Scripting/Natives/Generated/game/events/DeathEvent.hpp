#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events
{
struct DeathEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeathEvent";
    static constexpr const char* ALIAS = "gameDeathEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<game::Object> instigator; // 40
#else
    WeakHandle<game::Object> instigator; // 40
#endif
};
RED4EXT_ASSERT_SIZE(DeathEvent, 0x50);
} // namespace game::events
using gameeventsDeathEvent = game::events::DeathEvent;
using gameDeathEvent = game::events::DeathEvent;
} // namespace RED4ext

// clang-format on
