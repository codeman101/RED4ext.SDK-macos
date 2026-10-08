#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SuspensionLimit : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SuspensionLimit";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex constrainedTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(constrainedTransform))];
    anim::NamedTrackIndex radiusTrack; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(radiusTrack))];
    anim::NamedTrackIndex deviationTrack; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(deviationTrack))];
    anim::Axis axis; // A8
#else
    anim::TransformIndex constrainedTransform; // 60
    anim::NamedTrackIndex radiusTrack; // 78
    anim::NamedTrackIndex deviationTrack; // 90
    anim::Axis axis; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SuspensionLimit, 0xB0);
} // namespace anim
using animAnimNode_SuspensionLimit = anim::AnimNode_SuspensionLimit;
} // namespace RED4ext

// clang-format on
