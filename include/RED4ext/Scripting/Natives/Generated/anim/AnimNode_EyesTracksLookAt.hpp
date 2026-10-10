#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_EyesTracksLookAt : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_EyesTracksLookAt";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex eyeTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(eyeTransform))];
    anim::NamedTrackIndex leftTrack; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(leftTrack))];
    anim::NamedTrackIndex rightTrack; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(rightTrack))];
    anim::NamedTrackIndex upTrack; // A8
    uint8_t unk_C0[0xC0 - (0xA8 + sizeof(upTrack))];
    anim::NamedTrackIndex downTrack; // C0
    uint8_t unk_D8[0xD8 - (0xC0 + sizeof(downTrack))];
    bool debug; // D8
#else
    anim::TransformIndex eyeTransform; // 60
    anim::NamedTrackIndex leftTrack; // 78
    anim::NamedTrackIndex rightTrack; // 90
    anim::NamedTrackIndex upTrack; // A8
    anim::NamedTrackIndex downTrack; // C0
    bool debug; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_EyesTracksLookAt, 0xE0);
} // namespace anim
using animAnimNode_EyesTracksLookAt = anim::AnimNode_EyesTracksLookAt;
} // namespace RED4ext

// clang-format on
