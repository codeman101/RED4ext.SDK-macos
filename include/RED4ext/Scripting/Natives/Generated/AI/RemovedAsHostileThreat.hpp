#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI { struct TargetTrackerComponent; }

namespace AI
{
struct RemovedAsHostileThreat : AI::AIEvent
{
    static constexpr const char* NAME = "AIRemovedAsHostileThreat";
    static constexpr const char* ALIAS = "RemovedAsHostileThreat";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    WeakHandle<AI::TargetTrackerComponent> threateningEntity; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(threateningEntity))];
    bool threateningEntityCanTriggersCombat; // 60
#else
    WeakHandle<AI::TargetTrackerComponent> threateningEntity; // 50
    bool threateningEntityCanTriggersCombat; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
#endif
};
RED4EXT_ASSERT_SIZE(RemovedAsHostileThreat, 0x68);
} // namespace AI
using AIRemovedAsHostileThreat = AI::RemovedAsHostileThreat;
using RemovedAsHostileThreat = AI::RemovedAsHostileThreat;
} // namespace RED4ext

// clang-format on
