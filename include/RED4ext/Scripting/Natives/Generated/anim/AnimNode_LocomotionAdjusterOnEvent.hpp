#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_LocomotionAdjuster.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_LocomotionAdjusterOnEvent : anim::AnimNode_LocomotionAdjuster
{
    static constexpr const char* NAME = "animAnimNode_LocomotionAdjusterOnEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<anim::AnimNode_LocomotionAdjuster>];
    CName locomotionFeatureName; // F0
    uint8_t unk_F8[0xF8 - (0xF0 + sizeof(locomotionFeatureName))];
    CName targetAnimationName; // F8
    uint8_t unk_100[0x100 - (0xF8 + sizeof(targetAnimationName))];
    CName startAdjustmentAfterAnimEvent; // 100
#else
    uint8_t unkD0[0xF0 - 0xD0]; // D0
    CName locomotionFeatureName; // F0
    CName targetAnimationName; // F8
    CName startAdjustmentAfterAnimEvent; // 100
    uint8_t unk108[0x110 - 0x108]; // 108
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LocomotionAdjusterOnEvent, 0x110);
} // namespace anim
using animAnimNode_LocomotionAdjusterOnEvent = anim::AnimNode_LocomotionAdjusterOnEvent;
} // namespace RED4ext

// clang-format on
