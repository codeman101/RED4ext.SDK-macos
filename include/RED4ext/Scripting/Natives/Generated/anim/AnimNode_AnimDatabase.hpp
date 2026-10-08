#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDatabaseCollectionEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkPhaseWithDurationAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IntLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AnimDatabase : anim::AnimNode_SkPhaseWithDurationAnim
{
    static constexpr const char* NAME = "animAnimNode_AnimDatabase";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F8[0xF8 - ::RED4ext::Detail::DataSize<anim::AnimNode_SkPhaseWithDurationAnim>];
    anim::AnimDatabaseCollectionEntry animDataBase; // F8
    uint8_t unk_158[0x158 - (0xF8 + sizeof(animDataBase))];
    DynArray<anim::IntLink> inputLinks; // 158
#else
    anim::AnimDatabaseCollectionEntry animDataBase; // F8
    DynArray<anim::IntLink> inputLinks; // 158
    uint8_t unk168[0x178 - 0x168]; // 168
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AnimDatabase, 0x178);
} // namespace anim
using animAnimNode_AnimDatabase = anim::AnimNode_AnimDatabase;
} // namespace RED4ext

// clang-format on
