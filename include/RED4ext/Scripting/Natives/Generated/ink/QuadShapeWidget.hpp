#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) QuadShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkQuadShapeWidget";
    static constexpr const char* ALIAS = "inkQuadShape";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_220[0x220 - ::RED4ext::Detail::DataSize<ink::BaseShapeWidget>];
    RaRef<ink::TextureAtlas> textureAtlas; // 220
    uint8_t unk_228[0x228 - (0x220 + sizeof(textureAtlas))];
    CName texturePart; // 228
#else
    RaRef<ink::TextureAtlas> textureAtlas; // 240
    CName texturePart; // 248
    uint8_t unk250[0x290 - 0x250]; // 250
#endif

};
RED4EXT_ASSERT_SIZE(QuadShapeWidget, 0x290);
} // namespace ink
using inkQuadShapeWidget = ink::QuadShapeWidget;
using inkQuadShape = ink::QuadShapeWidget;
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
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) QuadShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkQuadShapeWidget";
    static constexpr const char* ALIAS = "inkQuadShape";

    RaRef<ink::TextureAtlas> textureAtlas; // 230
    CName texturePart; // 238
    uint8_t unk240[0x280 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(QuadShapeWidget, 0x280);
} // namespace ink
using inkQuadShapeWidget = ink::QuadShapeWidget;
using inkQuadShape = ink::QuadShapeWidget;
} // namespace RED4ext

// clang-format on

#endif
