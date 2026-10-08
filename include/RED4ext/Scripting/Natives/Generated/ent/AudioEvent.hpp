#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioEventFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EventActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AudioEvent : red::Event
{
    static constexpr const char* NAME = "entAudioEvent";
    static constexpr const char* ALIAS = "AudioEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName eventName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(eventName))];
    CName emitterName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(emitterName))];
    CName nameData; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(nameData))];
    float floatData; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(floatData))];
    audio::EventActionType eventType; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(eventType))];
    audio::AudioEventFlags eventFlags; // 60
#else
    CName eventName; // 40
    CName emitterName; // 48
    CName nameData; // 50
    float floatData; // 58
    audio::EventActionType eventType; // 5C
    audio::AudioEventFlags eventFlags; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(AudioEvent, 0x68);
} // namespace ent
using entAudioEvent = ent::AudioEvent;
using AudioEvent = ent::AudioEvent;
} // namespace RED4ext

// clang-format on
