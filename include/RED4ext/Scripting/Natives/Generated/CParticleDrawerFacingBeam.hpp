#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CParticleDrawerFacingBeam : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerFacingBeam";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<IParticleDrawer>];
    float texturesPerUnit; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(texturesPerUnit))];
    bool dynamicTexCoords; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(dynamicTexCoords))];
    float transparencyOffset; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(transparencyOffset))];
    float transparencyLength; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(transparencyLength))];
    uint32_t numSegments; // 44
    uint8_t unk_50[0x50 - (0x44 + sizeof(numSegments))];
    Vector4 sourceTangent; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(sourceTangent))];
    Vector4 targetTangent; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(targetTangent))];
    Vector3 debugTargetTranslation; // 70
#else
    float texturesPerUnit; // 38
    bool dynamicTexCoords; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    float transparencyOffset; // 40
    float transparencyLength; // 44
    uint32_t numSegments; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    Vector4 sourceTangent; // 50
    Vector4 targetTangent; // 60
    Vector3 debugTargetTranslation; // 70
    uint8_t unk7C[0x80 - 0x7C]; // 7C
#endif
};
RED4EXT_ASSERT_SIZE(CParticleDrawerFacingBeam, 0x80);
} // namespace RED4ext

// clang-format on
