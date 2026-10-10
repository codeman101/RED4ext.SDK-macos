#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_DampQuaternion : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_DampQuaternion";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<anim::AnimNode_QuaternionValue>];
    float defaultRotationSpeed; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(defaultRotationSpeed))];
    EulerAngles defaultInitialValue; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(defaultInitialValue))];
    anim::QuaternionLink inputNode; // 58
    uint8_t unk_78[0x78 - (0x58 + sizeof(inputNode))];
    anim::FloatLink rotationSpeedNode; // 78
    uint8_t unk_98[0x98 - (0x78 + sizeof(rotationSpeedNode))];
    anim::QuaternionLink initialValueNode; // 98
#else
    float defaultRotationSpeed; // 48
    EulerAngles defaultInitialValue; // 4C
    anim::QuaternionLink inputNode; // 58
    anim::FloatLink rotationSpeedNode; // 78
    anim::QuaternionLink initialValueNode; // 98
    uint8_t unkB8[0xC8 - 0xB8]; // B8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_DampQuaternion, 0xC8);
} // namespace anim
using animAnimNode_DampQuaternion = anim::AnimNode_DampQuaternion;
} // namespace RED4ext

// clang-format on
