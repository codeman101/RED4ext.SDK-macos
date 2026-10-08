#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BoolValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BoolVariable : anim::AnimNode_BoolValue
{
    static constexpr const char* NAME = "animAnimNode_BoolVariable";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_BoolValue>];
    CName variableName; // 48
#else
    CName variableName; // 48
    uint8_t unk50[0x60 - 0x50]; // 50
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BoolVariable, 0x60);
} // namespace anim
using animAnimNode_BoolVariable = anim::AnimNode_BoolVariable;
} // namespace RED4ext

// clang-format on
