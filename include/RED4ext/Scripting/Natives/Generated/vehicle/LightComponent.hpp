#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LightComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ELightType.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) LightComponent : game::LightComponent
{
    static constexpr const char* NAME = "vehicleLightComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_300[0x300 - ::RED4ext::Detail::DataSize<game::LightComponent>];
    vehicle::ELightType lightType; // 300
    uint8_t unk_304[0x304 - (0x300 + sizeof(lightType))];
    float highBeamPitchAngle; // 304
    uint8_t unk_308[0x308 - (0x304 + sizeof(highBeamPitchAngle))];
    float highBeamRadiusMultiplier; // 308
    uint8_t unk_30C[0x30C - (0x308 + sizeof(highBeamRadiusMultiplier))];
    float highBeamConeMultiplier; // 30C
    uint8_t unk_310[0x310 - (0x30C + sizeof(highBeamConeMultiplier))];
    Color emissiveColor; // 310
    uint8_t unk_314[0x314 - (0x310 + sizeof(emissiveColor))];
    bool allowSeparateEmissiveColor; // 314
#else
    vehicle::ELightType lightType; // 310
    float highBeamPitchAngle; // 314
    float highBeamRadiusMultiplier; // 318
    float highBeamConeMultiplier; // 31C
    Color emissiveColor; // 320
    bool allowSeparateEmissiveColor; // 324
    uint8_t unk325[0x350 - 0x325]; // 325
#endif
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x350);
} // namespace vehicle
using vehicleLightComponent = vehicle::LightComponent;
} // namespace RED4ext

// clang-format on
