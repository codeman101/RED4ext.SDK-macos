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
struct FindClosestPointOnTrafficPathTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindClosestPointOnTrafficPathTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> positionOnPath; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(positionOnPath))];
    Handle<AI::ArgumentMapping> enterClosest; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(enterClosest))];
    Handle<AI::ArgumentMapping> pathDirection; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(pathDirection))];
    Handle<AI::ArgumentMapping> avoidedPosition; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(avoidedPosition))];
    Handle<AI::ArgumentMapping> useThreatPosAsAvoidedPos; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(useThreatPosAsAvoidedPos))];
    Handle<AI::ArgumentMapping> avoidedPositionDistance; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(avoidedPositionDistance))];
    Handle<AI::ArgumentMapping> usePreviousPosition; // 98
    uint8_t unk_A8[0xA8 - (0x98 + sizeof(usePreviousPosition))];
    Handle<AI::ArgumentMapping> checkRoadIntersection; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(checkRoadIntersection))];
    Handle<AI::ArgumentMapping> joinTrafficSettings; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(joinTrafficSettings))];
    Handle<AI::ArgumentMapping> workspotData; // C8
#else
    Handle<AI::ArgumentMapping> positionOnPath; // 38
    Handle<AI::ArgumentMapping> enterClosest; // 48
    Handle<AI::ArgumentMapping> pathDirection; // 58
    Handle<AI::ArgumentMapping> avoidedPosition; // 68
    Handle<AI::ArgumentMapping> useThreatPosAsAvoidedPos; // 78
    Handle<AI::ArgumentMapping> avoidedPositionDistance; // 88
    Handle<AI::ArgumentMapping> usePreviousPosition; // 98
    Handle<AI::ArgumentMapping> checkRoadIntersection; // A8
    Handle<AI::ArgumentMapping> joinTrafficSettings; // B8
    Handle<AI::ArgumentMapping> workspotData; // C8
#endif
};
RED4EXT_ASSERT_SIZE(FindClosestPointOnTrafficPathTaskDefinition, 0xD8);
} // namespace AI::behavior
using AIbehaviorFindClosestPointOnTrafficPathTaskDefinition = AI::behavior::FindClosestPointOnTrafficPathTaskDefinition;
} // namespace RED4ext

// clang-format on
