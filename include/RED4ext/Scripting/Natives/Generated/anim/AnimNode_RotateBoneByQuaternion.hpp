#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_RotateBoneByQuaternion : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_RotateBoneByQuaternion";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::TransformIndex bone; // 48
    uint8_t unk_60[0x60 - (0x48 + sizeof(bone))];
    bool useIncrementalMode; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(useIncrementalMode))];
    bool resetOnActivation; // 61
    uint8_t unk_78[0x78 - (0x61 + sizeof(resetOnActivation))];
    anim::PoseLink inputNode; // 78
    uint8_t unk_90[0x90 - (0x78 + sizeof(inputNode))];
    anim::QuaternionLink quaternionNode; // 90
#else
    anim::TransformIndex bone; // 48
    bool useIncrementalMode; // 60
    bool resetOnActivation; // 61
    uint8_t unk62[0x78 - 0x62]; // 62
    anim::PoseLink inputNode; // 78
    anim::QuaternionLink quaternionNode; // 90
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_RotateBoneByQuaternion, 0xB0);
} // namespace anim
using animAnimNode_RotateBoneByQuaternion = anim::AnimNode_RotateBoneByQuaternion;
} // namespace RED4ext

// clang-format on
