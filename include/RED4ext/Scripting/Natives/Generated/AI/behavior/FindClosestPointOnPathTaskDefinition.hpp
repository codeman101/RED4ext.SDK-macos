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
struct FindClosestPointOnPathTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindClosestPointOnPathTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> path; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(path))];
    Handle<AI::ArgumentMapping> forceStartFromClosest; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(forceStartFromClosest))];
    Handle<AI::ArgumentMapping> patrolProgress; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(patrolProgress))];
    Handle<AI::ArgumentMapping> positionOnPath; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(positionOnPath))];
    Handle<AI::ArgumentMapping> entryTangent; // 78
#else
    Handle<AI::ArgumentMapping> path; // 38
    Handle<AI::ArgumentMapping> forceStartFromClosest; // 48
    Handle<AI::ArgumentMapping> patrolProgress; // 58
    Handle<AI::ArgumentMapping> positionOnPath; // 68
    Handle<AI::ArgumentMapping> entryTangent; // 78
#endif
};
RED4EXT_ASSERT_SIZE(FindClosestPointOnPathTaskDefinition, 0x88);
} // namespace AI::behavior
using AIbehaviorFindClosestPointOnPathTaskDefinition = AI::behavior::FindClosestPointOnPathTaskDefinition;
} // namespace RED4ext

// clang-format on
