#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Switch.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LocomotionSwitch : anim::AnimNode_Switch
{
    static constexpr const char* NAME = "animAnimNode_LocomotionSwitch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D0[0xD0 - ::RED4ext::Detail::DataSize<anim::AnimNode_Switch>];
    DynArray<CName> audioTagsPerInput; // D0
#else
    DynArray<CName> audioTagsPerInput; // D0
    uint8_t unkE0[0x100 - 0xE0]; // E0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LocomotionSwitch, 0x100);
} // namespace anim
using animAnimNode_LocomotionSwitch = anim::AnimNode_LocomotionSwitch;
} // namespace RED4ext

// clang-format on
