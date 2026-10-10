#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionEvent.hpp>

namespace RED4ext
{
namespace vehicle
{
struct RemoteControlEvent : game::ActionEvent
{
    static constexpr const char* NAME = "vehicleRemoteControlEvent";
    static constexpr const char* ALIAS = "VehicleRemoteControlEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<game::ActionEvent>];
    bool remoteControl; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(remoteControl))];
    bool shouldUnseatPassengers; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(shouldUnseatPassengers))];
    bool shouldModifyInteractionState; // 6A
    uint8_t unk_6B[0x6B - (0x6A + sizeof(shouldModifyInteractionState))];
    bool isDistanceDisconnect; // 6B
#else
    bool remoteControl; // 68
    bool shouldUnseatPassengers; // 69
    bool shouldModifyInteractionState; // 6A
    bool isDistanceDisconnect; // 6B
    uint8_t unk6C[0x70 - 0x6C]; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(RemoteControlEvent, 0x70);
} // namespace vehicle
using vehicleRemoteControlEvent = vehicle::RemoteControlEvent;
using VehicleRemoteControlEvent = vehicle::RemoteControlEvent;
} // namespace RED4ext

// clang-format on
