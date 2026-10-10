#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI
{
struct EnemyThreatDetected : AI::AIEvent
{
    static constexpr const char* NAME = "AIEnemyThreatDetected";
    static constexpr const char* ALIAS = "EnemyThreatDetected";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    WeakHandle<ent::Entity> owner; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(owner))];
    WeakHandle<ent::Entity> threat; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(threat))];
    bool status; // 70
#else
    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    bool status; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(EnemyThreatDetected, 0x78);
} // namespace AI
using AIEnemyThreatDetected = AI::EnemyThreatDetected;
using EnemyThreatDetected = AI::EnemyThreatDetected;
} // namespace RED4ext

// clang-format on
