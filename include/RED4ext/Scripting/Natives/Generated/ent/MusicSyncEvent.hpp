#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MusicSyncType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct MusicSyncEvent : red::Event
{
    static constexpr const char* NAME = "entMusicSyncEvent";
    static constexpr const char* ALIAS = "MusicSync";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    audio::MusicSyncType syncType; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(syncType))];
    float syncParameter; // 44
#else
    audio::MusicSyncType syncType; // 40
    float syncParameter; // 44
#endif
};
RED4EXT_ASSERT_SIZE(MusicSyncEvent, 0x48);
} // namespace ent
using entMusicSyncEvent = ent::MusicSyncEvent;
using MusicSync = ent::MusicSyncEvent;
} // namespace RED4ext

// clang-format on
