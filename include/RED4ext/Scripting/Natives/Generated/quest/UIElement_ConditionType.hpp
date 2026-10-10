#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/UICondition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct UIElement_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questUIElement_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIConditionType>];
    TweakDBID element; // 34
    uint8_t unk_3C[0x3C - (0x34 + sizeof(element))];
    game::data::UICondition condition; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(condition))];
    bool value; // 40
#else
    TweakDBID element; // 38
    game::data::UICondition condition; // 40
    bool value; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
#endif
};
RED4EXT_ASSERT_SIZE(UIElement_ConditionType, 0x48);
} // namespace quest
using questUIElement_ConditionType = quest::UIElement_ConditionType;
} // namespace RED4ext

// clang-format on
