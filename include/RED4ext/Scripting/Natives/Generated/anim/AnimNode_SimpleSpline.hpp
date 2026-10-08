#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SimpleSpline : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SimpleSpline";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex startTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(startTransform))];
    anim::TransformIndex middleTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(middleTransform))];
    anim::TransformIndex endTransform; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(endTransform))];
    anim::TransformIndex constrainedTransform; // A8
    uint8_t unk_C0[0xC0 - (0xA8 + sizeof(constrainedTransform))];
    anim::ConstraintWeightMode progressMode; // C0
    uint8_t unk_C4[0xC4 - (0xC0 + sizeof(progressMode))];
    float defaultProgress; // C4
    uint8_t unk_C8[0xC8 - (0xC4 + sizeof(defaultProgress))];
    anim::NamedTrackIndex progressTrack; // C8
    uint8_t unk_E0[0xE0 - (0xC8 + sizeof(progressTrack))];
    bool areSourceChannelsResaved; // E0
#else
    anim::TransformIndex startTransform; // 60
    anim::TransformIndex middleTransform; // 78
    anim::TransformIndex endTransform; // 90
    anim::TransformIndex constrainedTransform; // A8
    anim::ConstraintWeightMode progressMode; // C0
    float defaultProgress; // C4
    anim::NamedTrackIndex progressTrack; // C8
    bool areSourceChannelsResaved; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SimpleSpline, 0xE8);
} // namespace anim
using animAnimNode_SimpleSpline = anim::AnimNode_SimpleSpline;
} // namespace RED4ext

// clang-format on
