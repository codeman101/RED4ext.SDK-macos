#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct FlippedOverEvent : red::Event
{
    static constexpr const char* NAME = "vehicleFlippedOverEvent";
    static constexpr const char* ALIAS = "VehicleFlippedOverEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool isFlippedOver; // 40
#else
    bool isFlippedOver; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(FlippedOverEvent, 0x48);
} // namespace vehicle
using vehicleFlippedOverEvent = vehicle::FlippedOverEvent;
using VehicleFlippedOverEvent = vehicle::FlippedOverEvent;
} // namespace RED4ext

// clang-format on
