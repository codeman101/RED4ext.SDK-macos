#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_MotionTableSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_Switch : anim::AnimNode_MotionTableSwitch
{
    static constexpr const char* NAME = "animAnimNode_Switch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_MotionTableSwitch>];
    uint32_t numInputs; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(numInputs))];
    float blendTime; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(blendTime))];
    Handle<anim::ISyncMethod> syncMethod; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(syncMethod))];
    Handle<anim::IMotionTableProvider> motionProvider; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(motionProvider))];
    CName pushDataByTag; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(pushDataByTag))];
    bool timeWarpingEnabled; // 78
    uint8_t unk_79[0x79 - (0x78 + sizeof(timeWarpingEnabled))];
    bool canRequestInertialization; // 79
    uint8_t unk_A0[0xA0 - (0x79 + sizeof(canRequestInertialization))];
    anim::FloatLink weightNode; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(weightNode))];
    DynArray<anim::PoseLink> inputNodes; // C0
#else
    uint32_t numInputs; // 48
    float blendTime; // 4C
    Handle<anim::ISyncMethod> syncMethod; // 50
    Handle<anim::IMotionTableProvider> motionProvider; // 60
    CName pushDataByTag; // 70
    bool timeWarpingEnabled; // 78
    bool canRequestInertialization; // 79
    uint8_t unk7A[0xA0 - 0x7A]; // 7A
    anim::FloatLink weightNode; // A0
    DynArray<anim::PoseLink> inputNodes; // C0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Switch, 0xD0);
} // namespace anim
using animAnimNode_Switch = anim::AnimNode_Switch;
} // namespace RED4ext

// clang-format on
