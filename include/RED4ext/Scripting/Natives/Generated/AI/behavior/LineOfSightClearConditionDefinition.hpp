#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct LineOfSightClearConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorLineOfSightClearConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    DynArray<CName> collisionFilters; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(collisionFilters))];
    Vector3 offset; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(offset))];
    Handle<AI::ArgumentMapping> target; // 58
#else
    DynArray<CName> collisionFilters; // 38
    Vector3 offset; // 48
    uint8_t unk54[0x58 - 0x54]; // 54
    Handle<AI::ArgumentMapping> target; // 58
#endif
};
RED4EXT_ASSERT_SIZE(LineOfSightClearConditionDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorLineOfSightClearConditionDefinition = AI::behavior::LineOfSightClearConditionDefinition;
} // namespace RED4ext

// clang-format on
