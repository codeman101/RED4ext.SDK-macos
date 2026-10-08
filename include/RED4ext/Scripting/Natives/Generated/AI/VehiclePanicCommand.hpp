#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct VehiclePanicCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehiclePanicCommand";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_62[0x62 - ::RED4ext::Detail::DataSize<AI::VehicleCommand>];
    bool allowSimplifiedMovement; // 62
    uint8_t unk_63[0x63 - (0x62 + sizeof(allowSimplifiedMovement))];
    bool ignoreTickets; // 63
    uint8_t unk_64[0x64 - (0x63 + sizeof(ignoreTickets))];
    bool disableStuckDetection; // 64
    uint8_t unk_65[0x65 - (0x64 + sizeof(disableStuckDetection))];
    bool useSpeedBasedLookupRange; // 65
    uint8_t unk_66[0x66 - (0x65 + sizeof(useSpeedBasedLookupRange))];
    bool tryDriveAwayFromPlayer; // 66
#else
    bool allowSimplifiedMovement; // 68
    bool ignoreTickets; // 69
    bool disableStuckDetection; // 6A
    bool useSpeedBasedLookupRange; // 6B
    bool tryDriveAwayFromPlayer; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
#endif
};
RED4EXT_ASSERT_SIZE(VehiclePanicCommand, 0x70);
} // namespace AI
using AIVehiclePanicCommand = AI::VehiclePanicCommand;
} // namespace RED4ext

// clang-format on
