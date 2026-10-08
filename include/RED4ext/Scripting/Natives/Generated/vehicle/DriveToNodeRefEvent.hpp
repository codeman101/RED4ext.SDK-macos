#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct DriveToNodeRefEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveToNodeRefEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    NodeRef targetRef; // 40
    uint8_t unk_4C[0x4C - (0x40 + sizeof(targetRef))];
    bool useTraffic; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(useTraffic))];
    float speedInTraffic; // 50
#else
    NodeRef targetRef; // 40
    uint8_t unk48[0x4C - 0x48]; // 48
    bool useTraffic; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    float speedInTraffic; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
#endif
};
RED4EXT_ASSERT_SIZE(DriveToNodeRefEvent, 0x58);
} // namespace vehicle
using vehicleDriveToNodeRefEvent = vehicle::DriveToNodeRefEvent;
} // namespace RED4ext

// clang-format on
