#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BaseSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IntLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_InputSwitch : anim::AnimNode_BaseSwitch
{
    static constexpr const char* NAME = "animAnimNode_InputSwitch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_C8[0xC8 - ::RED4ext::Detail::DataSize<anim::AnimNode_BaseSwitch>];
    anim::IntLink selectIntNode; // C8
    uint8_t unk_E8[0xE8 - (0xC8 + sizeof(selectIntNode))];
    anim::FloatLink selectFloatNode; // E8
#else
    anim::IntLink selectIntNode; // C8
    anim::FloatLink selectFloatNode; // E8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_InputSwitch, 0x108);
} // namespace anim
using animAnimNode_InputSwitch = anim::AnimNode_InputSwitch;
} // namespace RED4ext

// clang-format on
