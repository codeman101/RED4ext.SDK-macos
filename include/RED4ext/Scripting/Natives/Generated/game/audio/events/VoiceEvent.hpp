#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntInterruptMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoGruntType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct VoiceEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsVoiceEvent";
    static constexpr const char* ALIAS = "VoicePlayEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName eventName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(eventName))];
    audio::VoGruntType gruntType; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(gruntType))];
    audio::VoGruntInterruptMode gruntInterruptMode; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(gruntInterruptMode))];
    bool isV; // 50
#else
    CName eventName; // 40
    audio::VoGruntType gruntType; // 48
    audio::VoGruntInterruptMode gruntInterruptMode; // 4C
    bool isV; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(VoiceEvent, 0x58);
} // namespace game::audio::events
using gameaudioeventsVoiceEvent = game::audio::events::VoiceEvent;
using VoicePlayEvent = game::audio::events::VoiceEvent;
} // namespace RED4ext

// clang-format on
