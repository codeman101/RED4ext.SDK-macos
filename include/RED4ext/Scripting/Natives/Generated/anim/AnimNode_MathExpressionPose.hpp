#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MathExpressionNodeData.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MathExpressionPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MathExpressionPose";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::MathExpressionNodeData expressionData; // 60
    uint8_t unk_A0[0xA0 - (0x60 + sizeof(expressionData))];
    anim::NamedTrackIndex outputFloatTrack; // A0
#else
    anim::MathExpressionNodeData expressionData; // 60
    anim::NamedTrackIndex outputFloatTrack; // A0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_MathExpressionPose, 0xB8);
} // namespace anim
using animAnimNode_MathExpressionPose = anim::AnimNode_MathExpressionPose;
} // namespace RED4ext

// clang-format on
