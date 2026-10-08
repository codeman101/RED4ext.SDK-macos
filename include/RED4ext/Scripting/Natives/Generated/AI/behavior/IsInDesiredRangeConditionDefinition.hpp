#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompanionConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct IsInDesiredRangeConditionDefinition : AI::behavior::CompanionConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsInDesiredRangeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<AI::behavior::CompanionConditionDefinition>];
    Handle<AI::ArgumentMapping> desiredDistance; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(desiredDistance))];
    Handle<AI::ArgumentMapping> deadZoneRadius; // 68
#else
    Handle<AI::ArgumentMapping> desiredDistance; // 58
    Handle<AI::ArgumentMapping> deadZoneRadius; // 68
#endif
};
RED4EXT_ASSERT_SIZE(IsInDesiredRangeConditionDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorIsInDesiredRangeConditionDefinition = AI::behavior::IsInDesiredRangeConditionDefinition;
} // namespace RED4ext

// clang-format on
