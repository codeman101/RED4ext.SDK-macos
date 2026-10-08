#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct MusicEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsMusicEvent";
    static constexpr const char* ALIAS = "MusicEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName eventName; // 40
#else
    CName eventName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(MusicEvent, 0x48);
} // namespace game::audio::events
using gameaudioeventsMusicEvent = game::audio::events::MusicEvent;
using MusicEvent = game::audio::events::MusicEvent;
} // namespace RED4ext

// clang-format on
