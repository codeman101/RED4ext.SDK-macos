#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITexture.hpp>
#include <RED4ext/Scripting/Natives/Generated/STextureGroupSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureResource.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

struct CTextureArray : ITexture
{
    static constexpr const char* NAME = "CTextureArray";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<ITexture>];
    STextureGroupSetup setup; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(setup))];
    Handle<IRenderResourceBlob> renderResourceBlob; // 70
    uint8_t unk_88[0x88 - (0x70 + sizeof(renderResourceBlob))];
    rend::RenderTextureResource renderTextureResource; // 88
#else
    uint8_t unk40[0x60 - 0x40]; // 40
    STextureGroupSetup setup; // 60
    Handle<IRenderResourceBlob> renderResourceBlob; // 70
    uint8_t unk80[0x88 - 0x80]; // 80
    rend::RenderTextureResource renderTextureResource; // 88
#endif
};
RED4EXT_ASSERT_SIZE(CTextureArray, 0x98);
} // namespace RED4ext

// clang-format on
