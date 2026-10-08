#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BlendSpace_InternalsBlendSpace.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BlendSpace : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendSpace";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    anim::AnimNode_BlendSpace_InternalsBlendSpace blendSpace; // 48
    uint8_t unk_1B8[0x1B8 - (0x48 + sizeof(blendSpace))];
    DynArray<anim::FloatLink> inputLinks; // 1B8
    uint8_t unk_1C8[0x1C8 - (0x1B8 + sizeof(inputLinks))];
    anim::FloatLink progressLink; // 1C8
    uint8_t unk_1E8[0x1E8 - (0x1C8 + sizeof(progressLink))];
    bool fireAnimEndEvent; // 1E8
    uint8_t unk_1F0[0x1F0 - (0x1E8 + sizeof(fireAnimEndEvent))];
    CName animEndEventName; // 1F0
    uint8_t unk_1F8[0x1F8 - (0x1F0 + sizeof(animEndEventName))];
    bool isLooped; // 1F8
#else
    anim::AnimNode_BlendSpace_InternalsBlendSpace blendSpace; // 48
    DynArray<anim::FloatLink> inputLinks; // 210
    anim::FloatLink progressLink; // 220
    bool fireAnimEndEvent; // 240
    uint8_t unk241[0x248 - 0x241]; // 241
    CName animEndEventName; // 248
    bool isLooped; // 250
    uint8_t unk251[0x258 - 0x251]; // 251
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendSpace, 0x258);
} // namespace anim
using animAnimNode_BlendSpace = anim::AnimNode_BlendSpace;
} // namespace RED4ext

// clang-format on
