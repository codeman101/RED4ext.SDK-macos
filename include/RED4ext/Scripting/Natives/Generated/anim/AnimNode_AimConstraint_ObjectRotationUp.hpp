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
struct AnimNode_AimConstraint_ObjectRotationUp : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AimConstraint_ObjectRotationUp";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex targetTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(targetTransform))];
    anim::TransformIndex upTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(upTransform))];
    Vector3 upTransformVector; // 90
    uint8_t unk_9C[0x9C - (0x90 + sizeof(upTransformVector))];
    Vector3 forwardAxisLS; // 9C
    uint8_t unk_A8[0xA8 - (0x9C + sizeof(forwardAxisLS))];
    Vector3 upAxisLS; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(upAxisLS))];
    anim::TransformIndex transformIndex; // B8
    uint8_t unk_D0[0xD0 - (0xB8 + sizeof(transformIndex))];
    anim::ConstraintWeightMode weightMode; // D0
    uint8_t unk_D4[0xD4 - (0xD0 + sizeof(weightMode))];
    float weight; // D4
    uint8_t unk_D8[0xD8 - (0xD4 + sizeof(weight))];
    anim::NamedTrackIndex weightFloatTrack; // D8
#else
    anim::TransformIndex targetTransform; // 60
    anim::TransformIndex upTransform; // 78
    Vector3 upTransformVector; // 90
    Vector3 forwardAxisLS; // 9C
    Vector3 upAxisLS; // A8
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    anim::TransformIndex transformIndex; // B8
    anim::ConstraintWeightMode weightMode; // D0
    float weight; // D4
    anim::NamedTrackIndex weightFloatTrack; // D8
    uint8_t unkF0[0x118 - 0xF0]; // F0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AimConstraint_ObjectRotationUp, 0x118);
} // namespace anim
using animAnimNode_AimConstraint_ObjectRotationUp = anim::AnimNode_AimConstraint_ObjectRotationUp;
} // namespace RED4ext

// clang-format on
