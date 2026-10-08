#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleNetrunnerQuickhackType.hpp>

namespace RED4ext
{
namespace vehicle
{
struct NetrunnerQuickhackVehicleEndedEvent : red::Event
{
    static constexpr const char* NAME = "vehicleNetrunnerQuickhackVehicleEndedEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    vehicle::VehicleNetrunnerQuickhackType vehicleNetrunnerQuickhackType; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(vehicleNetrunnerQuickhackType))];
    bool shouldTriggerPanicDriving; // 44
    uint8_t unk_45[0x45 - (0x44 + sizeof(shouldTriggerPanicDriving))];
    bool shouldRejoinTraffic; // 45
#else
    vehicle::VehicleNetrunnerQuickhackType vehicleNetrunnerQuickhackType; // 40
    bool shouldTriggerPanicDriving; // 44
    bool shouldRejoinTraffic; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
#endif
};
RED4EXT_ASSERT_SIZE(NetrunnerQuickhackVehicleEndedEvent, 0x48);
} // namespace vehicle
using vehicleNetrunnerQuickhackVehicleEndedEvent = vehicle::NetrunnerQuickhackVehicleEndedEvent;
} // namespace RED4ext

// clang-format on
