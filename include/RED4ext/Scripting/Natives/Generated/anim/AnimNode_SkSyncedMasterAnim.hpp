#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkSpeedAnim.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkSyncedMasterAnim : anim::AnimNode_SkSpeedAnim
{
    static constexpr const char* NAME = "animAnimNode_SkSyncedMasterAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkSpeedAnim>];
    CName syncTag; // F0
#else
    CName syncTag; // F0
    uint8_t unkF8[0x118 - 0xF8]; // F8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkSyncedMasterAnim, 0x118);
} // namespace anim
using animAnimNode_SkSyncedMasterAnim = anim::AnimNode_SkSyncedMasterAnim;
} // namespace RED4ext

// clang-format on
