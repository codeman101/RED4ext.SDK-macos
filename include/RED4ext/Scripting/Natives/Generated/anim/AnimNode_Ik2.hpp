#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_Ik2 : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_Ik2";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::TransformIndex firstBone; // 48
    uint8_t unk_60[0x60 - (0x48 + sizeof(firstBone))];
    anim::TransformIndex secondBone; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(secondBone))];
    anim::TransformIndex endBone; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(endBone))];
    anim::Axis hingeAxis; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(hingeAxis))];
    float minHingeAngleDegrees; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(minHingeAngleDegrees))];
    float maxHingeAngleDegrees; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(maxHingeAngleDegrees))];
    float firstBoneIkGain; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(firstBoneIkGain))];
    float secondBoneIkGain; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(secondBoneIkGain))];
    float endBoneIkGain; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(endBoneIkGain))];
    bool enforceEndPosition; // A8
    uint8_t unk_A9[0xA9 - (0xA8 + sizeof(enforceEndPosition))];
    bool enforceEndOrientation; // A9
    uint8_t unk_B0[0xB0 - (0xA9 + sizeof(enforceEndOrientation))];
    Vector4 endBoneOffsetPositionLS; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(endBoneOffsetPositionLS))];
    anim::TransformIndex bone; // C0
    uint8_t unk_D8[0xD8 - (0xC0 + sizeof(bone))];
    anim::NamedTrackIndex floatTrack; // D8
    uint8_t unk_120[0x120 - (0xD8 + sizeof(floatTrack))];
    anim::PoseLink inputPoseNode; // 120
    uint8_t unk_138[0x138 - (0x120 + sizeof(inputPoseNode))];
    anim::FloatLink weightNode; // 138
    uint8_t unk_158[0x158 - (0x138 + sizeof(weightNode))];
    anim::VectorLink endTargetPositionNode; // 158
    uint8_t unk_178[0x178 - (0x158 + sizeof(endTargetPositionNode))];
    anim::QuaternionLink endTargetOrientationNode; // 178
#else
    anim::TransformIndex firstBone; // 48
    anim::TransformIndex secondBone; // 60
    anim::TransformIndex endBone; // 78
    anim::Axis hingeAxis; // 90
    float minHingeAngleDegrees; // 94
    float maxHingeAngleDegrees; // 98
    float firstBoneIkGain; // 9C
    float secondBoneIkGain; // A0
    float endBoneIkGain; // A4
    bool enforceEndPosition; // A8
    bool enforceEndOrientation; // A9
    uint8_t unkAA[0xB0 - 0xAA]; // AA
    Vector4 endBoneOffsetPositionLS; // B0
    anim::TransformIndex bone; // C0
    anim::NamedTrackIndex floatTrack; // D8
    uint8_t unkF0[0x120 - 0xF0]; // F0
    anim::PoseLink inputPoseNode; // 120
    anim::FloatLink weightNode; // 138
    anim::VectorLink endTargetPositionNode; // 158
    anim::QuaternionLink endTargetOrientationNode; // 178
    uint8_t unk198[0x1A0 - 0x198]; // 198
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Ik2, 0x1A0);
} // namespace anim
using animAnimNode_Ik2 = anim::AnimNode_Ik2;
} // namespace RED4ext

// clang-format on
