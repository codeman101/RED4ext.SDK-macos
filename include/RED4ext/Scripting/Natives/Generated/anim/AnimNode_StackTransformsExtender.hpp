#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/StackTransformsExtender_SnapToBoneMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_StackTransformsExtender : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_StackTransformsExtender";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<anim::AnimNode_OnePoseInput>];
    CName tag; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(tag))];
    DynArray<anim::TransformInfo> transformInfos; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(transformInfos))];
    DynArray<anim::StackTransformsExtender_SnapToBoneMethod> snapMethods; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(snapMethods))];
    DynArray<bool> snapToReferenceValues; // 88
    uint8_t unk_98[0x98 - (0x88 + sizeof(snapToReferenceValues))];
    DynArray<anim::TransformIndex> snapTargetBones; // 98
    uint8_t unk_A8[0xA8 - (0x98 + sizeof(snapTargetBones))];
    DynArray<bool> offsetToReferenceValues; // A8
    uint8_t unk_B8[0xB8 - (0xA8 + sizeof(offsetToReferenceValues))];
    DynArray<anim::TransformIndex> offsetSpaceBones; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(offsetSpaceBones))];
    DynArray<QsTransform> offsets; // C8
#else
    CName tag; // 60
    DynArray<anim::TransformInfo> transformInfos; // 68
    DynArray<anim::StackTransformsExtender_SnapToBoneMethod> snapMethods; // 78
    DynArray<bool> snapToReferenceValues; // 88
    DynArray<anim::TransformIndex> snapTargetBones; // 98
    DynArray<bool> offsetToReferenceValues; // A8
    DynArray<anim::TransformIndex> offsetSpaceBones; // B8
    DynArray<QsTransform> offsets; // C8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_StackTransformsExtender, 0xD8);
} // namespace anim
using animAnimNode_StackTransformsExtender = anim::AnimNode_StackTransformsExtender;
} // namespace RED4ext

// clang-format on
