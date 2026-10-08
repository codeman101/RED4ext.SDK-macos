#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AlwaysSpawnedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SpawnInViewState.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct PopulationSpawnerNode : world::Node
{
    static constexpr const char* NAME = "worldPopulationSpawnerNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    TweakDBID objectRecordId; // 34
    uint8_t unk_40[0x40 - (0x34 + sizeof(objectRecordId))];
    CName appearanceName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(appearanceName))];
    bool spawnOnStart; // 48
    uint8_t unk_49[0x49 - (0x48 + sizeof(spawnOnStart))];
    game::AlwaysSpawnedState alwaysSpawned; // 49
    uint8_t unk_4A[0x4A - (0x49 + sizeof(alwaysSpawned))];
    game::SpawnInViewState spawnInView; // 4A
    uint8_t unk_4B[0x4B - (0x4A + sizeof(spawnInView))];
    bool prefetchAppearance; // 4B
    uint8_t unk_4C[0x4C - (0x4B + sizeof(prefetchAppearance))];
    bool isVehicle; // 4C
#else
    TweakDBID objectRecordId; // 38
    CName appearanceName; // 40
    bool spawnOnStart; // 48
    game::AlwaysSpawnedState alwaysSpawned; // 49
    game::SpawnInViewState spawnInView; // 4A
    bool prefetchAppearance; // 4B
    bool isVehicle; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
#endif
};
RED4EXT_ASSERT_SIZE(PopulationSpawnerNode, 0x50);
} // namespace world
using worldPopulationSpawnerNode = world::PopulationSpawnerNode;
} // namespace RED4ext

// clang-format on
