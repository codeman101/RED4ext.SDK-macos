#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatTrackDirectConnConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FloatTrackDirectConnConstraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::NamedTrackIndex floatTrackIndex; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(floatTrackIndex))];
    anim::TransformIndex transformIndex; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(transformIndex))];
    float mulFactor; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(mulFactor))];
    anim::TransformChannel channel; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(channel))];
    float weight; // 98
    uint8_t unk_C0[0xC0 - (0x98 + sizeof(weight))];
    anim::FloatLink weightNode; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(weightNode))];
    anim::FloatLink mulFactorNode; // E0
#else
    anim::NamedTrackIndex floatTrackIndex; // 60
    anim::TransformIndex transformIndex; // 78
    float mulFactor; // 90
    anim::TransformChannel channel; // 94
    float weight; // 98
    uint8_t unk9C[0xC0 - 0x9C]; // 9C
    anim::FloatLink weightNode; // C0
    anim::FloatLink mulFactorNode; // E0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatTrackDirectConnConstraint, 0x100);
} // namespace anim
using animAnimNode_FloatTrackDirectConnConstraint = anim::AnimNode_FloatTrackDirectConnConstraint;
} // namespace RED4ext

// clang-format on
