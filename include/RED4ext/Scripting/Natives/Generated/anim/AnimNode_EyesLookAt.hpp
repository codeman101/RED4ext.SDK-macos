#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_EyesLookAt : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_EyesLookAt";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::FloatLink weightALink; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(weightALink))];
    anim::FloatLink weightBLink; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(weightBLink))];
    anim::FloatLink transitionWeightLink; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(transitionWeightLink))];
    anim::VectorLink targetALink; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(targetALink))];
    anim::VectorLink targetBLink; // E0
    uint8_t unk_108[0x108 - (0xE0 + sizeof(targetBLink))];
    anim::TransformIndex leftEye; // 108
    uint8_t unk_120[0x120 - (0x108 + sizeof(leftEye))];
    anim::TransformIndex rightEye; // 120
    uint8_t unk_138[0x138 - (0x120 + sizeof(rightEye))];
    anim::TransformIndex head; // 138
    uint8_t unk_150[0x150 - (0x138 + sizeof(head))];
    anim::Axis forwardDirection; // 150
#else
    anim::FloatLink weightALink; // 60
    anim::FloatLink weightBLink; // 80
    anim::FloatLink transitionWeightLink; // A0
    anim::VectorLink targetALink; // C0
    anim::VectorLink targetBLink; // E0
    uint8_t unk100[0x108 - 0x100]; // 100
    anim::TransformIndex leftEye; // 108
    anim::TransformIndex rightEye; // 120
    anim::TransformIndex head; // 138
    anim::Axis forwardDirection; // 150
    uint8_t unk154[0x158 - 0x154]; // 154
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_EyesLookAt, 0x158);
} // namespace anim
using animAnimNode_EyesLookAt = anim::AnimNode_EyesLookAt;
} // namespace RED4ext

// clang-format on
