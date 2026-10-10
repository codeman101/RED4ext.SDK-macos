#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_MotionTableSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }
namespace anim { struct IStaticCondition; }

namespace anim
{
struct AnimNode_StaticSwitch : anim::AnimNode_MotionTableSwitch
{
    static constexpr const char* NAME = "animAnimNode_StaticSwitch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_MotionTableSwitch>];
    Handle<anim::IStaticCondition> condition; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(condition))];
    Handle<anim::IMotionTableProvider> motionProvider; // 58
    uint8_t unk_78[0x78 - (0x58 + sizeof(motionProvider))];
    anim::PoseLink True; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(True))];
    anim::PoseLink False; // 90
#else
    Handle<anim::IStaticCondition> condition; // 48
    Handle<anim::IMotionTableProvider> motionProvider; // 58
    uint8_t unk68[0x78 - 0x68]; // 68
    anim::PoseLink True; // 78
    anim::PoseLink False; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_StaticSwitch, 0xA8);
} // namespace anim
using animAnimNode_StaticSwitch = anim::AnimNode_StaticSwitch;
} // namespace RED4ext

// clang-format on
