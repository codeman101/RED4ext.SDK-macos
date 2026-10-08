#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct DebugFailsafeConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorDebugFailsafeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    Handle<AI::ArgumentMapping> logMessage; // 38
#else
    Handle<AI::ArgumentMapping> logMessage; // 38
#endif
};
RED4EXT_ASSERT_SIZE(DebugFailsafeConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorDebugFailsafeConditionDefinition = AI::behavior::DebugFailsafeConditionDefinition;
} // namespace RED4ext

// clang-format on
