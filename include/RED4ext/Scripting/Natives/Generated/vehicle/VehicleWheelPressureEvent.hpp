#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleWheelPressureEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleWheelPressureEvent";
    static constexpr const char* ALIAS = "VehicleWheelPressureEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Vector3 contactPoint; // 40
    uint8_t unk_4C[0x4C - (0x40 + sizeof(contactPoint))];
    Vector3 impulse; // 4C
#else
    Vector3 contactPoint; // 40
    Vector3 impulse; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(VehicleWheelPressureEvent, 0x58);
} // namespace vehicle
using vehicleVehicleWheelPressureEvent = vehicle::VehicleWheelPressureEvent;
using VehicleWheelPressureEvent = vehicle::VehicleWheelPressureEvent;
} // namespace RED4ext

// clang-format on
