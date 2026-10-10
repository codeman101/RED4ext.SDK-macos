#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct MountRequestConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorMountRequestConditionDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<AI::behavior::ConditionDefinition>];
    bool testMountRequest; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(testMountRequest))];
    bool testUnmountRequest; // 59
    uint8_t unk_5A[0x5A - (0x59 + sizeof(testUnmountRequest))];
    bool acceptInstant; // 5A
    uint8_t unk_5B[0x5B - (0x5A + sizeof(acceptInstant))];
    bool acceptNotInstant; // 5B
#else
    uint8_t unk38[0x58 - 0x38]; // 38
    bool testMountRequest; // 58
    bool testUnmountRequest; // 59
    bool acceptInstant; // 5A
    bool acceptNotInstant; // 5B
    uint8_t unk5C[0x60 - 0x5C]; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(MountRequestConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorMountRequestConditionDefinition = AI::behavior::MountRequestConditionDefinition;
} // namespace RED4ext

// clang-format on
