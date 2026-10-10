#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsNeighborMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsReflectionProbeAmbientContributionMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>

namespace RED4ext
{
struct CReflectionProbeDataResource;

namespace ent
{
struct __declspec(align(0x10)) EnvProbeComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entEnvProbeComponent";
    static constexpr const char* ALIAS = "EnvProbeComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_150[0x150 - ::RED4ext::Detail::DataSize<ent::IVisualComponent>];
    RaRef<CReflectionProbeDataResource> probeDataRef; // 150
    uint8_t unk_158[0x158 - (0x150 + sizeof(probeDataRef))];
    Vector3 size; // 158
    uint8_t unk_164[0x164 - (0x158 + sizeof(size))];
    Vector3 edgeScale; // 164
    uint8_t unk_170[0x170 - (0x164 + sizeof(edgeScale))];
    float emissiveScale; // 170
    uint8_t unk_174[0x174 - (0x170 + sizeof(emissiveScale))];
    float streamingDistance; // 174
    uint8_t unk_178[0x178 - (0x174 + sizeof(streamingDistance))];
    float streamingHeight; // 178
    uint8_t unk_17E[0x17E - (0x178 + sizeof(streamingHeight))];
    bool globalProbe; // 17E
    uint8_t unk_17F[0x17F - (0x17E + sizeof(globalProbe))];
    env::UtilsReflectionProbeAmbientContributionMode ambientMode; // 17F
    uint8_t unk_180[0x180 - (0x17F + sizeof(ambientMode))];
    bool allInShadow; // 180
    uint8_t unk_181[0x181 - (0x180 + sizeof(allInShadow))];
    bool hideSkyColor; // 181
    uint8_t unk_182[0x182 - (0x181 + sizeof(hideSkyColor))];
    bool boxProjection; // 182
    uint8_t unk_183[0x183 - (0x182 + sizeof(boxProjection))];
    uint8_t brightnessEVClamp; // 183
    uint8_t unk_184[0x184 - (0x183 + sizeof(brightnessEVClamp))];
    uint8_t priority; // 184
    uint8_t unk_185[0x185 - (0x184 + sizeof(priority))];
    uint8_t blendRange; // 185
    uint8_t unk_186[0x186 - (0x185 + sizeof(blendRange))];
    rend::LightChannel lightChannels; // 186
    uint8_t unk_188[0x188 - (0x186 + sizeof(lightChannels))];
    rend::LightChannel volumeChannels; // 188
    uint8_t unk_18A[0x18A - (0x188 + sizeof(volumeChannels))];
    env::UtilsNeighborMode neighborMode; // 18A
#else
    uint8_t unk140[0x150 - 0x140]; // 140
    RaRef<CReflectionProbeDataResource> probeDataRef; // 150
    Vector3 size; // 158
    Vector3 edgeScale; // 164
    float emissiveScale; // 170
    float streamingDistance; // 174
    float streamingHeight; // 178
    uint8_t unk17C[0x17E - 0x17C]; // 17C
    bool globalProbe; // 17E
    env::UtilsReflectionProbeAmbientContributionMode ambientMode; // 17F
    bool allInShadow; // 180
    bool hideSkyColor; // 181
    bool boxProjection; // 182
    uint8_t brightnessEVClamp; // 183
    uint8_t priority; // 184
    uint8_t blendRange; // 185
    rend::LightChannel lightChannels; // 186
    rend::LightChannel volumeChannels; // 188
    env::UtilsNeighborMode neighborMode; // 18A
    uint8_t unk18B[0x190 - 0x18B]; // 18B
#endif
};
RED4EXT_ASSERT_SIZE(EnvProbeComponent, 0x190);
} // namespace ent
using entEnvProbeComponent = ent::EnvProbeComponent;
using EnvProbeComponent = ent::EnvProbeComponent;
} // namespace RED4ext

// clang-format on
