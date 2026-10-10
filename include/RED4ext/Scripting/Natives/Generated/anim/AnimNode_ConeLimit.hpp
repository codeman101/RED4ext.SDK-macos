#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ConeLimit : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ConeLimit";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::TransformIndex coneTransform; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(coneTransform))];
    anim::TransformIndex constrainedTransform; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(constrainedTransform))];
    Vector3 coneAxisLs; // 90
    uint8_t unk_9C[0x9C - (0x90 + sizeof(coneAxisLs))];
    Vector3 coneAxisNormalizedLs; // 9C
    uint8_t unk_A8[0xA8 - (0x9C + sizeof(coneAxisNormalizedLs))];
    Vector3 coneOffsetMs; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(coneOffsetMs))];
    anim::VectorLink coneOffsetMsLink; // B8
    uint8_t unk_D8[0xD8 - (0xB8 + sizeof(coneOffsetMsLink))];
    CurveData<float> marginEaseOutCurve; // D8
    uint8_t unk_110[0x110 - (0xD8 + sizeof(marginEaseOutCurve))];
    anim::NamedTrackIndex coneLimitReached; // 110
    uint8_t unk_128[0x128 - (0x110 + sizeof(coneLimitReached))];
    float limit1; // 128
    uint8_t unk_130[0x130 - (0x128 + sizeof(limit1))];
    anim::FloatLink limit1Link; // 130
    uint8_t unk_150[0x150 - (0x130 + sizeof(limit1Link))];
    anim::NamedTrackIndex limit1FloatTrack; // 150
    uint8_t unk_168[0x168 - (0x150 + sizeof(limit1FloatTrack))];
    float paraboloidRadius1; // 168
    uint8_t unk_16C[0x16C - (0x168 + sizeof(paraboloidRadius1))];
    float limit2; // 16C
    uint8_t unk_170[0x170 - (0x16C + sizeof(limit2))];
    anim::FloatLink limit2Link; // 170
    uint8_t unk_190[0x190 - (0x170 + sizeof(limit2Link))];
    anim::NamedTrackIndex limit2FloatTrack; // 190
    uint8_t unk_1A8[0x1A8 - (0x190 + sizeof(limit2FloatTrack))];
    float paraboloidRadius2; // 1A8
    uint8_t unk_1AC[0x1AC - (0x1A8 + sizeof(paraboloidRadius2))];
    float limit3; // 1AC
    uint8_t unk_1B0[0x1B0 - (0x1AC + sizeof(limit3))];
    anim::FloatLink limit3Link; // 1B0
    uint8_t unk_1D0[0x1D0 - (0x1B0 + sizeof(limit3Link))];
    anim::NamedTrackIndex limit3FloatTrack; // 1D0
    uint8_t unk_1E8[0x1E8 - (0x1D0 + sizeof(limit3FloatTrack))];
    float paraboloidRadius3; // 1E8
    uint8_t unk_1EC[0x1EC - (0x1E8 + sizeof(paraboloidRadius3))];
    float limit4; // 1EC
    uint8_t unk_1F0[0x1F0 - (0x1EC + sizeof(limit4))];
    anim::FloatLink limit4Link; // 1F0
    uint8_t unk_210[0x210 - (0x1F0 + sizeof(limit4Link))];
    anim::NamedTrackIndex limit4FloatTrack; // 210
    uint8_t unk_228[0x228 - (0x210 + sizeof(limit4FloatTrack))];
    float paraboloidRadius4; // 228
    uint8_t unk_22C[0x22C - (0x228 + sizeof(paraboloidRadius4))];
    bool debug; // 22C
    uint8_t unk_22D[0x22D - (0x22C + sizeof(debug))];
    bool colorfulCone; // 22D
    uint8_t unk_22E[0x22E - (0x22D + sizeof(colorfulCone))];
    bool applyDebugConeScalling; // 22E
#else
    anim::TransformIndex coneTransform; // 60
    anim::TransformIndex constrainedTransform; // 78
    Vector3 coneAxisLs; // 90
    Vector3 coneAxisNormalizedLs; // 9C
    Vector3 coneOffsetMs; // A8
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    anim::VectorLink coneOffsetMsLink; // B8
    CurveData<float> marginEaseOutCurve; // D8
    anim::NamedTrackIndex coneLimitReached; // 110
    float limit1; // 128
    uint8_t unk12C[0x130 - 0x12C]; // 12C
    anim::FloatLink limit1Link; // 130
    anim::NamedTrackIndex limit1FloatTrack; // 150
    float paraboloidRadius1; // 168
    float limit2; // 16C
    anim::FloatLink limit2Link; // 170
    anim::NamedTrackIndex limit2FloatTrack; // 190
    float paraboloidRadius2; // 1A8
    float limit3; // 1AC
    anim::FloatLink limit3Link; // 1B0
    anim::NamedTrackIndex limit3FloatTrack; // 1D0
    float paraboloidRadius3; // 1E8
    float limit4; // 1EC
    anim::FloatLink limit4Link; // 1F0
    anim::NamedTrackIndex limit4FloatTrack; // 210
    float paraboloidRadius4; // 228
    bool debug; // 22C
    bool colorfulCone; // 22D
    bool applyDebugConeScalling; // 22E
    uint8_t unk22F[0x230 - 0x22F]; // 22F
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ConeLimit, 0x230);
} // namespace anim
using animAnimNode_ConeLimit = anim::AnimNode_ConeLimit;
} // namespace RED4ext

// clang-format on
