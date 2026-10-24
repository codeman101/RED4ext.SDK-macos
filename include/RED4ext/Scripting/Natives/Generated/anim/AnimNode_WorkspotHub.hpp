#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EventFilterType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkEntryId.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_WorkspotHub : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_WorkspotHub";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1C8[0x1C8 - ::RED4ext::Detail::DataSize<anim::AnimNode_Base>];
    DynArray<work::WorkEntryId> additionalLinkIds; // 1C8
    uint8_t unk_1D8[0x1D8 - (0x1C8 + sizeof(additionalLinkIds))];
    DynArray<anim::PoseLink> additionalLinks; // 1D8
    uint8_t unk_1E8[0x1E8 - (0x1D8 + sizeof(additionalLinks))];
    CName animLoopEventName; // 1E8
    uint8_t unk_1F0[0x1F0 - (0x1E8 + sizeof(animLoopEventName))];
    bool isCoverHubHack; // 1F0
    uint8_t unk_1F8[0x1F8 - (0x1F0 + sizeof(isCoverHubHack))];
    CName mainEmotionalState; // 1F8
    uint8_t unk_200[0x200 - (0x1F8 + sizeof(mainEmotionalState))];
    CName emotionalExpression; // 200
    uint8_t unk_208[0x208 - (0x200 + sizeof(emotionalExpression))];
    float facialKeyWeight; // 208
    uint8_t unk_210[0x210 - (0x208 + sizeof(facialKeyWeight))];
    CName facialIdleMaleAnimation; // 210
    uint8_t unk_218[0x218 - (0x210 + sizeof(facialIdleMaleAnimation))];
    CName facialIdleKey_MaleAnimation; // 218
    uint8_t unk_220[0x220 - (0x218 + sizeof(facialIdleKey_MaleAnimation))];
    CName facialIdleFemaleAnimation; // 220
    uint8_t unk_228[0x228 - (0x220 + sizeof(facialIdleFemaleAnimation))];
    CName facialIdleKey_FemaleAnimation; // 228
    uint8_t unk_230[0x230 - (0x228 + sizeof(facialIdleKey_FemaleAnimation))];
    anim::EventFilterType eventFilterType; // 230
#else
    uint8_t unk48[0x1C8 - 0x48]; // 48
    DynArray<work::WorkEntryId> additionalLinkIds; // 1C8
    DynArray<anim::PoseLink> additionalLinks; // 1D8
    CName animLoopEventName; // 1E8
    bool isCoverHubHack; // 1F0
    uint8_t unk1F1[0x1F8 - 0x1F1]; // 1F1
    CName mainEmotionalState; // 1F8
    CName emotionalExpression; // 200
    float facialKeyWeight; // 208
    uint8_t unk20C[0x210 - 0x20C]; // 20C
    CName facialIdleMaleAnimation; // 210
    CName facialIdleKey_MaleAnimation; // 218
    CName facialIdleFemaleAnimation; // 220
    CName facialIdleKey_FemaleAnimation; // 228
    anim::EventFilterType eventFilterType; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_WorkspotHub, 0x238);
} // namespace anim
using animAnimNode_WorkspotHub = anim::AnimNode_WorkspotHub;
} // namespace RED4ext

// clang-format on
