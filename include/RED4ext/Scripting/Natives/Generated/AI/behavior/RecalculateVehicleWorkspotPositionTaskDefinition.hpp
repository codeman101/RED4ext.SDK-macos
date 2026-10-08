#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct RecalculateVehicleWorkspotPositionTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorRecalculateVehicleWorkspotPositionTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> mountData; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(mountData))];
    Handle<AI::ArgumentMapping> workspotData; // 48
#else
    Handle<AI::ArgumentMapping> mountData; // 38
    Handle<AI::ArgumentMapping> workspotData; // 48
#endif
};
RED4EXT_ASSERT_SIZE(RecalculateVehicleWorkspotPositionTaskDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorRecalculateVehicleWorkspotPositionTaskDefinition = AI::behavior::RecalculateVehicleWorkspotPositionTaskDefinition;
} // namespace RED4ext

// clang-format on
