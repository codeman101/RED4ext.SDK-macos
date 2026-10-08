#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Container.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_State : anim::AnimNode_Container
{
    static constexpr const char* NAME = "animAnimNode_State";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<anim::AnimNode_Container>];
    CName name; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(name))];
    DynArray<int16_t> outTransitionIndices; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(outTransitionIndices))];
    DynArray<CName> tags; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(tags))];
    uint32_t requiredQualityDistanceCategory; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(requiredQualityDistanceCategory))];
    bool preventTransitionsInActivationFrame; // 84
#else
    CName name; // 58
    DynArray<int16_t> outTransitionIndices; // 60
    DynArray<CName> tags; // 70
    uint32_t requiredQualityDistanceCategory; // 80
    bool preventTransitionsInActivationFrame; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_State, 0x88);
} // namespace anim
using animAnimNode_State = anim::AnimNode_State;
} // namespace RED4ext

// clang-format on
