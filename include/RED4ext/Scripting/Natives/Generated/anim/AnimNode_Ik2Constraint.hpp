#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct AnimNodeSourceChannel_WeightedQuat; }
namespace anim { struct IAnimNodeSourceChannel_Vector; }

namespace anim
{
struct AnimNode_Ik2Constraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Ik2Constraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    Handle<anim::IAnimNodeSourceChannel_Vector> inputTarget; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(inputTarget))];
    Handle<anim::IAnimNodeSourceChannel_Vector> inputPoleVector; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(inputPoleVector))];
    Handle<anim::AnimNodeSourceChannel_WeightedQuat> inputTargetOrientation; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(inputTargetOrientation))];
    anim::TransformIndex firstBoneIndex; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(firstBoneIndex))];
    anim::TransformIndex secondBoneIndex; // A8
    uint8_t unk_C0[0xC0 - (0xA8 + sizeof(secondBoneIndex))];
    anim::TransformIndex endBoneIndex; // C0
    uint8_t unk_D8[0xD8 - (0xC0 + sizeof(endBoneIndex))];
    anim::Axis hingeAxis; // D8
    uint8_t unk_DC[0xDC - (0xD8 + sizeof(hingeAxis))];
    float twistValue; // DC
    uint8_t unk_E0[0xE0 - (0xDC + sizeof(twistValue))];
    float weight; // E0
    uint8_t unk_E8[0xE8 - (0xE0 + sizeof(weight))];
    anim::NamedTrackIndex weightFloatTrack; // E8
    uint8_t unk_100[0x100 - (0xE8 + sizeof(weightFloatTrack))];
    float maxHingeAngle; // 100
    uint8_t unk_128[0x128 - (0x100 + sizeof(maxHingeAngle))];
    anim::FloatLink weightNode; // 128
    uint8_t unk_148[0x148 - (0x128 + sizeof(weightNode))];
    anim::FloatLink twistNode; // 148
#else
    Handle<anim::IAnimNodeSourceChannel_Vector> inputTarget; // 60
    Handle<anim::IAnimNodeSourceChannel_Vector> inputPoleVector; // 70
    Handle<anim::AnimNodeSourceChannel_WeightedQuat> inputTargetOrientation; // 80
    anim::TransformIndex firstBoneIndex; // 90
    anim::TransformIndex secondBoneIndex; // A8
    anim::TransformIndex endBoneIndex; // C0
    anim::Axis hingeAxis; // D8
    float twistValue; // DC
    float weight; // E0
    uint8_t unkE4[0xE8 - 0xE4]; // E4
    anim::NamedTrackIndex weightFloatTrack; // E8
    float maxHingeAngle; // 100
    uint8_t unk104[0x128 - 0x104]; // 104
    anim::FloatLink weightNode; // 128
    anim::FloatLink twistNode; // 148
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Ik2Constraint, 0x168);
} // namespace anim
using animAnimNode_Ik2Constraint = anim::AnimNode_Ik2Constraint;
} // namespace RED4ext

// clang-format on
