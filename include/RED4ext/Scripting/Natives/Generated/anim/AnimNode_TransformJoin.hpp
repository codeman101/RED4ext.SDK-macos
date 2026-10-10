#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_TransformValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformJoin : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformJoin";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_TransformValue>];
    anim::TransformLink input; // 48
#else
    anim::TransformLink input; // 48
    uint8_t unk68[0x88 - 0x68]; // 68
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformJoin, 0x88);
} // namespace anim
using animAnimNode_TransformJoin = anim::AnimNode_TransformJoin;
} // namespace RED4ext

// clang-format on
