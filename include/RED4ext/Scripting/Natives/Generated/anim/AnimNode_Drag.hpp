#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Drag : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Drag";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex sourceBone; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(sourceBone))];
    anim::TransformIndex outTargetBone; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(outTargetBone))];
    float simulationFps; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(simulationFps))];
    float sourceSpeedMultiplier; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(sourceSpeedMultiplier))];
    bool hasOvershoot; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(hasOvershoot))];
    float overshootDuration; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(overshootDuration))];
    float overshootDetectionMinSpeed; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(overshootDetectionMinSpeed))];
    float overshootDetectionMaxSpeed; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(overshootDetectionMaxSpeed))];
    bool useSteps; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(useSteps))];
    float stepsTargetSpeedMultiplier; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(stepsTargetSpeedMultiplier))];
    float timeBetweenSteps; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(timeBetweenSteps))];
    float timeInStep; // B4
#else
    anim::TransformIndex sourceBone; // 60
    anim::TransformIndex outTargetBone; // 78
    float simulationFps; // 90
    float sourceSpeedMultiplier; // 94
    bool hasOvershoot; // 98
    uint8_t unk99[0x9C - 0x99]; // 99
    float overshootDuration; // 9C
    float overshootDetectionMinSpeed; // A0
    float overshootDetectionMaxSpeed; // A4
    bool useSteps; // A8
    uint8_t unkA9[0xAC - 0xA9]; // A9
    float stepsTargetSpeedMultiplier; // AC
    float timeBetweenSteps; // B0
    float timeInStep; // B4
    uint8_t unkB8[0x180 - 0xB8]; // B8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Drag, 0x180);
} // namespace anim
using animAnimNode_Drag = anim::AnimNode_Drag;
} // namespace RED4ext

// clang-format on
