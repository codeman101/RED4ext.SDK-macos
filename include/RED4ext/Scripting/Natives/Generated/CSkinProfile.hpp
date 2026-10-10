#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
struct CSkinProfile : CResource
{
    static constexpr const char* NAME = "CSkinProfile";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CResource>];
    float blurSize; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(blurSize))];
    Color diffuse; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(diffuse))];
    Color falloff; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(falloff))];
    float roughness0; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(roughness0))];
    float roughness1; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(roughness1))];
    float lobeMix; // 50
#else
    float blurSize; // 40
    Color diffuse; // 44
    Color falloff; // 48
    float roughness0; // 4C
    float roughness1; // 50
    float lobeMix; // 54
    uint8_t unk58[0x68 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(CSkinProfile, 0x68);
} // namespace RED4ext

// clang-format on
