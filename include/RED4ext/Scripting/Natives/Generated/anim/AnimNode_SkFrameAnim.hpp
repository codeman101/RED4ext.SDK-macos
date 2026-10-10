#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkFrameAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkFrameAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D0[0xD0 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkAnim>];
    anim::FloatLink progressLink; // D0
    uint8_t unk_F0[0xF0 - (0xD0 + sizeof(progressLink))];
    anim::FloatLink timeLink; // F0
    uint8_t unk_110[0x110 - (0xF0 + sizeof(timeLink))];
    anim::FloatLink frameLink; // 110
    uint8_t unk_130[0x130 - (0x110 + sizeof(frameLink))];
    bool fireAnimEndOnceOnAnimEnd; // 130
#else
    anim::FloatLink progressLink; // D0
    anim::FloatLink timeLink; // F0
    anim::FloatLink frameLink; // 110
    bool fireAnimEndOnceOnAnimEnd; // 130
    uint8_t unk131[0x138 - 0x131]; // 131
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkFrameAnim, 0x138);
} // namespace anim
using animAnimNode_SkFrameAnim = anim::AnimNode_SkFrameAnim;
} // namespace RED4ext

// clang-format on
