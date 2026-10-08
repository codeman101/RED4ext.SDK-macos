#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventBaseEvent : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventBaseEvent";
    static constexpr const char* ALIAS = "PSMBaseEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName id; // 40
#else
    CName id; // 40
#endif
};
RED4EXT_ASSERT_SIZE(MachineeventBaseEvent, 0x48);
} // namespace game::state
using gamestateMachineeventBaseEvent = game::state::MachineeventBaseEvent;
using PSMBaseEvent = game::state::MachineeventBaseEvent;
} // namespace RED4ext

// clang-format on
