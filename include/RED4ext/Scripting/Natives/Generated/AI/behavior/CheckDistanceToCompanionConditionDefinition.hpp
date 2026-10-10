#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompanionConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct CheckDistanceToCompanionConditionDefinition : AI::behavior::CompanionConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCheckDistanceToCompanionConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<AI::behavior::CompanionConditionDefinition>];
    Handle<AI::ArgumentMapping> distance; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(distance))];
    EComparisonType comparisonOperator; // 68
#else
    Handle<AI::ArgumentMapping> distance; // 58
    EComparisonType comparisonOperator; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(CheckDistanceToCompanionConditionDefinition, 0x70);
} // namespace AI::behavior
using AIbehaviorCheckDistanceToCompanionConditionDefinition = AI::behavior::CheckDistanceToCompanionConditionDefinition;
} // namespace RED4ext

// clang-format on
