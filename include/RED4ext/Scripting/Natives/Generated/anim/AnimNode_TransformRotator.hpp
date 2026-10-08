#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformRotator : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TransformRotator";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex transform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(transform))];
    Vector3 axis; // 78
    uint8_t unk_84[0x84 - (0x78 + sizeof(axis))];
    float valueScale; // 84
    uint8_t unk_88[0x88 - (0x84 + sizeof(valueScale))];
    bool clamp; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(clamp))];
    float angleMin; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(angleMin))];
    float angleMax; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(angleMax))];
    anim::FloatLink angleValueNode; // A8
    uint8_t unk_C8[0xC8 - (0xA8 + sizeof(angleValueNode))];
    anim::FloatLink angleSpeedNode; // C8
#else
    anim::TransformIndex transform; // 60
    Vector3 axis; // 78
    float valueScale; // 84
    bool clamp; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    float angleMin; // 8C
    float angleMax; // 90
    uint8_t unk94[0xA8 - 0x94]; // 94
    anim::FloatLink angleValueNode; // A8
    anim::FloatLink angleSpeedNode; // C8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformRotator, 0xE8);
} // namespace anim
using animAnimNode_TransformRotator = anim::AnimNode_TransformRotator;
} // namespace RED4ext

// clang-format on
