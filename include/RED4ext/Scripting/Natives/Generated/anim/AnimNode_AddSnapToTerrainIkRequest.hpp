#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/HipsIkRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SnapToTerrainIkRequest.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AddSnapToTerrainIkRequest : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AddSnapToTerrainIkRequest";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    anim::FloatLink animDeltaZ; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(animDeltaZ))];
    anim::SnapToTerrainIkRequest leftFootRequest; // 80
    uint8_t unk_1A0[0x1A0 - (0x80 + sizeof(leftFootRequest))];
    anim::SnapToTerrainIkRequest rightFootRequest; // 1A0
    uint8_t unk_2C0[0x2C0 - (0x1A0 + sizeof(rightFootRequest))];
    anim::HipsIkRequest hipsRequest; // 2C0
#else
    anim::FloatLink animDeltaZ; // 60
    anim::SnapToTerrainIkRequest leftFootRequest; // 80
    anim::SnapToTerrainIkRequest rightFootRequest; // 1A0
    anim::HipsIkRequest hipsRequest; // 2C0
    uint8_t unk338[0x3E8 - 0x338]; // 338
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AddSnapToTerrainIkRequest, 0x3E8);
} // namespace anim
using animAnimNode_AddSnapToTerrainIkRequest = anim::AnimNode_AddSnapToTerrainIkRequest;
} // namespace RED4ext

// clang-format on
