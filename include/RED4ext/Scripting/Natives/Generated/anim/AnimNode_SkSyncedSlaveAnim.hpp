#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkSyncedSlaveAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkSyncedSlaveAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D0[0xD0 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkAnim>];
    CName syncTag; // D0
#else
    CName syncTag; // D0
    uint8_t unkD8[0x118 - 0xD8]; // D8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkSyncedSlaveAnim, 0x118);
} // namespace anim
using animAnimNode_SkSyncedSlaveAnim = anim::AnimNode_SkSyncedSlaveAnim;
} // namespace RED4ext

// clang-format on
