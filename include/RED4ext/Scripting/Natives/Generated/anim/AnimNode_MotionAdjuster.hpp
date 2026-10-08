#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_MotionAdjuster : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_MotionAdjuster";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_88[0x88 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::PoseLink inputNode; // 88
    uint8_t unk_A0[0xA0 - (0x88 + sizeof(inputNode))];
    anim::VectorLink targetPosition; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(targetPosition))];
    anim::VectorLink targetDirection; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(targetDirection))];
    anim::FloatLink totalTimeToAdjust; // E0
    uint8_t unk_100[0x100 - (0xE0 + sizeof(totalTimeToAdjust))];
    Vector4 forwardVector; // 100
#else
    uint8_t unk48[0x88 - 0x48]; // 48
    anim::PoseLink inputNode; // 88
    anim::VectorLink targetPosition; // A0
    anim::VectorLink targetDirection; // C0
    anim::FloatLink totalTimeToAdjust; // E0
    Vector4 forwardVector; // 100
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_MotionAdjuster, 0x110);
} // namespace anim
using animAnimNode_MotionAdjuster = anim::AnimNode_MotionAdjuster;
} // namespace RED4ext

// clang-format on
