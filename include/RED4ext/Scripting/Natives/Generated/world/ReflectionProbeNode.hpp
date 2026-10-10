#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsNeighborMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsReflectionProbeAmbientContributionMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CReflectionProbeDataResource;

namespace world
{
struct __declspec(align(0x10)) ReflectionProbeNode : world::Node
{
    static constexpr const char* NAME = "worldReflectionProbeNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CReflectionProbeDataResource> probeDataRef; // 38
    uint8_t unk_42[0x42 - (0x38 + sizeof(probeDataRef))];
    bool globalProbe; // 42
    uint8_t unk_43[0x43 - (0x42 + sizeof(globalProbe))];
    env::UtilsReflectionProbeAmbientContributionMode ambientMode; // 43
    uint8_t unk_44[0x44 - (0x43 + sizeof(ambientMode))];
    bool allInShadow; // 44
    uint8_t unk_45[0x45 - (0x44 + sizeof(allInShadow))];
    bool hideSkyColor; // 45
    uint8_t unk_46[0x46 - (0x45 + sizeof(hideSkyColor))];
    bool volFogAmbient; // 46
    uint8_t unk_47[0x47 - (0x46 + sizeof(volFogAmbient))];
    bool boxProjection; // 47
    uint8_t unk_48[0x48 - (0x47 + sizeof(boxProjection))];
    bool noFadeBlend; // 48
    uint8_t unk_49[0x49 - (0x48 + sizeof(noFadeBlend))];
    bool subScene; // 49
    uint8_t unk_4C[0x4C - (0x49 + sizeof(subScene))];
    Vector3 edgeScale; // 4C
    uint8_t unk_58[0x58 - (0x4C + sizeof(edgeScale))];
    Vector3 captureOffset; // 58
    uint8_t unk_70[0x70 - (0x58 + sizeof(captureOffset))];
    HDRColor simpleFogColor; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(simpleFogColor))];
    float simpleFogDensity; // 80
    uint8_t unk_84[0x84 - (0x80 + sizeof(simpleFogDensity))];
    float skyScale; // 84
    uint8_t unk_88[0x88 - (0x84 + sizeof(skyScale))];
    float emissiveScale; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(emissiveScale))];
    float reflectionDimming; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(reflectionDimming))];
    float nearClipDistance; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(nearClipDistance))];
    float farClipDistance; // 94
    uint8_t unk_98[0x98 - (0x94 + sizeof(farClipDistance))];
    float streamingHeight; // 98
    uint8_t unk_9C[0x9C - (0x98 + sizeof(streamingHeight))];
    float streamingDistance; // 9C
    uint8_t unk_A0[0xA0 - (0x9C + sizeof(streamingDistance))];
    uint8_t blendRange; // A0
    uint8_t unk_A1[0xA1 - (0xA0 + sizeof(blendRange))];
    uint8_t priority; // A1
    uint8_t unk_A2[0xA2 - (0xA1 + sizeof(priority))];
    rend::LightChannel lightChannels; // A2
    uint8_t unk_A4[0xA4 - (0xA2 + sizeof(lightChannels))];
    rend::LightChannel volumeChannels; // A4
    uint8_t unk_A6[0xA6 - (0xA4 + sizeof(volumeChannels))];
    env::UtilsNeighborMode neighborMode; // A6
    uint8_t unk_A7[0xA7 - (0xA6 + sizeof(neighborMode))];
    int8_t brightnessEVClamp; // A7
#else
    RaRef<CReflectionProbeDataResource> probeDataRef; // 38
    uint8_t unk40[0x42 - 0x40]; // 40
    bool globalProbe; // 42
    env::UtilsReflectionProbeAmbientContributionMode ambientMode; // 43
    bool allInShadow; // 44
    bool hideSkyColor; // 45
    bool volFogAmbient; // 46
    bool boxProjection; // 47
    bool noFadeBlend; // 48
    bool subScene; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    Vector3 edgeScale; // 4C
    Vector3 captureOffset; // 58
    uint8_t unk64[0x70 - 0x64]; // 64
    HDRColor simpleFogColor; // 70
    float simpleFogDensity; // 80
    float skyScale; // 84
    float emissiveScale; // 88
    float reflectionDimming; // 8C
    float nearClipDistance; // 90
    float farClipDistance; // 94
    float streamingHeight; // 98
    float streamingDistance; // 9C
    uint8_t blendRange; // A0
    uint8_t priority; // A1
    rend::LightChannel lightChannels; // A2
    rend::LightChannel volumeChannels; // A4
    env::UtilsNeighborMode neighborMode; // A6
    int8_t brightnessEVClamp; // A7
    uint8_t unkA8[0xB0 - 0xA8]; // A8
#endif
};
RED4EXT_ASSERT_SIZE(ReflectionProbeNode, 0xB0);
} // namespace world
using worldReflectionProbeNode = world::ReflectionProbeNode;
} // namespace RED4ext

// clang-format on
