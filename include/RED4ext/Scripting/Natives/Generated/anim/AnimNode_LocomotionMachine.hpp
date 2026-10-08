#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_StateMachine.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LocomotionMachine : anim::AnimNode_StateMachine
{
    static constexpr const char* NAME = "animAnimNode_LocomotionMachine";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_140[0x140 - ::RED4ext::Detail::DataSize<anim::AnimNode_StateMachine>];
    bool usePlanner; // 140
    uint8_t unk_148[0x148 - (0x140 + sizeof(usePlanner))];
    CName group; // 148
    uint8_t unk_150[0x150 - (0x148 + sizeof(group))];
    CName logic; // 150
    uint8_t unk_158[0x158 - (0x150 + sizeof(logic))];
    CName distance; // 158
    uint8_t unk_160[0x160 - (0x158 + sizeof(distance))];
    CName duration; // 160
    uint8_t unk_168[0x168 - (0x160 + sizeof(duration))];
    CName motion; // 168
    uint8_t unk_170[0x170 - (0x168 + sizeof(motion))];
    CName state; // 170
    uint8_t unk_178[0x178 - (0x170 + sizeof(state))];
    CName requestId; // 178
    uint8_t unk_180[0x180 - (0x178 + sizeof(requestId))];
    float transitionTime; // 180
    uint8_t unk_184[0x184 - (0x180 + sizeof(transitionTime))];
    uint32_t numVariants; // 184
#else
    bool usePlanner; // 140
    uint8_t unk141[0x148 - 0x141]; // 141
    CName group; // 148
    CName logic; // 150
    CName distance; // 158
    CName duration; // 160
    CName motion; // 168
    CName state; // 170
    CName requestId; // 178
    float transitionTime; // 180
    uint32_t numVariants; // 184
    uint8_t unk188[0x278 - 0x188]; // 188
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LocomotionMachine, 0x278);
} // namespace anim
using animAnimNode_LocomotionMachine = anim::AnimNode_LocomotionMachine;
} // namespace RED4ext

// clang-format on
