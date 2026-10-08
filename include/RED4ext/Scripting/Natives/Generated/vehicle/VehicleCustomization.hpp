#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleAppearanceToDecalsName.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleCustomization : ent::IComponent
{
    static constexpr const char* NAME = "vehicleVehicleCustomization";
    static constexpr const char* ALIAS = "VehicleCustomizationComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    DynArray<vehicle::VehicleAppearanceToDecalsName> defaultDecalsPerAppearance; // 90
#else
    DynArray<vehicle::VehicleAppearanceToDecalsName> defaultDecalsPerAppearance; // 90
    uint8_t unkA0[0x158 - 0xA0]; // A0
#endif
};
RED4EXT_ASSERT_SIZE(VehicleCustomization, 0x158);
} // namespace vehicle
using vehicleVehicleCustomization = vehicle::VehicleCustomization;
using VehicleCustomizationComponent = vehicle::VehicleCustomization;
} // namespace RED4ext

// clang-format on
