#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkFrameAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkFrameAnimByTrack : anim::AnimNode_SkFrameAnim
{
    static constexpr const char* NAME = "animAnimNode_SkFrameAnimByTrack";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_138[0x138 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkFrameAnim>];
    anim::NamedTrackIndex progressFloatTrack; // 138
    uint8_t unk_150[0x150 - (0x138 + sizeof(progressFloatTrack))];
    anim::NamedTrackIndex timeFloatTrack; // 150
    uint8_t unk_168[0x168 - (0x150 + sizeof(timeFloatTrack))];
    anim::NamedTrackIndex frameFloatTrack; // 168
    uint8_t unk_180[0x180 - (0x168 + sizeof(frameFloatTrack))];
    anim::PoseLink inputWithTracks; // 180
#else
    anim::NamedTrackIndex progressFloatTrack; // 138
    anim::NamedTrackIndex timeFloatTrack; // 150
    anim::NamedTrackIndex frameFloatTrack; // 168
    anim::PoseLink inputWithTracks; // 180
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkFrameAnimByTrack, 0x198);
} // namespace anim
using animAnimNode_SkFrameAnimByTrack = anim::AnimNode_SkFrameAnimByTrack;
} // namespace RED4ext

// clang-format on
