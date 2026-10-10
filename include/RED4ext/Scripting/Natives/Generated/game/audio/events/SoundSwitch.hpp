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
struct SoundSwitch : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsSoundSwitch";
    static constexpr const char* ALIAS = "SoundSwitchEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName switchName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(switchName))];
    CName switchValue; // 48
#else
    CName switchName; // 40
    CName switchValue; // 48
#endif
};
RED4EXT_ASSERT_SIZE(SoundSwitch, 0x50);
} // namespace game::audio::events
using gameaudioeventsSoundSwitch = game::audio::events::SoundSwitch;
using SoundSwitchEvent = game::audio::events::SoundSwitch;
} // namespace RED4ext

// clang-format on
