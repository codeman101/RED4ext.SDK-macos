#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IntLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BlendByMaskDynamic : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendByMaskDynamic";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::PoseLink base; // 48
    uint8_t unk_60[0x60 - (0x48 + sizeof(base))];
    anim::PoseLink blend; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(blend))];
    anim::IntLink mask; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(mask))];
    anim::FloatLink weight; // 98
    uint8_t unk_B8[0xB8 - (0x98 + sizeof(weight))];
    Handle<anim::ISyncMethod> syncMethod; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(syncMethod))];
    DynArray<CName> masks; // C8
#else
    anim::PoseLink base; // 48
    anim::PoseLink blend; // 60
    anim::IntLink mask; // 78
    anim::FloatLink weight; // 98
    Handle<anim::ISyncMethod> syncMethod; // B8
    DynArray<CName> masks; // C8
    uint8_t unkD8[0x108 - 0xD8]; // D8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendByMaskDynamic, 0x108);
} // namespace anim
using animAnimNode_BlendByMaskDynamic = anim::AnimNode_BlendByMaskDynamic;
} // namespace RED4ext

// clang-format on
