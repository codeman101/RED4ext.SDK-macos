#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatTrackOperationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatTrackModifier : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_FloatTrackModifier";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::NamedTrackIndex floatTrack; // 48
    uint8_t unk_60[0x60 - (0x48 + sizeof(floatTrack))];
    anim::FloatTrackOperationType operationType; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(operationType))];
    anim::NamedTrackIndex inputFloatTrack; // 68
    uint8_t unk_80[0x80 - (0x68 + sizeof(inputFloatTrack))];
    anim::PoseLink poseInputNode; // 80
    uint8_t unk_98[0x98 - (0x80 + sizeof(poseInputNode))];
    anim::FloatLink floatInputNode; // 98
#else
    anim::NamedTrackIndex floatTrack; // 48
    anim::FloatTrackOperationType operationType; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    anim::NamedTrackIndex inputFloatTrack; // 68
    anim::PoseLink poseInputNode; // 80
    anim::FloatLink floatInputNode; // 98
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatTrackModifier, 0xB8);
} // namespace anim
using animAnimNode_FloatTrackModifier = anim::AnimNode_FloatTrackModifier;
} // namespace RED4ext

// clang-format on
