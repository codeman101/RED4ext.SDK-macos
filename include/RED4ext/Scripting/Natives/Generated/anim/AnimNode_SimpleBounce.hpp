#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTrackOutput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTransformOutput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SimpleBounce : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SimpleBounce";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    float multiplier; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(multiplier))];
    float negativeMultiplier; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(negativeMultiplier))];
    float smoothStep; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(smoothStep))];
    float offset; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(offset))];
    float delay; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(delay))];
    bool areChannelsResaved; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(areChannelsResaved))];
    anim::TransformIndex startTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(startTransform))];
    anim::TransformIndex endTransform; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(endTransform))];
    DynArray<anim::SimpleBounceTransformOutput> transformOutputs; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(transformOutputs))];
    DynArray<anim::SimpleBounceTrackOutput> trackOutputs; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(trackOutputs))];
    anim::NamedTrackIndex outputDriverTrack; // C8
    uint8_t unk_E0[0xE0 - (0xC8 + sizeof(outputDriverTrack))];
    bool debug; // E0
#else
    float multiplier; // 60
    float negativeMultiplier; // 64
    float smoothStep; // 68
    float offset; // 6C
    float delay; // 70
    bool areChannelsResaved; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    anim::TransformIndex startTransform; // 78
    anim::TransformIndex endTransform; // 90
    DynArray<anim::SimpleBounceTransformOutput> transformOutputs; // A8
    DynArray<anim::SimpleBounceTrackOutput> trackOutputs; // B8
    anim::NamedTrackIndex outputDriverTrack; // C8
    bool debug; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SimpleBounce, 0xE8);
} // namespace anim
using animAnimNode_SimpleBounce = anim::AnimNode_SimpleBounce;
} // namespace RED4ext

// clang-format on
