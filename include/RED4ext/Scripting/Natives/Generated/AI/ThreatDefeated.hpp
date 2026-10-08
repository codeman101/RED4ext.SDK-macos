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
struct ThreatDefeated : AI::AIEvent
{
    static constexpr const char* NAME = "AIThreatDefeated";
    static constexpr const char* ALIAS = "ThreatDefeated";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    WeakHandle<ent::Entity> owner; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(owner))];
    WeakHandle<ent::Entity> threat; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(threat))];
    uint32_t id; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(id))];
    bool detected; // 74
#else
    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    uint32_t id; // 70
    bool detected; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
#endif
};
RED4EXT_ASSERT_SIZE(ThreatDefeated, 0x78);
} // namespace AI
using AIThreatDefeated = AI::ThreatDefeated;
using ThreatDefeated = AI::ThreatDefeated;
} // namespace RED4ext

// clang-format on
