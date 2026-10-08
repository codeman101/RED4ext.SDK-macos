#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_LocomotionAdjuster : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LocomotionAdjuster";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::VectorLink targetPosition; // 70
    uint8_t unk_90[0x90 - (0x70 + sizeof(targetPosition))];
    anim::VectorLink targetDirection; // 90
    uint8_t unk_B0[0xB0 - (0x90 + sizeof(targetDirection))];
    Vector4 initialForwardVector; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(initialForwardVector))];
    float blendSpeedPos; // C0
    uint8_t unk_C4[0xC4 - (0xC0 + sizeof(blendSpeedPos))];
    float blendSpeedPosMin; // C4
    uint8_t unk_C8[0xC8 - (0xC4 + sizeof(blendSpeedPosMin))];
    float blendSpeedRot; // C8
    uint8_t unk_CC[0xCC - (0xC8 + sizeof(blendSpeedRot))];
    float maxDistance; // CC
#else
    uint8_t unk60[0x70 - 0x60]; // 60
    anim::VectorLink targetPosition; // 70
    anim::VectorLink targetDirection; // 90
    Vector4 initialForwardVector; // B0
    float blendSpeedPos; // C0
    float blendSpeedPosMin; // C4
    float blendSpeedRot; // C8
    float maxDistance; // CC
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LocomotionAdjuster, 0xD0);
} // namespace anim
using animAnimNode_LocomotionAdjuster = anim::AnimNode_LocomotionAdjuster;
} // namespace RED4ext

// clang-format on
