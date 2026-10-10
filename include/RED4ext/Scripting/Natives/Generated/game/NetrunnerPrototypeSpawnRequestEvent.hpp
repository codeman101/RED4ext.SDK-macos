#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct NetrunnerPrototypeSpawnRequestEvent : red::Event
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeSpawnRequestEvent";
    static constexpr const char* ALIAS = "NetrunnerPrototypeSpawnRequestEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName whatToSpawn; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(whatToSpawn))];
    Vector3 whereToSpawn; // 48
    uint8_t unk_54[0x54 - (0x48 + sizeof(whereToSpawn))];
    Vector3 scale; // 54
    uint8_t unk_60[0x60 - (0x54 + sizeof(scale))];
    uint8_t colorIndex; // 60
#else
    CName whatToSpawn; // 40
    Vector3 whereToSpawn; // 48
    Vector3 scale; // 54
    uint8_t colorIndex; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
#endif
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeSpawnRequestEvent, 0x68);
} // namespace game
using gameNetrunnerPrototypeSpawnRequestEvent = game::NetrunnerPrototypeSpawnRequestEvent;
using NetrunnerPrototypeSpawnRequestEvent = game::NetrunnerPrototypeSpawnRequestEvent;
} // namespace RED4ext

// clang-format on
