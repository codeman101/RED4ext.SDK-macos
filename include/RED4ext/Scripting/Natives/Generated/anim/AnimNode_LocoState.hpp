#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_State.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LocoStateType.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LocoState : anim::AnimNode_State
{
    static constexpr const char* NAME = "animAnimNode_LocoState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_88[0x88 - ::RED4ext::Detail::DataSize<anim::AnimNode_State>];
    anim::LocoStateType type; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(type))];
    CName locoTag; // 90
#else
    anim::LocoStateType type; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    CName locoTag; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LocoState, 0x98);
} // namespace anim
using animAnimNode_LocoState = anim::AnimNode_LocoState;
} // namespace RED4ext

// clang-format on
