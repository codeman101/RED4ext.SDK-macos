#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_QsTransform; }

namespace anim
{
struct AnimNode_ParentConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ParentConstraint";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    Handle<anim::IAnimNodeSourceChannel_QsTransform> parentTransform; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(parentTransform))];
    bool isParentTransformResaved; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(isParentTransformResaved))];
    anim::TransformIndex parentTransformIndex; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(parentTransformIndex))];
    anim::TransformIndex transformIndex; // 90
    uint8_t unk_A8[0xA8 - (0x90 + sizeof(transformIndex))];
    anim::EInterpolationType interpolationType; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(interpolationType))];
    float weight; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(weight))];
    anim::NamedTrackIndex weightFloatTrack; // B0
    uint8_t unk_C8[0xC8 - (0xB0 + sizeof(weightFloatTrack))];
    bool useBoneReferencePoseAsDefaultOffset; // C8
    uint8_t unk_E0[0xE0 - (0xC8 + sizeof(useBoneReferencePoseAsDefaultOffset))];
    anim::FloatLink weightNode; // E0
    uint8_t unk_100[0x100 - (0xE0 + sizeof(weightNode))];
    anim::VectorLink offsetTranslationLS; // 100
    uint8_t unk_120[0x120 - (0x100 + sizeof(offsetTranslationLS))];
    anim::VectorLink offsetEulerRotationLS; // 120
#else
    Handle<anim::IAnimNodeSourceChannel_QsTransform> parentTransform; // 60
    bool isParentTransformResaved; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    anim::TransformIndex parentTransformIndex; // 78
    anim::TransformIndex transformIndex; // 90
    anim::EInterpolationType interpolationType; // A8
    float weight; // AC
    anim::NamedTrackIndex weightFloatTrack; // B0
    bool useBoneReferencePoseAsDefaultOffset; // C8
    uint8_t unkC9[0xE0 - 0xC9]; // C9
    anim::FloatLink weightNode; // E0
    anim::VectorLink offsetTranslationLS; // 100
    anim::VectorLink offsetEulerRotationLS; // 120
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_ParentConstraint, 0x140);
} // namespace anim
using animAnimNode_ParentConstraint = anim::AnimNode_ParentConstraint;
} // namespace RED4ext

// clang-format on
