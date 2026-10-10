#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_StackTracksShrinker : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_StackTracksShrinker";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    CName tag; // 60
#else
    CName tag; // 60
    uint8_t unk68[0x70 - 0x68]; // 68
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_StackTracksShrinker, 0x70);
} // namespace anim
using animAnimNode_StackTracksShrinker = anim::AnimNode_StackTracksShrinker;
} // namespace RED4ext

// clang-format on
