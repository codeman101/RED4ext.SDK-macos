#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAreaLightShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightShadowSoftnessMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightUnit.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ContactShadowReciever.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EPathTracingLightUsage.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RayTracedShadowsPlatform.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace world
{
struct StaticLightNode : world::Node
{
    static constexpr const char* NAME = "worldStaticLightNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    Color color; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(color))];
    float temperature; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(temperature))];
    float radius; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(radius))];
    ELightUnit unit; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(unit))];
    float intensity; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(intensity))];
    float EV; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(EV))];
    ELightType type; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(type))];
    uint8_t scaleGI; // 54
    uint8_t unk_55[0x55 - (0x54 + sizeof(scaleGI))];
    uint8_t scaleEnvProbes; // 55
    uint8_t unk_56[0x56 - (0x55 + sizeof(scaleEnvProbes))];
    uint8_t sceneSpecularScale; // 56
    uint8_t unk_57[0x57 - (0x56 + sizeof(sceneSpecularScale))];
    uint8_t scaleVolFog; // 57
    uint8_t unk_58[0x58 - (0x57 + sizeof(scaleVolFog))];
    int8_t roughnessBias; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(roughnessBias))];
    bool useInTransparents; // 59
    uint8_t unk_5A[0x5A - (0x59 + sizeof(useInTransparents))];
    bool useInParticles; // 5A
    uint8_t unk_5B[0x5B - (0x5A + sizeof(useInParticles))];
    bool sceneDiffuse; // 5B
    uint8_t unk_5C[0x5C - (0x5B + sizeof(sceneDiffuse))];
    bool directional; // 5C
    uint8_t unk_5D[0x5D - (0x5C + sizeof(directional))];
    bool clampAttenuation; // 5D
    uint8_t unk_5E[0x5E - (0x5D + sizeof(clampAttenuation))];
    rend::LightChannel lightChannel; // 5E
    uint8_t unk_60[0x60 - (0x5E + sizeof(lightChannel))];
    rend::LightGroup group; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(group))];
    rend::LightAttenuation attenuation; // 61
    uint8_t unk_62[0x62 - (0x61 + sizeof(attenuation))];
    bool enableLocalShadows; // 62
    uint8_t unk_63[0x63 - (0x62 + sizeof(enableLocalShadows))];
    bool enableLocalShadowsForceStaticsOnly; // 63
    uint8_t unk_64[0x64 - (0x63 + sizeof(enableLocalShadowsForceStaticsOnly))];
    rend::ContactShadowReciever contactShadows; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(contactShadows))];
    float shadowFadeDistance; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(shadowFadeDistance))];
    float shadowFadeRange; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(shadowFadeRange))];
    ELightShadowSoftnessMode shadowSoftnessMode; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(shadowSoftnessMode))];
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(rayTracedShadowsPlatform))];
    float rayTracingLightSourceRadius; // 78
    uint8_t unk_7C[0x7C - (0x78 + sizeof(rayTracingLightSourceRadius))];
    float rayTracingContactShadowRange; // 7C
    uint8_t unk_80[0x80 - (0x7C + sizeof(rayTracingContactShadowRange))];
    rend::SLightFlickering flicker; // 80
    uint8_t unk_8C[0x8C - (0x80 + sizeof(flicker))];
    EEnvColorGroup envColorGroup; // 8C
    uint8_t unk_8D[0x8D - (0x8C + sizeof(envColorGroup))];
    uint8_t colorGroupSaturation; // 8D
    uint8_t unk_8E[0x8E - (0x8D + sizeof(colorGroupSaturation))];
    uint8_t portalAngleCutoff; // 8E
    uint8_t unk_8F[0x8F - (0x8E + sizeof(portalAngleCutoff))];
    bool allowDistantLight; // 8F
    uint8_t unk_90[0x90 - (0x8F + sizeof(allowDistantLight))];
    rend::EPathTracingLightUsage pathTracingLightUsage; // 90
    uint8_t unk_91[0x91 - (0x90 + sizeof(pathTracingLightUsage))];
    bool pathTracingOverrideScaleGI; // 91
    uint8_t unk_94[0x94 - (0x91 + sizeof(pathTracingOverrideScaleGI))];
    float rayTracingIntensityScale; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(rayTracingIntensityScale))];
    float rtxdiShadowStartingDistance; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(rtxdiShadowStartingDistance))];
    float innerAngle; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(innerAngle))];
    float outerAngle; // A0
    uint8_t unk_A4[0xA4 - (0xA0 + sizeof(outerAngle))];
    float shadowAngle; // A4
    uint8_t unk_A8[0xA8 - (0xA4 + sizeof(shadowAngle))];
    float shadowRadius; // A8
    uint8_t unk_AC[0xAC - (0xA8 + sizeof(shadowRadius))];
    float softness; // AC
    uint8_t unk_B0[0xB0 - (0xAC + sizeof(softness))];
    EAreaLightShape areaShape; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(areaShape))];
    bool areaTwoSided; // B4
    uint8_t unk_B5[0xB5 - (0xB4 + sizeof(areaTwoSided))];
    bool spotCapsule; // B5
    uint8_t unk_B8[0xB8 - (0xB5 + sizeof(spotCapsule))];
    float sourceRadius; // B8
    uint8_t unk_BC[0xBC - (0xB8 + sizeof(sourceRadius))];
    float capsuleLength; // BC
    uint8_t unk_C0[0xC0 - (0xBC + sizeof(capsuleLength))];
    float areaRectSideA; // C0
    uint8_t unk_C4[0xC4 - (0xC0 + sizeof(areaRectSideA))];
    float areaRectSideB; // C4
    uint8_t unk_C8[0xC8 - (0xC4 + sizeof(areaRectSideB))];
    RaRef<CIESDataResource> iesProfile; // C8
    uint8_t unk_D0[0xD0 - (0xC8 + sizeof(iesProfile))];
    float autoHideDistance; // D0
