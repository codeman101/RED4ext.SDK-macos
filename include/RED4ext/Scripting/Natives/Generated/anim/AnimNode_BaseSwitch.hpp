#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BaseSwitch : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BaseSwitch";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    float blendTime; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(blendTime))];
    bool timeWarpingEnabled; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(timeWarpingEnabled))];
    Handle<anim::ISyncMethod> syncMethod; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(syncMethod))];
    bool canRequestInertialization; // 60
    uint8_t unk_B8[0xB8 - (0x60 + sizeof(canRequestInertialization))];
    DynArray<anim::PoseLink> inputNodes; // B8
#else
    float blendTime; // 48
    bool timeWarpingEnabled; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    Handle<anim::ISyncMethod> syncMethod; // 50
    bool canRequestInertialization; // 60
    uint8_t unk61[0xB8 - 0x61]; // 61
    DynArray<anim::PoseLink> inputNodes; // B8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BaseSwitch, 0xC8);
} // namespace anim
using animAnimNode_BaseSwitch = anim::AnimNode_BaseSwitch;
} // namespace RED4ext

// clang-format on
