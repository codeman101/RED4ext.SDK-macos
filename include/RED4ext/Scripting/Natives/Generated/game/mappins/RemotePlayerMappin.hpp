#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct RemotePlayerMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsRemotePlayerMappin";
    static constexpr const char* ALIAS = "RemotePlayerMappin";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_FC[0xFC - ::RED4ext::Detail::DataSize<game::mappins::RuntimeMappin>];
    int32_t vitals; // FC
    uint8_t unk_100[0x100 - (0xFC + sizeof(vitals))];
    bool hasMissionData; // 100
#else
    int32_t vitals; // 108
    bool hasMissionData; // 10C
    uint8_t unk10D[0x118 - 0x10D]; // 10D
#endif
};
RED4EXT_ASSERT_SIZE(RemotePlayerMappin, 0x118);
} // namespace game::mappins
using gamemappinsRemotePlayerMappin = game::mappins::RemotePlayerMappin;
using RemotePlayerMappin = game::mappins::RemotePlayerMappin;
} // namespace RED4ext

// clang-format on