#else
    Color color; // 38
    float temperature; // 3C
    float radius; // 40
    ELightUnit unit; // 44
    float intensity; // 48
    float EV; // 4C
    ELightType type; // 50
    uint8_t scaleGI; // 54
    uint8_t scaleEnvProbes; // 55
    uint8_t sceneSpecularScale; // 56
    uint8_t scaleVolFog; // 57
    int8_t roughnessBias; // 58
    bool useInTransparents; // 59
    bool useInParticles; // 5A
    bool sceneDiffuse; // 5B
    bool directional; // 5C
    bool clampAttenuation; // 5D
    rend::LightChannel lightChannel; // 5E
    rend::LightGroup group; // 60
    rend::LightAttenuation attenuation; // 61
    bool enableLocalShadows; // 62
    bool enableLocalShadowsForceStaticsOnly; // 63
    rend::ContactShadowReciever contactShadows; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    float shadowFadeDistance; // 68
    float shadowFadeRange; // 6C
    ELightShadowSoftnessMode shadowSoftnessMode; // 70
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    float rayTracingLightSourceRadius; // 78
    float rayTracingContactShadowRange; // 7C
    rend::SLightFlickering flicker; // 80
    EEnvColorGroup envColorGroup; // 8C
    uint8_t colorGroupSaturation; // 8D
    uint8_t portalAngleCutoff; // 8E
    bool allowDistantLight; // 8F
    rend::EPathTracingLightUsage pathTracingLightUsage; // 90
    bool pathTracingOverrideScaleGI; // 91
    uint8_t unk92[0x94 - 0x92]; // 92
    float rayTracingIntensityScale; // 94
    float rtxdiShadowStartingDistance; // 98
    float innerAngle; // 9C
    float outerAngle; // A0
    float shadowAngle; // A4
    float shadowRadius; // A8
    float softness; // AC
    EAreaLightShape areaShape; // B0
    bool areaTwoSided; // B4
    bool spotCapsule; // B5
    uint8_t unkB6[0xB8 - 0xB6]; // B6
    float sourceRadius; // B8
    float capsuleLength; // BC
    float areaRectSideA; // C0
    float areaRectSideB; // C4
    RaRef<CIESDataResource> iesProfile; // C8
    float autoHideDistance; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
#endif
};
RED4EXT_ASSERT_SIZE(StaticLightNode, 0xD8);
} // namespace world
using worldStaticLightNode = world::StaticLightNode;
} // namespace RED4ext

// clang-format on
