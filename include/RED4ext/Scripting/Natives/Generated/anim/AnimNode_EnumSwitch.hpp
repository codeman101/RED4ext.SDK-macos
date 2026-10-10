#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_InputSwitch.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_EnumSwitch : anim::AnimNode_InputSwitch
{
    static constexpr const char* NAME = "animAnimNode_EnumSwitch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_108[0x108 - ::RED4ext::Detail::DataSize<anim::AnimNode_InputSwitch>];
    CName enumName; // 108
#else
    CName enumName; // 108
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_EnumSwitch, 0x110);
} // namespace anim
using animAnimNode_EnumSwitch = anim::AnimNode_EnumSwitch;
} // namespace RED4ext

// clang-format on
