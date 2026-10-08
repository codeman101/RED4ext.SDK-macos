#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct TextKiroshiAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextKiroshiAnimationController";
    static constexpr const char* ALIAS = "inkTextKiroshiAnimController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_150[0x150 - ::RED4ext::Detail::DataSize<ink::TextAnimationController>];
    CString nativeText; // 150
    uint8_t unk_170[0x170 - (0x150 + sizeof(nativeText))];
    ink::TextWidgetReference preTranslatedTextWidget; // 170
    uint8_t unk_188[0x188 - (0x170 + sizeof(preTranslatedTextWidget))];
    ink::TextWidgetReference postTranslatedTextWidget; // 188
    uint8_t unk_1A0[0x1A0 - (0x188 + sizeof(postTranslatedTextWidget))];
    ink::RichTextBoxWidgetReference nativeTextWidget; // 1A0
    uint8_t unk_1B8[0x1B8 - (0x1A0 + sizeof(nativeTextWidget))];
    ink::TextWidgetReference translatedTextWidget; // 1B8
    uint8_t unk_228[0x228 - (0x1B8 + sizeof(translatedTextWidget))];
    float timeToSkip; // 228
#else
    uint8_t unkF0[0x150 - 0xF0]; // F0
    CString nativeText; // 150
    ink::TextWidgetReference preTranslatedTextWidget; // 170
    ink::TextWidgetReference postTranslatedTextWidget; // 188
    ink::RichTextBoxWidgetReference nativeTextWidget; // 1A0
    ink::TextWidgetReference translatedTextWidget; // 1B8
    uint8_t unk1D0[0x228 - 0x1D0]; // 1D0
    float timeToSkip; // 228
    uint8_t unk22C[0x230 - 0x22C]; // 22C
#endif
};
RED4EXT_ASSERT_SIZE(TextKiroshiAnimationController, 0x230);
} // namespace ink
using inkTextKiroshiAnimationController = ink::TextKiroshiAnimationController;
using inkTextKiroshiAnimController = ink::TextKiroshiAnimationController;
} // namespace RED4ext

// clang-format on
