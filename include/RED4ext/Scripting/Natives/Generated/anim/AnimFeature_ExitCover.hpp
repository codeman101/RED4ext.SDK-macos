#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_AIAction.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_ExitCover : anim::AnimFeature_AIAction
{
    static constexpr const char* NAME = "animAnimFeature_ExitCover";
    static constexpr const char* ALIAS = "AnimFeature_ExitCover";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<anim::AnimFeature_AIAction>];
    int32_t coverStance; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(coverStance))];
    int32_t coverExitDirection; // 50
#else
    int32_t coverStance; // 50
    int32_t coverExitDirection; // 54
#endif
};
RED4EXT_ASSERT_SIZE(AnimFeature_ExitCover, 0x58);
} // namespace anim
using animAnimFeature_ExitCover = anim::AnimFeature_ExitCover;
using AnimFeature_ExitCover = anim::AnimFeature_ExitCover;
} // namespace RED4ext

// clang-format on
