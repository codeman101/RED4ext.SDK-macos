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
struct PredictTargetMovementDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorPredictTargetMovementDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::TaskDefinition>];
    Handle<AI::ArgumentMapping> target; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(target))];
    Handle<AI::ArgumentMapping> timeInterval; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(timeInterval))];
    Handle<AI::ArgumentMapping> result; // 58
#else
    Handle<AI::ArgumentMapping> target; // 38
    Handle<AI::ArgumentMapping> timeInterval; // 48
    Handle<AI::ArgumentMapping> result; // 58
#endif
};
RED4EXT_ASSERT_SIZE(PredictTargetMovementDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorPredictTargetMovementDefinition = AI::behavior::PredictTargetMovementDefinition;
} // namespace RED4ext

// clang-format on
