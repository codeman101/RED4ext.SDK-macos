#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkOneShotAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkOneShotAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D0[0xD0 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkAnim>];
    float blendIn; // D0
    uint8_t unk_D4[0xD4 - (0xD0 + sizeof(blendIn))];
    float blendOut; // D4
    uint8_t unk_E8[0xE8 - (0xD4 + sizeof(blendOut))];
    anim::PoseLink Input; // E8
#else
    float blendIn; // D0
    float blendOut; // D4
    uint8_t unkD8[0xE8 - 0xD8]; // D8
    anim::PoseLink Input; // E8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkOneShotAnim, 0x100);
} // namespace anim
using animAnimNode_SkOneShotAnim = anim::AnimNode_SkOneShotAnim;
} // namespace RED4ext

// clang-format on
