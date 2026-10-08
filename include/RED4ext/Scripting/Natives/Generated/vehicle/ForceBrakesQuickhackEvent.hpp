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
struct ForceBrakesQuickhackEvent : game::ActionEvent
{
    static constexpr const char* NAME = "vehicleForceBrakesQuickhackEvent";
    static constexpr const char* ALIAS = "VehicleForceBrakesQuickhackEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_68[0x68 - ::RED4ext::Detail::DataSize<game::ActionEvent>];
    float alarmDuration; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(alarmDuration))];
    bool active; // 6C
#else
    float alarmDuration; // 68
    bool active; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
#endif
};
RED4EXT_ASSERT_SIZE(ForceBrakesQuickhackEvent, 0x70);
} // namespace vehicle
using vehicleForceBrakesQuickhackEvent = vehicle::ForceBrakesQuickhackEvent;
using VehicleForceBrakesQuickhackEvent = vehicle::ForceBrakesQuickhackEvent;
} // namespace RED4ext

// clang-format on
