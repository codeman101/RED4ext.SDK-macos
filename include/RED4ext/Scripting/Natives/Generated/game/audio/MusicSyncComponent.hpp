#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game::audio
{
struct MusicSyncComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameaudioMusicSyncComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_8D[0x8D - ::RED4ext::Detail::DataSize<ent::IComponent>];
    bool notifyBeats; // 8D
    uint8_t unk_8E[0x8E - (0x8D + sizeof(notifyBeats))];
    bool notifyBars; // 8E
    uint8_t unk_8F[0x8F - (0x8E + sizeof(notifyBars))];
    bool notifyGrid; // 8F
    uint8_t unk_90[0x90 - (0x8F + sizeof(notifyGrid))];
    bool notifyBarProgression; // 90
    uint8_t unk_91[0x91 - (0x90 + sizeof(notifyBarProgression))];
    bool notifyBeatProgression; // 91
    uint8_t unk_98[0x98 - (0x91 + sizeof(notifyBeatProgression))];
    CName syncTrack; // 98
#else
    bool notifyBeats; // 90
    bool notifyBars; // 91
    bool notifyGrid; // 92
    bool notifyBarProgression; // 93
    bool notifyBeatProgression; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    CName syncTrack; // 98
    uint8_t unkA0[0xE8 - 0xA0]; // A0
#endif
};
RED4EXT_ASSERT_SIZE(MusicSyncComponent, 0xE8);
} // namespace game::audio
using gameaudioMusicSyncComponent = game::audio::MusicSyncComponent;
} // namespace RED4ext

// clang-format on
