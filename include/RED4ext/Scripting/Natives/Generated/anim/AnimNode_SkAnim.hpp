#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }

namespace anim
{
struct AnimNode_SkAnim : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_SkAnim";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    CName animLoopEventName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(animLoopEventName))];
    bool applyMotion; // 50
    uint8_t unk_51[0x51 - (0x50 + sizeof(applyMotion))];
    bool isLooped; // 51
    uint8_t unk_52[0x52 - (0x51 + sizeof(isLooped))];
    bool collectEvents; // 52
    uint8_t unk_53[0x53 - (0x52 + sizeof(collectEvents))];
    bool fireAnimLoopEvent; // 53
    uint8_t unk_54[0x54 - (0x53 + sizeof(fireAnimLoopEvent))];
    float clipFront; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(clipFront))];
    float clipEnd; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(clipEnd))];
    bool convertToAdditive; // 5C
    uint8_t unk_5D[0x5D - (0x5C + sizeof(convertToAdditive))];
    bool resume; // 5D
    uint8_t unk_5E[0x5E - (0x5D + sizeof(resume))];
    bool applyInertializationOnAnimSetSwap; // 5E
    uint8_t unk_60[0x60 - (0x5E + sizeof(applyInertializationOnAnimSetSwap))];
    CName clipFrontByEvent; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(clipFrontByEvent))];
    CName clipEndByEvent; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(clipEndByEvent))];
    Handle<anim::IMotionTableProvider> motionProvider; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(motionProvider))];
    CName pushDataByTag; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(pushDataByTag))];
    CName popDataByTag; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(popDataByTag))];
    CName pushSafeCutTag; // 90
    uint8_t unk_C8[0xC8 - (0x90 + sizeof(pushSafeCutTag))];
    CName animation; // C8
#else
    CName animLoopEventName; // 48
    bool applyMotion; // 50
    bool isLooped; // 51
    bool collectEvents; // 52
    bool fireAnimLoopEvent; // 53
    float clipFront; // 54
    float clipEnd; // 58
    bool convertToAdditive; // 5C
    bool resume; // 5D
    bool applyInertializationOnAnimSetSwap; // 5E
    uint8_t unk5F[0x60 - 0x5F]; // 5F
    CName clipFrontByEvent; // 60
    CName clipEndByEvent; // 68
    Handle<anim::IMotionTableProvider> motionProvider; // 70
    CName pushDataByTag; // 80
    CName popDataByTag; // 88
    CName pushSafeCutTag; // 90
    uint8_t unk98[0xC8 - 0x98]; // 98
    CName animation; // C8
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_SkAnim, 0xD0);
} // namespace anim
using animAnimNode_SkAnim = anim::AnimNode_SkAnim;
} // namespace RED4ext

// clang-format on
