#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/MaterialLayerDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/MicroblendDef.hpp>

namespace RED4ext
{
struct CMaterialLayerLibrary : CResource
{
    static constexpr const char* NAME = "CMaterialLayerLibrary";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CResource>];
    float uvTiling; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(uvTiling))];
    float mbTiling; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(mbTiling))];
    float microblendContrast; // 44
    uint8_t unk_4C[0x4C - (0x44 + sizeof(microblendContrast))];
    uint32_t paletteColorIndex; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(paletteColorIndex))];
    DynArray<MaterialLayerDef> layers; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(layers))];
    DynArray<MicroblendDef> microblends; // 60
#else
    float uvTiling; // 40
    float mbTiling; // 44
    float microblendContrast; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    uint32_t paletteColorIndex; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    DynArray<MaterialLayerDef> layers; // 58
    DynArray<MicroblendDef> microblends; // 68
#endif
};
RED4EXT_ASSERT_SIZE(CMaterialLayerLibrary, 0x78);
} // namespace RED4ext

// clang-format on
