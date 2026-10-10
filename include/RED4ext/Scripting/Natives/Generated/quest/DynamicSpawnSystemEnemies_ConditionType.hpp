#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistanceConditionType.hpp>

namespace RED4ext
{
namespace quest { struct DynamicSpawnSystemEnemyDistance; }
namespace quest { struct ValueDistance; }

namespace quest
{
struct DynamicSpawnSystemEnemies_ConditionType : quest::IDistanceConditionType
{
    static constexpr const char* NAME = "questDynamicSpawnSystemEnemies_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IDistanceConditionType>];
    Handle<quest::DynamicSpawnSystemEnemyDistance> distanceDefinition1; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(distanceDefinition1))];
    Handle<quest::ValueDistance> distanceDefinition2; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(distanceDefinition2))];
    EComparisonType comparisonType; // 58
#else
    Handle<quest::DynamicSpawnSystemEnemyDistance> distanceDefinition1; // 38
    Handle<quest::ValueDistance> distanceDefinition2; // 48
    EComparisonType comparisonType; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(DynamicSpawnSystemEnemies_ConditionType, 0x60);
} // namespace quest
using questDynamicSpawnSystemEnemies_ConditionType = quest::DynamicSpawnSystemEnemies_ConditionType;
} // namespace RED4ext

// clang-format on
