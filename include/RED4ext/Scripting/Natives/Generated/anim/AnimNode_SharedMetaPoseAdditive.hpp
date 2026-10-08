#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphAdditiveType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTracksMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SharedMetaPoseAdditive : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SharedMetaPoseAdditive";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::FloatLink weightLink; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(weightLink))];
    anim::EAnimGraphAdditiveType additiveType; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(additiveType))];
    anim::EBlendTracksMode blendTracks; // 84
    uint8_t unk_88[0x88 - (0x84 + sizeof(blendTracks))];
    bool convertParentPoseToAdditive; // 88
#else
    anim::FloatLink weightLink; // 60
    anim::EAnimGraphAdditiveType additiveType; // 80
    anim::EBlendTracksMode blendTracks; // 84
    bool convertParentPoseToAdditive; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SharedMetaPoseAdditive, 0x90);
} // namespace anim
using animAnimNode_SharedMetaPoseAdditive = anim::AnimNode_SharedMetaPoseAdditive;
} // namespace RED4ext

// clang-format on
