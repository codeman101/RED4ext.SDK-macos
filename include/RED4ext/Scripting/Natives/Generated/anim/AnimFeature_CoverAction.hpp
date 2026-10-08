#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_AIAction.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_CoverAction : anim::AnimFeature_AIAction
{
    static constexpr const char* NAME = "animAnimFeature_CoverAction";
    static constexpr const char* ALIAS = "AnimFeature_CoverAction";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<anim::AnimFeature_AIAction>];
    int32_t coverStance; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(coverStance))];
    int32_t coverActionType; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(coverActionType))];
    int32_t coverShootType; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(coverShootType))];
    int32_t movementType; // 58
#else
    int32_t coverStance; // 50
    int32_t coverActionType; // 54
    int32_t coverShootType; // 58
    int32_t movementType; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(AnimFeature_CoverAction, 0x60);
} // namespace anim
using animAnimFeature_CoverAction = anim::AnimFeature_CoverAction;
using AnimFeature_CoverAction = anim::AnimFeature_CoverAction;
} // namespace RED4ext

// clang-format on
