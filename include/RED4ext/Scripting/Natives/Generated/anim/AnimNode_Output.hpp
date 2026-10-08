#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Output : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_Output";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::PoseLink node; // 48
#else
    anim::PoseLink node; // 48
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Output, 0x60);
} // namespace anim
using animAnimNode_Output = anim::AnimNode_Output;
} // namespace RED4ext

// clang-format on
