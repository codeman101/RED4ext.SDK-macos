#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeSpawnerController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRaceObstacleSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceObstacleSpawnerController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_11C[0x11C - ::RED4ext::Detail::DataSize<game::ui::arcade::ArcadeSpawnerController>];
    float initialMinimumSpawnTime; // 11C
    uint8_t unk_124[0x124 - (0x11C + sizeof(initialMinimumSpawnTime))];
    float spawnRateIncreasePerCycle; // 124
    uint8_t unk_128[0x128 - (0x124 + sizeof(spawnRateIncreasePerCycle))];
    float doubleSpawnDelay; // 128
    uint8_t unk_12C[0x12C - (0x128 + sizeof(doubleSpawnDelay))];
    float initialDoubleSpawnChance; // 12C
    uint8_t unk_130[0x130 - (0x12C + sizeof(initialDoubleSpawnChance))];
    float doubleSpawnChanceIncreasePerLevel; // 130
    uint8_t unk_148[0x148 - (0x130 + sizeof(doubleSpawnChanceIncreasePerLevel))];
    float powerupSpawnTimeDelayMultiplier; // 148
    uint8_t unk_14C[0x14C - (0x148 + sizeof(powerupSpawnTimeDelayMultiplier))];
    float carrotSpawnTime; // 14C
    uint8_t unk_154[0x154 - (0x14C + sizeof(carrotSpawnTime))];
    float appleSpawnTime; // 154
#else
    uint8_t unkD0[0x13C - 0xD0]; // D0
    float initialMinimumSpawnTime; // 13C
    uint8_t unk140[0x144 - 0x140]; // 140
    float spawnRateIncreasePerCycle; // 144
    float doubleSpawnDelay; // 148
    float initialDoubleSpawnChance; // 14C
    float doubleSpawnChanceIncreasePerLevel; // 150
    uint8_t unk154[0x168 - 0x154]; // 154
    float powerupSpawnTimeDelayMultiplier; // 168
    float carrotSpawnTime; // 16C
    uint8_t unk170[0x174 - 0x170]; // 170
    float appleSpawnTime; // 174
    uint8_t unk178[0x188 - 0x178]; // 178
#endif
};
RED4EXT_ASSERT_SIZE(RoachRaceObstacleSpawnerController, 0x188);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceObstacleSpawnerController = game::ui::arcade::RoachRaceObstacleSpawnerController;
} // namespace RED4ext

// clang-format on
