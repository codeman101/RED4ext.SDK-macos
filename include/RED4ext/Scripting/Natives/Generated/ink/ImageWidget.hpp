#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushMirrorType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushTileType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) ImageWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkImageWidget";
    static constexpr const char* ALIAS = "inkImage";

    RaRef<ink::TextureAtlas> textureAtlas; // 210
    CName texturePart; // 218
    CName externalDynamicTexture; // 220
    ink::EHorizontalAlign contentHAlign; // 228
    ink::EVerticalAlign contentVAlign; // 229
    ink::BrushMirrorType mirrorType; // 22A
    ink::BrushTileType tileType; // 22B
    float horizontalTileCrop; // 22C
    float verticalTileCrop; // 230
    bool useExternalDynamicTexture; // 234
    bool useNineSliceScale; // 235
    uint8_t unk236[0x238 - 0x236]; // 236
    ink::Margin nineSliceScale; // 238
    ink::EHorizontalAlign tileHAlign; // 248
    ink::EVerticalAlign tileVAlign; // 249
#if !defined(__APPLE__)
    uint8_t unk24A[0x350 - 0x24A]; // 24A
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(ImageWidget, 0x350);
} // namespace ink
using inkImageWidget = ink::ImageWidget;
using inkImage = ink::ImageWidget;
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
#include <RED4ext/Scripting/Natives/Generated/ink/BrushMirrorType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushTileType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) ImageWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkImageWidget";
    static constexpr const char* ALIAS = "inkImage";

    RaRef<ink::TextureAtlas> textureAtlas; // 200
    CName texturePart; // 208
    CName externalDynamicTexture; // 210
    ink::EHorizontalAlign contentHAlign; // 218
    ink::EVerticalAlign contentVAlign; // 219
    ink::BrushMirrorType mirrorType; // 21A
    ink::BrushTileType tileType; // 21B
    float horizontalTileCrop; // 21C
    float verticalTileCrop; // 220
    bool useExternalDynamicTexture; // 224
    bool useNineSliceScale; // 225
    uint8_t unk226[0x228 - 0x226]; // 226
    ink::Margin nineSliceScale; // 228
    ink::EHorizontalAlign tileHAlign; // 238
    ink::EVerticalAlign tileVAlign; // 239
    uint8_t unk23A[0x340 - 0x23A]; // 23A
};
RED4EXT_ASSERT_SIZE(ImageWidget, 0x340);
} // namespace ink
using inkImageWidget = ink::ImageWidget;
using inkImage = ink::ImageWidget;
} // namespace RED4ext

// clang-format on

#endif
