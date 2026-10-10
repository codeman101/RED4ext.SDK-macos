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
struct PlaySound : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsPlaySound";
    static constexpr const char* ALIAS = "SoundPlayEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName soundName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(soundName))];
    CName emitterName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(emitterName))];
    CName audioTag; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(audioTag))];
    float seekTime; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(seekTime))];
    bool playUnique; // 5C
#else
    CName soundName; // 40
    CName emitterName; // 48
    CName audioTag; // 50
    float seekTime; // 58
    bool playUnique; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
#endif
};
RED4EXT_ASSERT_SIZE(PlaySound, 0x60);
} // namespace game::audio::events
using gameaudioeventsPlaySound = game::audio::events::PlaySound;
using SoundPlayEvent = game::audio::events::PlaySound;
} // namespace RED4ext

// clang-format on
