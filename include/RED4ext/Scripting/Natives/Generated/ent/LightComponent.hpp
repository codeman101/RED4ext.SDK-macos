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
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ContactShadowReciever.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EPathTracingLightUsage.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RayTracedShadowsPlatform.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace ent
{
struct __declspec(align(0x10)) LightComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entLightComponent";
    static constexpr const char* ALIAS = "LightComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_140[0x140 - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    Color color; // 140
    uint8_t unk_144[0x144 - (0x140 + sizeof(color))];
    float temperature; // 144
    uint8_t unk_148[0x148 - (0x144 + sizeof(temperature))];
    float radius; // 148
    uint8_t unk_14C[0x14C - (0x148 + sizeof(radius))];
    ELightUnit unit; // 14C
    uint8_t unk_150[0x150 - (0x14C + sizeof(unit))];
    float intensity; // 150
    uint8_t unk_154[0x154 - (0x150 + sizeof(intensity))];
    float EV; // 154
    uint8_t unk_158[0x158 - (0x154 + sizeof(EV))];
    ELightType type; // 158
    uint8_t unk_15C[0x15C - (0x158 + sizeof(type))];
    uint8_t scaleGI; // 15C
    uint8_t unk_15D[0x15D - (0x15C + sizeof(scaleGI))];
    uint8_t scaleEnvProbes; // 15D
    uint8_t unk_15E[0x15E - (0x15D + sizeof(scaleEnvProbes))];
    uint8_t sceneSpecularScale; // 15E
    uint8_t unk_15F[0x15F - (0x15E + sizeof(sceneSpecularScale))];
    uint8_t scaleVolFog; // 15F
    uint8_t unk_160[0x160 - (0x15F + sizeof(scaleVolFog))];
    int8_t roughnessBias; // 160
    uint8_t unk_161[0x161 - (0x160 + sizeof(roughnessBias))];
    bool useInTransparents; // 161
    uint8_t unk_162[0x162 - (0x161 + sizeof(useInTransparents))];
    bool useInParticles; // 162
    uint8_t unk_163[0x163 - (0x162 + sizeof(useInParticles))];
    bool sceneDiffuse; // 163
    uint8_t unk_164[0x164 - (0x163 + sizeof(sceneDiffuse))];
    bool directional; // 164
    uint8_t unk_165[0x165 - (0x164 + sizeof(directional))];
    bool clampAttenuation; // 165
    uint8_t unk_166[0x166 - (0x165 + sizeof(clampAttenuation))];
    rend::LightChannel lightChannel; // 166
    uint8_t unk_168[0x168 - (0x166 + sizeof(lightChannel))];
    rend::LightGroup group; // 168
    uint8_t unk_169[0x169 - (0x168 + sizeof(group))];
    rend::LightAttenuation attenuation; // 169
    uint8_t unk_16A[0x16A - (0x169 + sizeof(attenuation))];
    bool enableLocalShadows; // 16A
    uint8_t unk_16B[0x16B - (0x16A + sizeof(enableLocalShadows))];
    bool enableLocalShadowsForceStaticsOnly; // 16B
    uint8_t unk_16C[0x16C - (0x16B + sizeof(enableLocalShadowsForceStaticsOnly))];
    rend::ContactShadowReciever contactShadows; // 16C
    uint8_t unk_170[0x170 - (0x16C + sizeof(contactShadows))];
    float shadowFadeDistance; // 170
    uint8_t unk_174[0x174 - (0x170 + sizeof(shadowFadeDistance))];
    float shadowFadeRange; // 174
    uint8_t unk_178[0x178 - (0x174 + sizeof(shadowFadeRange))];
    ELightShadowSoftnessMode shadowSoftnessMode; // 178
    uint8_t unk_17C[0x17C - (0x178 + sizeof(shadowSoftnessMode))];
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 17C
    uint8_t unk_180[0x180 - (0x17C + sizeof(rayTracedShadowsPlatform))];
    float rayTracingLightSourceRadius; // 180
    uint8_t unk_184[0x184 - (0x180 + sizeof(rayTracingLightSourceRadius))];
    float rayTracingContactShadowRange; // 184
    uint8_t unk_188[0x188 - (0x184 + sizeof(rayTracingContactShadowRange))];
    rend::SLightFlickering flicker; // 188
    uint8_t unk_194[0x194 - (0x188 + sizeof(flicker))];
    EEnvColorGroup envColorGroup; // 194
    uint8_t unk_195[0x195 - (0x194 + sizeof(envColorGroup))];
    uint8_t colorGroupSaturation; // 195
    uint8_t unk_196[0x196 - (0x195 + sizeof(colorGroupSaturation))];
    uint8_t portalAngleCutoff; // 196
    uint8_t unk_197[0x197 - (0x196 + sizeof(portalAngleCutoff))];
    bool allowDistantLight; // 197
    uint8_t unk_198[0x198 - (0x197 + sizeof(allowDistantLight))];
    rend::EPathTracingLightUsage pathTracingLightUsage; // 198
    uint8_t unk_199[0x199 - (0x198 + sizeof(pathTracingLightUsage))];
    bool pathTracingOverrideScaleGI; // 199
    uint8_t unk_19C[0x19C - (0x199 + sizeof(pathTracingOverrideScaleGI))];
    float rayTracingIntensityScale; // 19C
    uint8_t unk_1A0[0x1A0 - (0x19C + sizeof(rayTracingIntensityScale))];
    float rtxdiShadowStartingDistance; // 1A0
    uint8_t unk_1A4[0x1A4 - (0x1A0 + sizeof(rtxdiShadowStartingDistance))];
    float innerAngle; // 1A4
    uint8_t unk_1A8[0x1A8 - (0x1A4 + sizeof(innerAngle))];
    float outerAngle; // 1A8
    uint8_t unk_1AC[0x1AC - (0x1A8 + sizeof(outerAngle))];
    float shadowAngle; // 1AC
    uint8_t unk_1B0[0x1B0 - (0x1AC + sizeof(shadowAngle))];
    float shadowRadius; // 1B0
    uint8_t unk_1B4[0x1B4 - (0x1B0 + sizeof(shadowRadius))];
    float softness; // 1B4
    uint8_t unk_1B8[0x1B8 - (0x1B4 + sizeof(softness))];
    EAreaLightShape areaShape; // 1B8
    uint8_t unk_1BC[0x1BC - (0x1B8 + sizeof(areaShape))];
    bool areaTwoSided; // 1BC
    uint8_t unk_1BD[0x1BD - (0x1BC + sizeof(areaTwoSided))];
    bool spotCapsule; // 1BD
    uint8_t unk_1C0[0x1C0 - (0x1BD + sizeof(spotCapsule))];
    float sourceRadius; // 1C0
    uint8_t unk_1C4[0x1C4 - (0x1C0 + sizeof(sourceRadius))];
    float capsuleLength; // 1C4
    uint8_t unk_1C8[0x1C8 - (0x1C4 + sizeof(capsuleLength))];
    float areaRectSideA; // 1C8
    uint8_t unk_1CC[0x1CC - (0x1C8 + sizeof(areaRectSideA))];
    float areaRectSideB; // 1CC
    uint8_t unk_1D0[0x1D0 - (0x1CC + sizeof(areaRectSideB))];
    RaRef<CIESDataResource> iesProfile; // 1D0
#else
    Color color; // 140
    float temperature; // 144
    float radius; // 148
    ELightUnit unit; // 14C
    float intensity; // 150
    float EV; // 154
    ELightType type; // 158
    uint8_t scaleGI; // 15C
    uint8_t scaleEnvProbes; // 15D
    uint8_t sceneSpecularScale; // 15E
    uint8_t scaleVolFog; // 15F
    int8_t roughnessBias; // 160
    bool useInTransparents; // 161
    bool useInParticles; // 162
    bool sceneDiffuse; // 163
    bool directional; // 164
    bool clampAttenuation; // 165
    rend::LightChannel lightChannel; // 166
    rend::LightGroup group; // 168
    rend::LightAttenuation attenuation; // 169
    bool enableLocalShadows; // 16A
    bool enableLocalShadowsForceStaticsOnly; // 16B
    rend::ContactShadowReciever contactShadows; // 16C
    uint8_t unk16D[0x170 - 0x16D]; // 16D
    float shadowFadeDistance; // 170
    float shadowFadeRange; // 174
    ELightShadowSoftnessMode shadowSoftnessMode; // 178
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 17C
    uint8_t unk17D[0x180 - 0x17D]; // 17D
    float rayTracingLightSourceRadius; // 180
    float rayTracingContactShadowRange; // 184
    rend::SLightFlickering flicker; // 188
    EEnvColorGroup envColorGroup; // 194
    uint8_t colorGroupSaturation; // 195
    uint8_t portalAngleCutoff; // 196
    bool allowDistantLight; // 197
    rend::EPathTracingLightUsage pathTracingLightUsage; // 198
    bool pathTracingOverrideScaleGI; // 199
    uint8_t unk19A[0x19C - 0x19A]; // 19A
    float rayTracingIntensityScale; // 19C
    float rtxdiShadowStartingDistance; // 1A0
    float innerAngle; // 1A4
    float outerAngle; // 1A8
    float shadowAngle; // 1AC
    float shadowRadius; // 1B0
    float softness; // 1B4
    EAreaLightShape areaShape; // 1B8
    bool areaTwoSided; // 1BC
    bool spotCapsule; // 1BD
    uint8_t unk1BE[0x1C0 - 0x1BE]; // 1BE
    float sourceRadius; // 1C0
    float capsuleLength; // 1C4
    float areaRectSideA; // 1C8
    float areaRectSideB; // 1CC
    RaRef<CIESDataResource> iesProfile; // 1D0
    uint8_t unk1D8[0x200 - 0x1D8]; // 1D8
#endif
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x200);
} // namespace ent
using entLightComponent = ent::LightComponent;
using LightComponent = ent::LightComponent;
} // namespace RED4ext

// clang-format on
