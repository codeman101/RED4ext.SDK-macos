#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_SkAnimAdjuster : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkAnimAdjuster";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_130[0x130 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkAnim>];
    anim::VectorLink targetPositionWs; // 130
    uint8_t unk_150[0x150 - (0x130 + sizeof(targetPositionWs))];
    anim::VectorLink targetDirectionWs; // 150
    uint8_t unk_170[0x170 - (0x150 + sizeof(targetDirectionWs))];
    Vector4 initialForwardVector; // 170
    uint8_t unk_180[0x180 - (0x170 + sizeof(initialForwardVector))];
    CName startAdjustmentEventName; // 180
    uint8_t unk_188[0x188 - (0x180 + sizeof(startAdjustmentEventName))];
    CName endAdjustmentEventName; // 188
#else
    uint8_t unkD0[0x130 - 0xD0]; // D0
    anim::VectorLink targetPositionWs; // 130
    anim::VectorLink targetDirectionWs; // 150
    Vector4 initialForwardVector; // 170
    CName startAdjustmentEventName; // 180
    CName endAdjustmentEventName; // 188
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkAnimAdjuster, 0x190);
} // namespace anim
using animAnimNode_SkAnimAdjuster = anim::AnimNode_SkAnimAdjuster;
} // namespace RED4ext

// clang-format on
