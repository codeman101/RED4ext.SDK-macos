#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendFromPoseMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTypeLBC.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BlendFromPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_BlendFromPose";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    float blendTime; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(blendTime))];
    anim::EBlendTypeLBC blendType; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(blendType))];
    anim::EBlendFromPoseMode mode; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(mode))];
    CName requestedByTag; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(requestedByTag))];
    CurveData<float> customBlendCurve; // 78
#else
    float blendTime; // 60
    anim::EBlendTypeLBC blendType; // 64
    anim::EBlendFromPoseMode mode; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    CName requestedByTag; // 70
    CurveData<float> customBlendCurve; // 78
    uint8_t unkB0[0xF8 - 0xB0]; // B0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendFromPose, 0xF8);
} // namespace anim
using animAnimNode_BlendFromPose = anim::AnimNode_BlendFromPose;
} // namespace RED4ext

// clang-format on
