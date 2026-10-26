#if defined(__APPLE__)
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

};
RED4EXT_ASSERT_SIZE(ShapeWidget, 0x380);
} // namespace ink
using inkShapeWidget = ink::ShapeWidget;
using inkShape = ink::ShapeWidget;
} // namespace RED4ext

// clang-format on
#else
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

    Ref<ink::ShapeCollectionResource> shapeResource; // 240
    CName shapeName; // 258
    bool keepInBounds; // 260
    uint8_t unk261[0x264 - 0x261]; // 261
    float lineThickness; // 264
    uint8_t unk268[0x270 - 0x268]; // 268
    HDRColor borderColor; // 270
    float borderOpacity; // 280
    float fillOpacity; // 284
    ink::EShapeVariant shapeVariant; // 288
    ink::EEndCapStyle endCapStyle; // 28C
    ink::EJointStyle jointStyle; // 290
    ink::EHorizontalAlign contentHAlign; // 294
    ink::EVerticalAlign contentVAlign; // 295
    bool useNineSlice; // 296
    uint8_t unk297[0x298 - 0x297]; // 297
    ink::Margin nineSliceScale; // 298
    uint8_t unk2A8[0x380 - 0x2A8]; // 2A8
};
RED4EXT_ASSERT_SIZE(ShapeWidget, 0x380);
} // namespace ink
using inkShapeWidget = ink::ShapeWidget;
using inkShape = ink::ShapeWidget;
} // namespace RED4ext

// clang-format on
#endif
