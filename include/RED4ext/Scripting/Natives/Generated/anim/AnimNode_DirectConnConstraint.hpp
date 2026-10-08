#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_QsTransform; }

namespace anim
{
struct AnimNode_DirectConnConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_DirectConnConstraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    Handle<anim::IAnimNodeSourceChannel_QsTransform> sourceTransform; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(sourceTransform))];
    bool isSourceTransformResaved; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(isSourceTransformResaved))];
    anim::TransformIndex sourceTransformIndex; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(sourceTransformIndex))];
    anim::TransformIndex transformIndex; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(transformIndex))];
    bool posX; // A8
    uint8_t unk_A9[0xA9 - (0xA8 + sizeof(posX))];
    bool posY; // A9
    uint8_t unk_AA[0xAA - (0xA9 + sizeof(posY))];
    bool posZ; // AA
    uint8_t unk_AB[0xAB - (0xAA + sizeof(posZ))];
    bool rotX; // AB
    uint8_t unk_AC[0xAC - (0xAB + sizeof(rotX))];
    bool rotY; // AC
    uint8_t unk_AD[0xAD - (0xAC + sizeof(rotY))];
    bool rotZ; // AD
    uint8_t unk_AE[0xAE - (0xAD + sizeof(rotZ))];
    bool scaleX; // AE
    uint8_t unk_AF[0xAF - (0xAE + sizeof(scaleX))];
    bool scaleY; // AF
    uint8_t unk_B0[0xB0 - (0xAF + sizeof(scaleY))];
    bool scaleZ; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(scaleZ))];
    float weight; // B4
    uint8_t unk_C8[0xC8 - (0xB4 + sizeof(weight))];
    anim::FloatLink weightNode; // C8
#else
    Handle<anim::IAnimNodeSourceChannel_QsTransform> sourceTransform; // 60
    bool isSourceTransformResaved; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    anim::TransformIndex sourceTransformIndex; // 78
    anim::TransformIndex transformIndex; // 90
    bool posX; // A8
    bool posY; // A9
    bool posZ; // AA
    bool rotX; // AB
    bool rotY; // AC
    bool rotZ; // AD
    bool scaleX; // AE
    bool scaleY; // AF
    bool scaleZ; // B0
    uint8_t unkB1[0xB4 - 0xB1]; // B1
    float weight; // B4
    uint8_t unkB8[0xC8 - 0xB8]; // B8
    anim::FloatLink weightNode; // C8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_DirectConnConstraint, 0xE8);
} // namespace anim
using animAnimNode_DirectConnConstraint = anim::AnimNode_DirectConnConstraint;
} // namespace RED4ext

// clang-format on
