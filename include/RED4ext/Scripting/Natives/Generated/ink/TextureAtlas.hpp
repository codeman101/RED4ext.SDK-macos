#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DynamicTextureSlot.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ETextureResolution.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasMapper.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasSlice.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureType.hpp>

namespace RED4ext
{
struct CBitmapTexture;
struct DynamicTexture;

namespace ink
{
struct TextureAtlas : CResource
{
    static constexpr const char* NAME = "inkTextureAtlas";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_39[0x39 - ::RED4ext::Detail::DataSize<CResource>];
    ink::TextureType activeTexture; // 39
    uint8_t unk_3A[0x3A - (0x39 + sizeof(activeTexture))];
    ink::ETextureResolution textureResolution; // 3A
    uint8_t unk_40[0x40 - (0x3A + sizeof(textureResolution))];
    RaRef<CBitmapTexture> texture; // 40
    uint8_t unk_58[0x58 - (0x40 + sizeof(texture))];
    RaRef<DynamicTexture> dynamicTexture; // 58
    uint8_t unk_70[0x70 - (0x58 + sizeof(dynamicTexture))];
    DynArray<ink::TextureAtlasSlice> slices; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(slices))];
    DynArray<ink::TextureAtlasMapper> parts; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(parts))];
    std::array<uint8_t, 120> slots; // 90
    uint8_t unk_108[0x108 - (0x90 + sizeof(slots))];
    ink::DynamicTextureSlot dynamicTextureSlot; // 108
    uint8_t unk_120[0x120 - (0x108 + sizeof(dynamicTextureSlot))];
    bool isSingleTextureMode; // 120
#else
    ink::TextureType activeTexture; // 40
    ink::ETextureResolution textureResolution; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    RaRef<CBitmapTexture> texture; // 48
    uint8_t unk50[0x60 - 0x50]; // 50
    RaRef<DynamicTexture> dynamicTexture; // 60
    uint8_t unk68[0x78 - 0x68]; // 68
    DynArray<ink::TextureAtlasSlice> slices; // 78
    DynArray<ink::TextureAtlasMapper> parts; // 88
    std::array<uint8_t, 120>/* UNHANDLED: [3]inkTextureSlot (RT_FixedArray) */ slots; // 98
    ink::DynamicTextureSlot dynamicTextureSlot; // 110
    bool isSingleTextureMode; // 128
    uint8_t unk129[0x138 - 0x129]; // 129
#endif
};
RED4EXT_ASSERT_SIZE(TextureAtlas, 0x138);
} // namespace ink
using inkTextureAtlas = ink::TextureAtlas;
} // namespace RED4ext

// clang-format on
