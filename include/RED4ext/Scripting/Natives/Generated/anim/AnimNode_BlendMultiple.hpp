#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BlendMultiple : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendMultiple";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    DynArray<float> inputValues; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(inputValues))];
    DynArray<float> sortedInputValues; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(sortedInputValues))];
    float minWeight; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(minWeight))];
    float maxWeight; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(maxWeight))];
    bool radialBlending; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(radialBlending))];
    bool timeWarpingEnabled; // 71
    uint8_t unk_78[0x78 - (0x71 + sizeof(timeWarpingEnabled))];
    Handle<anim::ISyncMethod> syncMethod; // 78
    uint8_t unk_88[0x88 - (0x78 + sizeof(syncMethod))];
    Handle<anim::IMotionTableProvider> motionProvider; // 88
    uint8_t unk_E8[0xE8 - (0x88 + sizeof(motionProvider))];
    anim::FloatLink weightNode; // E8
    uint8_t unk_108[0x108 - (0xE8 + sizeof(weightNode))];
    DynArray<anim::PoseLink> inputNodes; // 108
#else
    DynArray<float> inputValues; // 48
    DynArray<float> sortedInputValues; // 58
    float minWeight; // 68
    float maxWeight; // 6C
    bool radialBlending; // 70
    bool timeWarpingEnabled; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
    Handle<anim::ISyncMethod> syncMethod; // 78
    Handle<anim::IMotionTableProvider> motionProvider; // 88
    uint8_t unk98[0xE8 - 0x98]; // 98
    anim::FloatLink weightNode; // E8
    DynArray<anim::PoseLink> inputNodes; // 108
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendMultiple, 0x118);
} // namespace anim
using animAnimNode_BlendMultiple = anim::AnimNode_BlendMultiple;
} // namespace RED4ext

// clang-format on
