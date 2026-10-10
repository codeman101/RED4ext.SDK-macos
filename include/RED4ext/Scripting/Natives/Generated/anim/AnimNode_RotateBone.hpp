#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ETransformAxis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_RotateBone : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_RotateBone";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    float scale; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(scale))];
    float biasAngle; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(biasAngle))];
    float minAngle; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(minAngle))];
    float maxAngle; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(maxAngle))];
    anim::TransformIndex bone; // 58
    uint8_t unk_70[0x70 - (0x58 + sizeof(bone))];
    anim::ETransformAxis axis; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(axis))];
    bool clampRotation; // 74
    uint8_t unk_75[0x75 - (0x74 + sizeof(clampRotation))];
    bool useIncrementalMode; // 75
    uint8_t unk_76[0x76 - (0x75 + sizeof(useIncrementalMode))];
    bool resetOnActivation; // 76
    uint8_t unk_77[0x77 - (0x76 + sizeof(resetOnActivation))];
    bool inModelSpace; // 77
    uint8_t unk_88[0x88 - (0x77 + sizeof(inModelSpace))];
    anim::PoseLink inputNode; // 88
    uint8_t unk_A0[0xA0 - (0x88 + sizeof(inputNode))];
    anim::FloatLink angleNode; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(angleNode))];
    anim::FloatLink minValueNode; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(minValueNode))];
    anim::FloatLink maxValueNode; // E0
#else
    float scale; // 48
    float biasAngle; // 4C
    float minAngle; // 50
    float maxAngle; // 54
    anim::TransformIndex bone; // 58
    anim::ETransformAxis axis; // 70
    bool clampRotation; // 74
    bool useIncrementalMode; // 75
    bool resetOnActivation; // 76
    bool inModelSpace; // 77
    uint8_t unk78[0x88 - 0x78]; // 78
    anim::PoseLink inputNode; // 88
    anim::FloatLink angleNode; // A0
    anim::FloatLink minValueNode; // C0
    anim::FloatLink maxValueNode; // E0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_RotateBone, 0x100);
} // namespace anim
using animAnimNode_RotateBone = anim::AnimNode_RotateBone;
} // namespace RED4ext

// clang-format on
