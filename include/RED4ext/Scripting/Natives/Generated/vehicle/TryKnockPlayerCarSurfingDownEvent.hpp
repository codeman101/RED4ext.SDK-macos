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
struct TryKnockPlayerCarSurfingDownEvent : red::Event
{
    static constexpr const char* NAME = "vehicleTryKnockPlayerCarSurfingDownEvent";
    static constexpr const char* ALIAS = "VehicleTryKnockPlayerCarSurfingDownEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Vector3 impactPoint; // 40
#else
    Vector3 impactPoint; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(TryKnockPlayerCarSurfingDownEvent, 0x50);
} // namespace vehicle
using vehicleTryKnockPlayerCarSurfingDownEvent = vehicle::TryKnockPlayerCarSurfingDownEvent;
using VehicleTryKnockPlayerCarSurfingDownEvent = vehicle::TryKnockPlayerCarSurfingDownEvent;
} // namespace RED4ext

// clang-format on
