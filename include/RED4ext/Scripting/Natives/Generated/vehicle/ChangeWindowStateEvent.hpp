#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EQuestVehicleWindowState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleDoor.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ChangeWindowStateEvent : red::Event
{
    static constexpr const char* NAME = "vehicleChangeWindowStateEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    vehicle::EQuestVehicleWindowState state; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(state))];
    vehicle::EVehicleDoor door; // 44
#else
    vehicle::EQuestVehicleWindowState state; // 40
    vehicle::EVehicleDoor door; // 44
#endif
};
RED4EXT_ASSERT_SIZE(ChangeWindowStateEvent, 0x48);
} // namespace vehicle
using vehicleChangeWindowStateEvent = vehicle::ChangeWindowStateEvent;
} // namespace RED4ext

// clang-format on
