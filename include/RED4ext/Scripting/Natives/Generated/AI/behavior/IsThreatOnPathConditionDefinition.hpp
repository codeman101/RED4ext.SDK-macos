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
struct IsThreatOnPathConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsThreatOnPathConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    Handle<AI::ArgumentMapping> threatObject; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(threatObject))];
    Handle<AI::ArgumentMapping> threatRadius; // 48
#else
    Handle<AI::ArgumentMapping> threatObject; // 38
    Handle<AI::ArgumentMapping> threatRadius; // 48
#endif
};
RED4EXT_ASSERT_SIZE(IsThreatOnPathConditionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorIsThreatOnPathConditionDefinition = AI::behavior::IsThreatOnPathConditionDefinition;
} // namespace RED4ext

// clang-format on
