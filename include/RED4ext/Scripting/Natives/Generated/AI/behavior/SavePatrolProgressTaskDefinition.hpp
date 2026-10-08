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
struct SavePatrolProgressTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSavePatrolProgressTaskDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> patrolProgress; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(patrolProgress))];
    Handle<AI::ArgumentMapping> savedState; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(savedState))];
    bool saveOnDeactivation; // 58
#else
    Handle<AI::ArgumentMapping> patrolProgress; // 38
    Handle<AI::ArgumentMapping> savedState; // 48
    bool saveOnDeactivation; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
#endif
};
RED4EXT_ASSERT_SIZE(SavePatrolProgressTaskDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorSavePatrolProgressTaskDefinition = AI::behavior::SavePatrolProgressTaskDefinition;
} // namespace RED4ext

// clang-format on
