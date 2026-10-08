#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LookAtPose360Direction : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_LookAtPose360Direction";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    float defaultValue; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(defaultValue))];
    float angleOffset; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(angleOffset))];
    bool negateOutput; // 4C
#else
    float defaultValue; // 48
    float angleOffset; // 4C
    bool negateOutput; // 50
    uint8_t unk51[0x68 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtPose360Direction, 0x68);
} // namespace anim
using animAnimNode_LookAtPose360Direction = anim::AnimNode_LookAtPose360Direction;
} // namespace RED4ext

// clang-format on
