#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoleVectorDetails.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_AddIkRequest : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AddIkRequest";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    CName ikChain; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(ikChain))];
    anim::TransformIndex targetBone; // 68
    uint8_t unk_80[0x80 - (0x68 + sizeof(targetBone))];
    Vector3 positionOffset; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(positionOffset))];
    Quaternion rotationOffset; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(rotationOffset))];
    float weightPosition; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(weightPosition))];
    float weightRotation; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(weightRotation))];
    float blendTimeIn; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(blendTimeIn))];
    float blendTimeOut; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(blendTimeOut))];
    int32_t priority; // B0
    uint8_t unk_B8[0xB8 - (0xB0 + sizeof(priority))];
    anim::PoleVectorDetails poleVector; // B8
#else
    CName ikChain; // 60
    anim::TransformIndex targetBone; // 68
    Vector3 positionOffset; // 80
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    Quaternion rotationOffset; // 90
    float weightPosition; // A0
    float weightRotation; // A4
    float blendTimeIn; // A8
    float blendTimeOut; // AC
    int32_t priority; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    anim::PoleVectorDetails poleVector; // B8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_AddIkRequest, 0xE0);
} // namespace anim
using animAnimNode_AddIkRequest = anim::AnimNode_AddIkRequest;
} // namespace RED4ext

// clang-format on
