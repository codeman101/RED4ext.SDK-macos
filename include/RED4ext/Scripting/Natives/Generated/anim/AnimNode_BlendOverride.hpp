#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTracksMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/OverrideBlendBoneInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/OverrideBlendTrackInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNode_PostProcess; }
namespace anim { struct IPoseBlendMethod; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BlendOverride : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendOverride";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    bool getDeltaMotionFromOverride; // 44
    uint8_t unk_45[0x45 - (0x44 + sizeof(getDeltaMotionFromOverride))];
    bool timeWarpingEnabled; // 45
    uint8_t unk_48[0x48 - (0x45 + sizeof(timeWarpingEnabled))];
    Handle<anim::ISyncMethod> syncMethod; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(syncMethod))];
    Handle<anim::IPoseBlendMethod> blendMethod; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(blendMethod))];
    DynArray<anim::OverrideBlendBoneInfo> bones; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(bones))];
    DynArray<anim::OverrideBlendTrackInfo> tracks; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(tracks))];
    anim::EBlendTracksMode blendTrackMode; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(blendTrackMode))];
    bool blendAllTracks; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(blendAllTracks))];
    Handle<anim::IAnimNode_PostProcess> postProcess; // 90
    uint8_t unk_D0[0xD0 - (0x90 + sizeof(postProcess))];
    anim::PoseLink inputNode; // D0
    uint8_t unk_E8[0xE8 - (0xD0 + sizeof(inputNode))];
    anim::PoseLink overrideInputNode; // E8
    uint8_t unk_100[0x100 - (0xE8 + sizeof(overrideInputNode))];
    anim::FloatLink weightNode; // 100
#else
    bool getDeltaMotionFromOverride; // 48
    bool timeWarpingEnabled; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    Handle<anim::ISyncMethod> syncMethod; // 50
    Handle<anim::IPoseBlendMethod> blendMethod; // 60
    DynArray<anim::OverrideBlendBoneInfo> bones; // 70
    DynArray<anim::OverrideBlendTrackInfo> tracks; // 80
    anim::EBlendTracksMode blendTrackMode; // 90
    bool blendAllTracks; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    Handle<anim::IAnimNode_PostProcess> postProcess; // 98
    uint8_t unkA8[0xD8 - 0xA8]; // A8
    anim::PoseLink inputNode; // D8
    anim::PoseLink overrideInputNode; // F0
    anim::FloatLink weightNode; // 108
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendOverride, 0x128);
} // namespace anim
using animAnimNode_BlendOverride = anim::AnimNode_BlendOverride;
} // namespace RED4ext

// clang-format on
