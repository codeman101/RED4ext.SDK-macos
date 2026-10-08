#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKCommonData.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloorIkBase : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FloorIkBase";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::SBehaviorConstraintNodeFloorIKCommonData common; // 60
    uint8_t unk_90[0x90 - (0x60 + sizeof(common))];
    CName requiredAnimEvent; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(requiredAnimEvent))];
    CName blockAnimEvent; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(blockAnimEvent))];
    float slopeAngleDamp; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(slopeAngleDamp))];
    bool useFixedVersion; // A4
    uint8_t unk_A5[0xA5 - (0xA4 + sizeof(useFixedVersion))];
    bool canBeDisabledDueToFrameRate; // A5
#else
    anim::SBehaviorConstraintNodeFloorIKCommonData common; // 60
    CName requiredAnimEvent; // 90
    CName blockAnimEvent; // 98
    float slopeAngleDamp; // A0
    bool useFixedVersion; // A4
    bool canBeDisabledDueToFrameRate; // A5
    uint8_t unkA6[0x108 - 0xA6]; // A6
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloorIkBase, 0x108);
} // namespace anim
using animAnimNode_FloorIkBase = anim::AnimNode_FloorIkBase;
} // namespace RED4ext

// clang-format on
