#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CorrectivePoseEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ApplyCorrectivePoseRBF : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ApplyCorrectivePoseRBF";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    DynArray<anim::CorrectivePoseEntry> correctives; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(correctives))];
    float rbfCoefficient; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(rbfCoefficient))];
    float rbfPowValue; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(rbfPowValue))];
    float correctiveFrame; // 78
#else
    DynArray<anim::CorrectivePoseEntry> correctives; // 60
    float rbfCoefficient; // 70
    float rbfPowValue; // 74
    float correctiveFrame; // 78
    uint8_t unk7C[0xF0 - 0x7C]; // 7C
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ApplyCorrectivePoseRBF, 0xF0);
} // namespace anim
using animAnimNode_ApplyCorrectivePoseRBF = anim::AnimNode_ApplyCorrectivePoseRBF;
} // namespace RED4ext

// clang-format on
