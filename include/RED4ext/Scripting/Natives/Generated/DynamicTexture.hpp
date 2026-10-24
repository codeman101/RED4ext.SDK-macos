#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/DynamicTextureDataFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITexture.hpp>

namespace RED4ext
{
struct IDynamicTextureGenerator;

struct DynamicTexture : ITexture
{
    static constexpr const char* NAME = "DynamicTexture";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<ITexture>];
    uint32_t width; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(width))];
    uint32_t height; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(height))];
    bool scaleToViewport; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(scaleToViewport))];
    float viewportScale; // 48
    uint8_t unk_54[0x54 - (0x48 + sizeof(viewportScale))];
    DynamicTextureDataFormat dataFormat; // 54
    uint8_t unk_55[0x55 - (0x54 + sizeof(dataFormat))];
    bool mipChain; // 55
    uint8_t unk_56[0x56 - (0x55 + sizeof(mipChain))];
    uint8_t samplesCount; // 56
    uint8_t unk_88[0x88 - (0x56 + sizeof(samplesCount))];
    Handle<IDynamicTextureGenerator> generator; // 88
#else
    uint32_t width; // 40
    uint32_t height; // 44
    bool scaleToViewport; // 48
    uint8_t unk49[0x54 - 0x49]; // 49
    DynamicTextureDataFormat dataFormat; // 54
    bool mipChain; // 55
    uint8_t samplesCount; // 56
    uint8_t unk57[0x88 - 0x57]; // 57
    Handle<IDynamicTextureGenerator> generator; // 88
    uint8_t unk98[0xA8 - 0x98]; // 98
#endif
};
RED4EXT_ASSERT_SIZE(DynamicTexture, 0xA8);
} // namespace RED4ext

// clang-format on
