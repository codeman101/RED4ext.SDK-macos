#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_GraphSlot : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_GraphSlot";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    CName name; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(name))];
    anim::PoseLink inputLink; // 50
    uint8_t unk_A8[0xA8 - (0x50 + sizeof(inputLink))];
    bool dontDeactivateInput; // A8
#else
    CName name; // 48
    anim::PoseLink inputLink; // 50
    uint8_t unk68[0xA8 - 0x68]; // 68
    bool dontDeactivateInput; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_GraphSlot, 0xB0);
} // namespace anim
using animAnimNode_GraphSlot = anim::AnimNode_GraphSlot;
} // namespace RED4ext

// clang-format on
