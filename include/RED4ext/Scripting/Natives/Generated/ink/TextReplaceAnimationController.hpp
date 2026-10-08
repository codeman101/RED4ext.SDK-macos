#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextReplaceAnimationControllerWidgetTextUsage.hpp>

namespace RED4ext
{
namespace ink
{
struct TextReplaceAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextReplaceAnimationController";
    static constexpr const char* ALIAS = "inkTextReplaceController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_E9[0xE9 - ::RED4ext::Detail::DataSize<ink::TextAnimationController>];
    ink::TextReplaceAnimationControllerWidgetTextUsage widgetTextUsage; // E9
    uint8_t unk_110[0x110 - (0xE9 + sizeof(widgetTextUsage))];
    CString targetText; // 110
    uint8_t unk_130[0x130 - (0x110 + sizeof(targetText))];
    LocalizationString baseTextLocalized; // 130
    uint8_t unk_158[0x158 - (0x130 + sizeof(baseTextLocalized))];
    LocalizationString targetTextLocalized; // 158
    uint8_t unk_1C4[0x1C4 - (0x158 + sizeof(targetTextLocalized))];
    float timeToSkip; // 1C4
#else
    ink::TextReplaceAnimationControllerWidgetTextUsage widgetTextUsage; // F0
    uint8_t unkF1[0x118 - 0xF1]; // F1
    CString targetText; // 118
    LocalizationString baseTextLocalized; // 138
    LocalizationString targetTextLocalized; // 160
    uint8_t unk188[0x1CC - 0x188]; // 188
    float timeToSkip; // 1CC
#endif
};
RED4EXT_ASSERT_SIZE(TextReplaceAnimationController, 0x1D0);
} // namespace ink
using inkTextReplaceAnimationController = ink::TextReplaceAnimationController;
using inkTextReplaceController = ink::TextReplaceAnimationController;
} // namespace RED4ext

// clang-format on
