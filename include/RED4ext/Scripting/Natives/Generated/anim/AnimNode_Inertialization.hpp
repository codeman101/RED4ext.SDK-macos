#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/InertializationRotationLimit.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Inertialization : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Inertialization";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    uint32_t transformsCountUpperBound; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(transformsCountUpperBound))];
    uint32_t tracksCountUpperBound; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(tracksCountUpperBound))];
    bool safeMode; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(safeMode))];
    DynArray<anim::InertializationRotationLimit> rotationLimits; // 70
#else
    uint32_t transformsCountUpperBound; // 60
    uint32_t tracksCountUpperBound; // 64
    bool safeMode; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    DynArray<anim::InertializationRotationLimit> rotationLimits; // 70
    uint8_t unk80[0x200 - 0x80]; // 80
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_Inertialization, 0x200);
} // namespace anim
using animAnimNode_Inertialization = anim::AnimNode_Inertialization;
} // namespace RED4ext

// clang-format on
