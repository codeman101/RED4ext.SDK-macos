#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EEndCapStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EJointStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EShapeVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { struct ShapeCollectionResource; }

namespace ink
{
struct __declspec(align(0x10)) ShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkShapeWidget";
    static constexpr const char* ALIAS = "inkShape";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_220[0x220 - ::RED4ext::Detail::DataSize<ink::BaseShapeWidget>];
    Ref<ink::ShapeCollectionResource> shapeResource; // 220
    uint8_t unk_238[0x238 - (0x220 + sizeof(shapeResource))];
    CName shapeName; // 238
    uint8_t unk_240[0x240 - (0x238 + sizeof(shapeName))];
    bool keepInBounds; // 240
    uint8_t unk_244[0x244 - (0x240 + sizeof(keepInBounds))];
    float lineThickness; // 244
    uint8_t unk_250[0x250 - (0x244 + sizeof(lineThickness))];
    HDRColor borderColor; // 250
    uint8_t unk_260[0x260 - (0x250 + sizeof(borderColor))];
    float borderOpacity; // 260
    uint8_t unk_264[0x264 - (0x260 + sizeof(borderOpacity))];
    float fillOpacity; // 264
    uint8_t unk_268[0x268 - (0x264 + sizeof(fillOpacity))];
    ink::EShapeVariant shapeVariant; // 268
    uint8_t unk_26C[0x26C - (0x268 + sizeof(shapeVariant))];
    ink::EEndCapStyle endCapStyle; // 26C
    uint8_t unk_270[0x270 - (0x26C + sizeof(endCapStyle))];
    ink::EJointStyle jointStyle; // 270
    uint8_t unk_274[0x274 - (0x270 + sizeof(jointStyle))];
    ink::EHorizontalAlign contentHAlign; // 274
    uint8_t unk_275[0x275 - (0x274 + sizeof(contentHAlign))];
    ink::EVerticalAlign contentVAlign; // 275
    uint8_t unk_276[0x276 - (0x275 + sizeof(contentVAlign))];
    bool useNineSlice; // 276
    uint8_t unk_278[0x278 - (0x276 + sizeof(useNineSlice))];
    ink::Margin nineSliceScale; // 278
#else
    Ref<ink::ShapeCollectionResource> shapeResource; // 230
    CName shapeName; // 248
    bool keepInBounds; // 250
    uint8_t unk251[0x254 - 0x251]; // 251
    float lineThickness; // 254
    uint8_t unk258[0x260 - 0x258]; // 258
    HDRColor borderColor; // 260
    float borderOpacity; // 270
    float fillOpacity; // 274
    ink::EShapeVariant shapeVariant; // 278
    ink::EEndCapStyle endCapStyle; // 27C
    ink::EJointStyle jointStyle; // 280
    ink::EHorizontalAlign contentHAlign; // 284
    ink::EVerticalAlign contentVAlign; // 285
    bool useNineSlice; // 286
    uint8_t unk287[0x288 - 0x287]; // 287
    ink::Margin nineSliceScale; // 288
    uint8_t unk298[0x370 - 0x298]; // 298
#endif
};
RED4EXT_ASSERT_SIZE(ShapeWidget, 0x370);
} // namespace ink
using inkShapeWidget = ink::ShapeWidget;
using inkShape = ink::ShapeWidget;
} // namespace RED4ext

// clang-format on
