#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_AIAction.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_AIActionAnimation : anim::AnimFeature_AIAction
{
    static constexpr const char* NAME = "animAnimFeature_AIActionAnimation";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<anim::AnimFeature_AIAction>];
    CName animFeatureName; // 50
#else
    CName animFeatureName; // 50
#endif
};
RED4EXT_ASSERT_SIZE(AnimFeature_AIActionAnimation, 0x58);
} // namespace anim
using animAnimFeature_AIActionAnimation = anim::AnimFeature_AIActionAnimation;
} // namespace RED4ext

// clang-format on
