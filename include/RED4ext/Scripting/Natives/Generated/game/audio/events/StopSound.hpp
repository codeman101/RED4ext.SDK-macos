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
struct StopSound : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsStopSound";
    static constexpr const char* ALIAS = "SoundStopEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName soundName; // 40
#else
    CName soundName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(StopSound, 0x48);
} // namespace game::audio::events
using gameaudioeventsStopSound = game::audio::events::StopSound;
using SoundStopEvent = game::audio::events::StopSound;
} // namespace RED4ext

// clang-format on
