#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITexture.hpp>
#include <RED4ext/Scripting/Natives/Generated/STextureGroupSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureResource.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

struct CBitmapTexture : ITexture
{
    static constexpr const char* NAME = "CBitmapTexture";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<ITexture>];
    uint32_t width; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(width))];
    uint32_t height; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(height))];
    uint32_t depth; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(depth))];
    STextureGroupSetup setup; // 54
    uint8_t unk_70[0x70 - (0x54 + sizeof(setup))];
    Handle<IRenderResourceBlob> renderResourceBlob; // 70
    uint8_t unk_88[0x88 - (0x70 + sizeof(renderResourceBlob))];
    rend::RenderTextureResource renderTextureResource; // 88
    uint8_t unk_A4[0xA4 - (0x88 + sizeof(renderTextureResource))];
    Vector3 histBiasMulCoef; // A4
    uint8_t unk_B0[0xB0 - (0xA4 + sizeof(histBiasMulCoef))];
    Vector3 histBiasAddCoef; // B0
#else
    uint8_t unk40[0x48 - 0x40]; // 40
    uint32_t width; // 48
    uint32_t height; // 4C
    uint32_t depth; // 50
    STextureGroupSetup setup; // 54
    uint8_t unk64[0x70 - 0x64]; // 64
    Handle<IRenderResourceBlob> renderResourceBlob; // 70
    uint8_t unk80[0x88 - 0x80]; // 80
    rend::RenderTextureResource renderTextureResource; // 88
    uint8_t unk98[0xA4 - 0x98]; // 98
    Vector3 histBiasMulCoef; // A4
    Vector3 histBiasAddCoef; // B0
    uint8_t unkBC[0xC0 - 0xBC]; // BC
#endif
};
RED4EXT_ASSERT_SIZE(CBitmapTexture, 0xC0);
} // namespace RED4ext

// clang-format on
