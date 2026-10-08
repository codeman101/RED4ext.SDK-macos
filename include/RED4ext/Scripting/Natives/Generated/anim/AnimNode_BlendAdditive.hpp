#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphAdditiveType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTracksMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNode_PostProcess; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BlendAdditive : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendAdditive";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    float biasValue; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(biasValue))];
    float scaleValue; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(scaleValue))];
    Handle<anim::ISyncMethod> syncMethod; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(syncMethod))];
    bool timeWarpingEnabled; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(timeWarpingEnabled))];
    anim::EAnimGraphAdditiveType additiveType; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(additiveType))];
    anim::EBlendTracksMode blendTracks; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(blendTracks))];
    Handle<anim::IAnimNode_PostProcess> postProcess; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(postProcess))];
    anim::NamedTrackIndex weightPreviousFrameFloatTrack; // 80
    uint8_t unk_98[0x98 - (0x80 + sizeof(weightPreviousFrameFloatTrack))];
    float weightPreviousFrameFloatTrackDefaultValue; // 98
    uint8_t unk_E0[0xE0 - (0x98 + sizeof(weightPreviousFrameFloatTrackDefaultValue))];
    anim::PoseLink inputNode; // E0
    uint8_t unk_F8[0xF8 - (0xE0 + sizeof(inputNode))];
    anim::PoseLink addedInputNode; // F8
    uint8_t unk_110[0x110 - (0xF8 + sizeof(addedInputNode))];
    anim::FloatLink weightNode; // 110
    uint8_t unk_130[0x130 - (0x110 + sizeof(weightNode))];
    CName maskName; // 130
#else
    float biasValue; // 48
    float scaleValue; // 4C
    Handle<anim::ISyncMethod> syncMethod; // 50
    bool timeWarpingEnabled; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    anim::EAnimGraphAdditiveType additiveType; // 64
    anim::EBlendTracksMode blendTracks; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    Handle<anim::IAnimNode_PostProcess> postProcess; // 70
    anim::NamedTrackIndex weightPreviousFrameFloatTrack; // 80
    float weightPreviousFrameFloatTrackDefaultValue; // 98
    uint8_t unk9C[0xE0 - 0x9C]; // 9C
    anim::PoseLink inputNode; // E0
    anim::PoseLink addedInputNode; // F8
    anim::FloatLink weightNode; // 110
    CName maskName; // 130
    uint8_t unk138[0x148 - 0x138]; // 138
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendAdditive, 0x148);
} // namespace anim
using animAnimNode_BlendAdditive = anim::AnimNode_BlendAdditive;
} // namespace RED4ext

// clang-format on
