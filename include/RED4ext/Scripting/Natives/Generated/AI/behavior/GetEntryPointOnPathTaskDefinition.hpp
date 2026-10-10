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
struct GetEntryPointOnPathTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorGetEntryPointOnPathTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> patrolProgress; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(patrolProgress))];
    Handle<AI::ArgumentMapping> positionOnPath; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(positionOnPath))];
    Handle<AI::ArgumentMapping> entryTangent; // 58
#else
    Handle<AI::ArgumentMapping> patrolProgress; // 38
    Handle<AI::ArgumentMapping> positionOnPath; // 48
    Handle<AI::ArgumentMapping> entryTangent; // 58
#endif
};
RED4EXT_ASSERT_SIZE(GetEntryPointOnPathTaskDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorGetEntryPointOnPathTaskDefinition = AI::behavior::GetEntryPointOnPathTaskDefinition;
} // namespace RED4ext

// clang-format on
