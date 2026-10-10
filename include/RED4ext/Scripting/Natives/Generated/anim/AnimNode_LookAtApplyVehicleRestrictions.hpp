#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LookAtApplyVehicleRestrictions : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LookAtApplyVehicleRestrictions";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_98[0x98 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    CName group; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(group))];
    CName name; // A0
    uint8_t unk_B8[0xB8 - (0xA0 + sizeof(name))];
    anim::TransformIndex referenceBone; // B8
#else
    uint8_t unk60[0x98 - 0x60]; // 60
    CName group; // 98
    CName name; // A0
    uint8_t unkA8[0xB8 - 0xA8]; // A8
    anim::TransformIndex referenceBone; // B8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtApplyVehicleRestrictions, 0xD0);
} // namespace anim
using animAnimNode_LookAtApplyVehicleRestrictions = anim::AnimNode_LookAtApplyVehicleRestrictions;
} // namespace RED4ext

// clang-format on
