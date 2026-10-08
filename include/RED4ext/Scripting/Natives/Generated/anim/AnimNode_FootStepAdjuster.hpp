#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_FootStepAdjuster : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FootStepAdjuster";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex leftToeName; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(leftToeName))];
    anim::TransformIndex rightToeName; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(rightToeName))];
    anim::TransformIndex leftFootName; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(leftFootName))];
    anim::TransformIndex rightFootName; // A8
    uint8_t unk_C0[0xC0 - (0xA8 + sizeof(rightFootName))];
    anim::TransformIndex leftCalfName; // C0
    uint8_t unk_D8[0xD8 - (0xC0 + sizeof(leftCalfName))];
    anim::TransformIndex rightCalfName; // D8
    uint8_t unk_F0[0xF0 - (0xD8 + sizeof(rightCalfName))];
    anim::TransformIndex leftThighName; // F0
    uint8_t unk_108[0x108 - (0xF0 + sizeof(leftThighName))];
    anim::TransformIndex rightThighName; // 108
    uint8_t unk_120[0x120 - (0x108 + sizeof(rightThighName))];
    anim::TransformIndex pelvisBoneName; // 120
    uint8_t unk_140[0x140 - (0x120 + sizeof(pelvisBoneName))];
    Vector4 calfHingeAxis; // 140
    uint8_t unk_150[0x150 - (0x140 + sizeof(calfHingeAxis))];
    float IKBlendTime; // 150
    uint8_t unk_154[0x154 - (0x150 + sizeof(IKBlendTime))];
    float pelvisAdjustmentBlendSpeed; // 154
    uint8_t unk_158[0x158 - (0x154 + sizeof(pelvisAdjustmentBlendSpeed))];
    float stepAdjustmentInterval; // 158
    uint8_t unk_15C[0x15C - (0x158 + sizeof(stepAdjustmentInterval))];
    bool adjustPelvisVertically; // 15C
    uint8_t unk_2B0[0x2B0 - (0x15C + sizeof(adjustPelvisVertically))];
    anim::VectorLink controlVectorNode; // 2B0
    uint8_t unk_2D0[0x2D0 - (0x2B0 + sizeof(controlVectorNode))];
    anim::FloatLink controlValueNode; // 2D0
#else
    anim::TransformIndex leftToeName; // 60
    anim::TransformIndex rightToeName; // 78
    anim::TransformIndex leftFootName; // 90
    anim::TransformIndex rightFootName; // A8
    anim::TransformIndex leftCalfName; // C0
    anim::TransformIndex rightCalfName; // D8
    anim::TransformIndex leftThighName; // F0
    anim::TransformIndex rightThighName; // 108
    anim::TransformIndex pelvisBoneName; // 120
    uint8_t unk138[0x140 - 0x138]; // 138
    Vector4 calfHingeAxis; // 140
    float IKBlendTime; // 150
    float pelvisAdjustmentBlendSpeed; // 154
    float stepAdjustmentInterval; // 158
    bool adjustPelvisVertically; // 15C
    uint8_t unk15D[0x2B0 - 0x15D]; // 15D
    anim::VectorLink controlVectorNode; // 2B0
    anim::FloatLink controlValueNode; // 2D0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FootStepAdjuster, 0x2F0);
} // namespace anim
using animAnimNode_FootStepAdjuster = anim::AnimNode_FootStepAdjuster;
} // namespace RED4ext

// clang-format on
