#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TriggerBranch : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_TriggerBranch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::PoseLink base; // 48
    uint8_t unk_60[0x60 - (0x48 + sizeof(base))];
    anim::PoseLink overlay; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(overlay))];
    float blendIn; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(blendIn))];
    float blendOut; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(blendOut))];
    CName startEvent; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(startEvent))];
    CName endEvent; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(endEvent))];
    float cooldown; // 90
#else
    anim::PoseLink base; // 48
    anim::PoseLink overlay; // 60
    float blendIn; // 78
    float blendOut; // 7C
    CName startEvent; // 80
    CName endEvent; // 88
    float cooldown; // 90
    uint8_t unk94[0xD8 - 0x94]; // 94
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TriggerBranch, 0xD8);
} // namespace anim
using animAnimNode_TriggerBranch = anim::AnimNode_TriggerBranch;
} // namespace RED4ext

// clang-format on
