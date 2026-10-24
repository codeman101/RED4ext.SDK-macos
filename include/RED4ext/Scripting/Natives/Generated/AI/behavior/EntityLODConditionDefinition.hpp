#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EntityLODConditions.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct EntityLODConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorEntityLODConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    DynArray<AI::behavior::EntityLODConditions> any; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(any))];
    DynArray<AI::behavior::EntityLODConditions> all; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(all))];
    DynArray<AI::behavior::EntityLODConditions> none; // 58
#else
    DynArray<AI::behavior::EntityLODConditions> any; // 38
    DynArray<AI::behavior::EntityLODConditions> all; // 48
    DynArray<AI::behavior::EntityLODConditions> none; // 58
#endif
};
RED4EXT_ASSERT_SIZE(EntityLODConditionDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorEntityLODConditionDefinition = AI::behavior::EntityLODConditionDefinition;
} // namespace RED4ext

// clang-format on
