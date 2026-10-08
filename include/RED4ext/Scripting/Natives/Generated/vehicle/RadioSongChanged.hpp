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
struct RadioSongChanged : red::Event
{
    static constexpr const char* NAME = "vehicleRadioSongChanged";
    static constexpr const char* ALIAS = "VehicleRadioSongChanged";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName radioSongName; // 40
#else
    CName radioSongName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(RadioSongChanged, 0x48);
} // namespace vehicle
using vehicleRadioSongChanged = vehicle::RadioSongChanged;
using VehicleRadioSongChanged = vehicle::RadioSongChanged;
} // namespace RED4ext

// clang-format on
