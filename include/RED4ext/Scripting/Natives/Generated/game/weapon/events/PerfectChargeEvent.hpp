#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct PerfectChargeEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsPerfectChargeEvent";
    static constexpr const char* ALIAS = "PerfectChargeEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName type; // 40
#else
    CName type; // 40
#endif
};
RED4EXT_ASSERT_SIZE(PerfectChargeEvent, 0x48);
} // namespace game::weapon::events
using gameweaponeventsPerfectChargeEvent = game::weapon::events::PerfectChargeEvent;
using PerfectChargeEvent = game::weapon::events::PerfectChargeEvent;
} // namespace RED4ext

// clang-format on
