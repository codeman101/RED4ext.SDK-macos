#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct RadioStationChanged : red::Event
{
    static constexpr const char* NAME = "vehicleRadioStationChanged";
    static constexpr const char* ALIAS = "VehicleRadioStationChanged";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool isActive; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(isActive))];
    uint32_t radioIndex; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(radioIndex))];
    CName radioStationName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(radioStationName))];
    CName radioSongName; // 50
#else
    bool isActive; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    uint32_t radioIndex; // 44
    CName radioStationName; // 48
    CName radioSongName; // 50
#endif
};
RED4EXT_ASSERT_SIZE(RadioStationChanged, 0x58);
} // namespace vehicle
using vehicleRadioStationChanged = vehicle::RadioStationChanged;
using VehicleRadioStationChanged = vehicle::RadioStationChanged;
} // namespace RED4ext

// clang-format on
