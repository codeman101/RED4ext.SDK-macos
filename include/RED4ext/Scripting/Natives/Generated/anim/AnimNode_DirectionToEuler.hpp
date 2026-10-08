#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EDirectionToEuler.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_DirectionToEuler : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_DirectionToEuler";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    Vector4 initialForwardVector; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(initialForwardVector))];
    anim::VectorLink inputNode; // 60
    uint8_t unk_80[0x80 - (0x60 + sizeof(inputNode))];
    anim::EDirectionToEuler conversionType; // 80
#else
    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 initialForwardVector; // 50
    anim::VectorLink inputNode; // 60
    anim::EDirectionToEuler conversionType; // 80
    uint8_t unk84[0x90 - 0x84]; // 84
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_DirectionToEuler, 0x90);
} // namespace anim
using animAnimNode_DirectionToEuler = anim::AnimNode_DirectionToEuler;
} // namespace RED4ext

// clang-format on
