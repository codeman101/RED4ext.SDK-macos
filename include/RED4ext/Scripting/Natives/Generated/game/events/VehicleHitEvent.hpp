#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct __declspec(align(0x10)) VehicleHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsVehicleHitEvent";
    static constexpr const char* ALIAS = "gameVehicleHitEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<game::events::HitEvent>];
    Vector4 vehicleVelocity; // F0
    uint8_t unk_100[0x100 - (0xF0 + sizeof(vehicleVelocity))];
    Vector4 preyVelocity; // 100
#else
    Vector4 vehicleVelocity; // F0
    Vector4 preyVelocity; // 100
#endif
};
RED4EXT_ASSERT_SIZE(VehicleHitEvent, 0x110);
} // namespace game::events
using gameeventsVehicleHitEvent = game::events::VehicleHitEvent;
using gameVehicleHitEvent = game::events::VehicleHitEvent;
} // namespace RED4ext

// clang-format on
