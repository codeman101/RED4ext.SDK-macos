#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MaskDataSource.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) MaskWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkMaskWidget";
    static constexpr const char* ALIAS = "inkMask";

// mac-layout (generated from the reflection dump)
    uint8_t unk_204[0x204 - ::RED4ext::Detail::DataSize<ink::LeafWidget>];
    float maskTransparency; // 204
    uint8_t unk_208[0x208 - (0x204 + sizeof(maskTransparency))];
    RaRef<ink::TextureAtlas> textureAtlas; // 208
    uint8_t unk_210[0x210 - (0x208 + sizeof(textureAtlas))];
    CName dynamicTextureMask; // 210
    uint8_t unk_218[0x218 - (0x210 + sizeof(dynamicTextureMask))];
    CName texturePart; // 218
    uint8_t unk_220[0x220 - (0x218 + sizeof(texturePart))];
    ink::MaskDataSource dataSource; // 220
    uint8_t unk_221[0x221 - (0x220 + sizeof(dataSource))];
    bool invertMask; // 221

};
RED4EXT_ASSERT_SIZE(MaskWidget, 0x290);
} // namespace ink
using inkMaskWidget = ink::MaskWidget;
using inkMask = ink::MaskWidget;
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
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MaskDataSource.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) MaskWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkMaskWidget";
    static constexpr const char* ALIAS = "inkMask";

    uint8_t unk210[0x218 - 0x210]; // 210
    float maskTransparency; // 218
    uint8_t unk21C[0x220 - 0x21C]; // 21C
    RaRef<ink::TextureAtlas> textureAtlas; // 220
    CName dynamicTextureMask; // 228
    CName texturePart; // 230
    ink::MaskDataSource dataSource; // 238
    bool invertMask; // 239
    uint8_t unk23A[0x290 - 0x23A]; // 23A
};
RED4EXT_ASSERT_SIZE(MaskWidget, 0x290);
} // namespace ink
using inkMaskWidget = ink::MaskWidget;
using inkMask = ink::MaskWidget;
} // namespace RED4ext

// clang-format on
#endif
