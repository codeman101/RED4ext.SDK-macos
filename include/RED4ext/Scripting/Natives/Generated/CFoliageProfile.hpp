#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CGradient;

struct CFoliageProfile : CResource
{
    static constexpr const char* NAME = "CFoliageProfile";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CResource>];
    float cutoffAlphaMinMip; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(cutoffAlphaMinMip))];
    float cutoffAlphaMaxMip; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(cutoffAlphaMaxMip))];
    float billboardCutoffAlpha; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(billboardCutoffAlpha))];
    float aoScale; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(aoScale))];
    float terrainBlendScale; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(terrainBlendScale))];
    float terrainBlendBias; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(terrainBlendBias))];
    float billboardDepthScale; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(billboardDepthScale))];
    float preserveOriginalColor; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(preserveOriginalColor))];
    float billboardRoughnessBias; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(billboardRoughnessBias))];
    Ref<CGradient> colorGradient; // 60
    uint8_t unk_78[0x78 - (0x60 + sizeof(colorGradient))];
    float colorGradientWeight; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(colorGradientWeight))];
    float colorGradientDarkenWeight; // 7C
#else
    float cutoffAlphaMinMip; // 40
    float cutoffAlphaMaxMip; // 44
    float billboardCutoffAlpha; // 48
    float aoScale; // 4C
    float terrainBlendScale; // 50
    float terrainBlendBias; // 54
    float billboardDepthScale; // 58
    float preserveOriginalColor; // 5C
    float billboardRoughnessBias; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    Ref<CGradient> colorGradient; // 68
    float colorGradientWeight; // 80
    float colorGradientDarkenWeight; // 84
    uint8_t unk88[0x98 - 0x88]; // 88
#endif
};
RED4EXT_ASSERT_SIZE(CFoliageProfile, 0x98);
} // namespace RED4ext

// clang-format on
