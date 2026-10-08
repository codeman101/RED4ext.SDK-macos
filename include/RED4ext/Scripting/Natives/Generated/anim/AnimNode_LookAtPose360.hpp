#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LookAtPose360 : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_LookAtPose360";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    CName animation; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(animation))];
    float speedInDegreesPerSecond; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(speedInDegreesPerSecond))];
    float durationCut; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(durationCut))];
    CName animEndEventName; // 58
    uint8_t unk_B0[0xB0 - (0x58 + sizeof(animEndEventName))];
    anim::FloatLink targetAngleOffsetNode; // B0
    uint8_t unk_D0[0xD0 - (0xB0 + sizeof(targetAngleOffsetNode))];
    anim::FloatLink angleOffsetNode; // D0
    uint8_t unk_F0[0xF0 - (0xD0 + sizeof(angleOffsetNode))];
    anim::FloatLink weightNode; // F0
#else
    CName animation; // 48
    float speedInDegreesPerSecond; // 50
    float durationCut; // 54
    CName animEndEventName; // 58
    uint8_t unk60[0xB0 - 0x60]; // 60
    anim::FloatLink targetAngleOffsetNode; // B0
    anim::FloatLink angleOffsetNode; // D0
    anim::FloatLink weightNode; // F0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtPose360, 0x110);
} // namespace anim
using animAnimNode_LookAtPose360 = anim::AnimNode_LookAtPose360;
} // namespace RED4ext

// clang-format on
