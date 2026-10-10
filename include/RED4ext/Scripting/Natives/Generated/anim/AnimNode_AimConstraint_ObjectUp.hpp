#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AimConstraint_ObjectUp : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AimConstraint_ObjectUp";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex targetTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(targetTransform))];
    anim::TransformIndex upTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(upTransform))];
    Vector3 forwardAxisLS; // 90
    uint8_t unk_9C[0x9C - (0x90 + sizeof(forwardAxisLS))];
    Vector3 upAxisLS; // 9C
    uint8_t unk_A8[0xA8 - (0x9C + sizeof(upAxisLS))];
    anim::TransformIndex transformIndex; // A8
    uint8_t unk_C0[0xC0 - (0xA8 + sizeof(transformIndex))];
    anim::ConstraintWeightMode weightMode; // C0
    uint8_t unk_C4[0xC4 - (0xC0 + sizeof(weightMode))];
    float weight; // C4
    uint8_t unk_C8[0xC8 - (0xC4 + sizeof(weight))];
    anim::NamedTrackIndex weightFloatTrack; // C8
#else
    anim::TransformIndex targetTransform; // 60
    anim::TransformIndex upTransform; // 78
    Vector3 forwardAxisLS; // 90
    Vector3 upAxisLS; // 9C
    anim::TransformIndex transformIndex; // A8
    anim::ConstraintWeightMode weightMode; // C0
    float weight; // C4
    anim::NamedTrackIndex weightFloatTrack; // C8
    uint8_t unkE0[0x108 - 0xE0]; // E0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AimConstraint_ObjectUp, 0x108);
} // namespace anim
using animAnimNode_AimConstraint_ObjectUp = anim::AnimNode_AimConstraint_ObjectUp;
} // namespace RED4ext

// clang-format on
