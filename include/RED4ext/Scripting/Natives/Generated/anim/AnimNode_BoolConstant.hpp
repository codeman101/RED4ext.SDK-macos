#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BoolValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BoolConstant : anim::AnimNode_BoolValue
{
    static constexpr const char* NAME = "animAnimNode_BoolConstant";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_BoolValue>];
    bool value; // 44
#else
    bool value; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BoolConstant, 0x50);
} // namespace anim
using animAnimNode_BoolConstant = anim::AnimNode_BoolConstant;
} // namespace RED4ext

// clang-format on
