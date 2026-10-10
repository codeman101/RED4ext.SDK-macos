#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_MotionAdjuster.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_ExplorationAdjuster : anim::AnimNode_MotionAdjuster
{
    static constexpr const char* NAME = "animAnimNode_ExplorationAdjuster";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_140[0x140 - ::RED4ext::Detail::DataSize<anim::AnimNode_MotionAdjuster>];
    anim::VectorLink targetPosition2; // 140
    uint8_t unk_160[0x160 - (0x140 + sizeof(targetPosition2))];
    anim::VectorLink targetDirection2; // 160
    uint8_t unk_180[0x180 - (0x160 + sizeof(targetDirection2))];
    anim::FloatLink totalTimeToAdjust2; // 180
    uint8_t unk_1A0[0x1A0 - (0x180 + sizeof(totalTimeToAdjust2))];
    anim::VectorLink targetPosition3; // 1A0
    uint8_t unk_1C0[0x1C0 - (0x1A0 + sizeof(targetPosition3))];
    anim::VectorLink targetDirection3; // 1C0
    uint8_t unk_1E0[0x1E0 - (0x1C0 + sizeof(targetDirection3))];
    anim::FloatLink totalTimeToAdjust3; // 1E0
#else
    uint8_t unk110[0x140 - 0x110]; // 110
    anim::VectorLink targetPosition2; // 140
    anim::VectorLink targetDirection2; // 160
    anim::FloatLink totalTimeToAdjust2; // 180
    anim::VectorLink targetPosition3; // 1A0
    anim::VectorLink targetDirection3; // 1C0
    anim::FloatLink totalTimeToAdjust3; // 1E0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ExplorationAdjuster, 0x200);
} // namespace anim
using animAnimNode_ExplorationAdjuster = anim::AnimNode_ExplorationAdjuster;
} // namespace RED4ext

// clang-format on
