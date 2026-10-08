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
struct ThreatRemoved : AI::AIEvent
{
    static constexpr const char* NAME = "AIThreatRemoved";
    static constexpr const char* ALIAS = "ThreatRemoved";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    WeakHandle<ent::Entity> owner; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(owner))];
    WeakHandle<ent::Entity> threat; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(threat))];
    bool isHostile; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(isHostile))];
    bool isEnemy; // 71
    uint8_t unk_72[0x72 - (0x71 + sizeof(isEnemy))];
    bool isDead; // 72
    uint8_t unk_73[0x73 - (0x72 + sizeof(isDead))];
    bool distanceBasedInstantDrop; // 73
#else
    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    bool isHostile; // 70
    bool isEnemy; // 71
    bool isDead; // 72
    bool distanceBasedInstantDrop; // 73
    uint8_t unk74[0x78 - 0x74]; // 74
#endif
};
RED4EXT_ASSERT_SIZE(ThreatRemoved, 0x78);
} // namespace AI
using AIThreatRemoved = AI::ThreatRemoved;
using ThreatRemoved = AI::ThreatRemoved;
} // namespace RED4ext

// clang-format on
