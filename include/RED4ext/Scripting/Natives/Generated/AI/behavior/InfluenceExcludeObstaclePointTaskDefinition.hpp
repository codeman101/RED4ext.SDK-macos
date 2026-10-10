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
struct InfluenceExcludeObstaclePointTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorInfluenceExcludeObstaclePointTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> workspotData; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(workspotData))];
    Handle<AI::ArgumentMapping> mountData; // 48
#else
    Handle<AI::ArgumentMapping> workspotData; // 38
    Handle<AI::ArgumentMapping> mountData; // 48
#endif
};
RED4EXT_ASSERT_SIZE(InfluenceExcludeObstaclePointTaskDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorInfluenceExcludeObstaclePointTaskDefinition = AI::behavior::InfluenceExcludeObstaclePointTaskDefinition;
} // namespace RED4ext

// clang-format on
