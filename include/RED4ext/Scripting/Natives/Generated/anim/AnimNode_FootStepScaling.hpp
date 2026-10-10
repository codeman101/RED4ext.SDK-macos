#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/fss/BodyOfflineParams.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FootStepScaling : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FootStepScaling";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::FloatLink inputSpeed; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(inputSpeed))];
    anim::FloatLink weight; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(weight))];
    anim::TransformIndex hipsIndex; // A0
    uint8_t unk_B8[0xB8 - (0xA0 + sizeof(hipsIndex))];
    anim::TransformIndex leftFootIKIndex; // B8
    uint8_t unk_D0[0xD0 - (0xB8 + sizeof(leftFootIKIndex))];
    anim::TransformIndex rightFootIKIndex; // D0
    uint8_t unk_E8[0xE8 - (0xD0 + sizeof(rightFootIKIndex))];
    anim::fss::BodyOfflineParams Params; // E8
#else
    anim::FloatLink inputSpeed; // 60
    anim::FloatLink weight; // 80
    anim::TransformIndex hipsIndex; // A0
    anim::TransformIndex leftFootIKIndex; // B8
    anim::TransformIndex rightFootIKIndex; // D0
    anim::fss::BodyOfflineParams Params; // E8
    uint8_t unk104[0x108 - 0x104]; // 104
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_FootStepScaling, 0x108);
} // namespace anim
using animAnimNode_FootStepScaling = anim::AnimNode_FootStepScaling;
} // namespace RED4ext

// clang-format on
