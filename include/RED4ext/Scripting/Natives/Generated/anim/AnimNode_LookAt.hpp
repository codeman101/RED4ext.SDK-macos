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
struct AnimNode_LookAt : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LookAt";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex transform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(transform))];
    anim::Axis forwardAxis; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(forwardAxis))];
    float limitAngle; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(limitAngle))];
    anim::Axis limitAxis; // 84
    uint8_t unk_88[0x88 - (0x84 + sizeof(limitAxis))];
    bool useLimits; // 88
    uint8_t unk_B0[0xB0 - (0x88 + sizeof(useLimits))];
    anim::VectorLink targetNode; // B0
    uint8_t unk_D0[0xD0 - (0xB0 + sizeof(targetNode))];
    anim::FloatLink weightNode; // D0
#else
    anim::TransformIndex transform; // 60
    anim::Axis forwardAxis; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    float limitAngle; // 80
    anim::Axis limitAxis; // 84
    bool useLimits; // 88
    uint8_t unk89[0xB0 - 0x89]; // 89
    anim::VectorLink targetNode; // B0
    anim::FloatLink weightNode; // D0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAt, 0xF0);
} // namespace anim
using animAnimNode_LookAt = anim::AnimNode_LookAt;
} // namespace RED4ext

// clang-format on
