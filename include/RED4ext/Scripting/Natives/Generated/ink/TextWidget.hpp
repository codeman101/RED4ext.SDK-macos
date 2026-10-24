#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/HorizontalAlignment.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/JustificationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/LetterCase.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/OverflowPolicy.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/VerticalAlignment.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/WrappingInfo.hpp>

namespace RED4ext
{
namespace ink { struct FontFamilyResource; }
namespace rend { struct Font; }

namespace ink
{
struct __declspec(align(0x10)) TextWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkTextWidget";
    static constexpr const char* ALIAS = "inkText";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_248[0x248 - ::RED4ext::Detail::DataSize<ink::LeafWidget>];
    CString text; // 248
    uint8_t unk_268[0x268 - (0x248 + sizeof(text))];
    CName textIdKey; // 268
    uint8_t unk_270[0x270 - (0x268 + sizeof(textIdKey))];
    RaRef<ink::FontFamilyResource> fontFamily; // 270
    uint8_t unk_278[0x278 - (0x270 + sizeof(fontFamily))];
    CName fontStyle; // 278
    uint8_t unk_280[0x280 - (0x278 + sizeof(fontStyle))];
    uint32_t fontSize; // 280
    uint8_t unk_288[0x288 - (0x280 + sizeof(fontSize))];
    ink::EHorizontalAlign contentHAlign; // 288
    uint8_t unk_289[0x289 - (0x288 + sizeof(contentHAlign))];
    ink::EVerticalAlign contentVAlign; // 289
    uint8_t unk_2A0[0x2A0 - (0x289 + sizeof(contentVAlign))];
    Handle<rend::Font> font; // 2A0
    uint8_t unk_2E8[0x2E8 - (0x2A0 + sizeof(font))];
    text::LetterCase letterCase; // 2E8
    uint8_t unk_2F0[0x2F0 - (0x2E8 + sizeof(letterCase))];
    uint32_t tracking; // 2F0
    uint8_t unk_2F4[0x2F4 - (0x2F0 + sizeof(tracking))];
    bool lockFontInGame; // 2F4
    uint8_t unk_2F8[0x2F8 - (0x2F4 + sizeof(lockFontInGame))];
    LocalizationString localizationString; // 2F8
    uint8_t unk_350[0x350 - (0x2F8 + sizeof(localizationString))];
    float lineHeightPercentage; // 350
    uint8_t unk_358[0x358 - (0x350 + sizeof(lineHeightPercentage))];
    float scrollTextSpeed; // 358
    uint8_t unk_35C[0x35C - (0x358 + sizeof(scrollTextSpeed))];
    uint16_t scrollDelay; // 35C
    uint8_t unk_370[0x370 - (0x35C + sizeof(scrollDelay))];
    text::WrappingInfo wrappingInfo; // 370
    uint8_t unk_37C[0x37C - (0x370 + sizeof(wrappingInfo))];
    text::JustificationType justification; // 37C
    uint8_t unk_37D[0x37D - (0x37C + sizeof(justification))];
    text::VerticalAlignment textVerticalAlignment; // 37D
    uint8_t unk_37E[0x37E - (0x37D + sizeof(textVerticalAlignment))];
    text::HorizontalAlignment textHorizontalAlignment; // 37E
    uint8_t unk_380[0x380 - (0x37E + sizeof(textHorizontalAlignment))];
    text::OverflowPolicy textOverflowPolicy; // 380
#else
    uint8_t unk210[0x258 - 0x210]; // 210
    CString text; // 258
    CName textIdKey; // 278
    RaRef<ink::FontFamilyResource> fontFamily; // 280
    CName fontStyle; // 288
    uint32_t fontSize; // 290
    uint8_t unk294[0x298 - 0x294]; // 294
    ink::EHorizontalAlign contentHAlign; // 298
    ink::EVerticalAlign contentVAlign; // 299
    uint8_t unk29A[0x2B0 - 0x29A]; // 29A
    Handle<rend::Font> font; // 2B0
    uint8_t unk2C0[0x2F8 - 0x2C0]; // 2C0
    text::LetterCase letterCase; // 2F8
    uint8_t unk2F9[0x300 - 0x2F9]; // 2F9
    uint32_t tracking; // 300
    bool lockFontInGame; // 304
    uint8_t unk305[0x308 - 0x305]; // 305
    LocalizationString localizationString; // 308
    uint8_t unk330[0x360 - 0x330]; // 330
    float lineHeightPercentage; // 360
    uint8_t unk364[0x368 - 0x364]; // 364
    float scrollTextSpeed; // 368
    uint16_t scrollDelay; // 36C
    uint8_t unk36E[0x380 - 0x36E]; // 36E
    text::WrappingInfo wrappingInfo; // 380
    text::JustificationType justification; // 38C
    text::VerticalAlignment textVerticalAlignment; // 38D
    text::HorizontalAlignment textHorizontalAlignment; // 38E
    uint8_t unk38F[0x390 - 0x38F]; // 38F
    text::OverflowPolicy textOverflowPolicy; // 390
    uint8_t unk391[0x460 - 0x391]; // 391
#endif
};
RED4EXT_ASSERT_SIZE(TextWidget, 0x460);
} // namespace ink
using inkTextWidget = ink::TextWidget;
using inkText = ink::TextWidget;
} // namespace RED4ext

// clang-format on
