#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_DampVector : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_DampVector";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<anim::AnimNode_VectorValue>];
    Vector4 defaultIncreaseSpeed; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(defaultIncreaseSpeed))];
    Vector4 defaultDecreaseSpeed; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(defaultDecreaseSpeed))];
    bool startFromDefaultValue; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(startFromDefaultValue))];
    Vector4 defaultInitialValue; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(defaultInitialValue))];
    anim::VectorLink inputNode; // 90
    uint8_t unk_B0[0xB0 - (0x90 + sizeof(inputNode))];
    anim::VectorLink increaseSpeedNode; // B0
    uint8_t unk_D0[0xD0 - (0xB0 + sizeof(increaseSpeedNode))];
    anim::VectorLink decreaseSpeedNode; // D0
#else
    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 defaultIncreaseSpeed; // 50
    Vector4 defaultDecreaseSpeed; // 60
    bool startFromDefaultValue; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
    Vector4 defaultInitialValue; // 80
    anim::VectorLink inputNode; // 90
    anim::VectorLink increaseSpeedNode; // B0
    anim::VectorLink decreaseSpeedNode; // D0
    uint8_t unkF0[0x100 - 0xF0]; // F0
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_DampVector, 0x100);
} // namespace anim
using animAnimNode_DampVector = anim::AnimNode_DampVector;
} // namespace RED4ext

// clang-format on
