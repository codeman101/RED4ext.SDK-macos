#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct StartedMountingEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStartedMountingEvent";
    static constexpr const char* ALIAS = "VehicleStartedMountingEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName slotID; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(slotID))];
    CName animationSlotName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(animationSlotName))];
    bool isMounting; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(isMounting))];
    WeakHandle<game::Object> character; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(character))];
    bool instant; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(instant))];
    bool silent; // 69
#else
    CName slotID; // 40
    CName animationSlotName; // 48
    bool isMounting; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    WeakHandle<game::Object> character; // 58
    bool instant; // 68
    bool silent; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
#endif
};
RED4EXT_ASSERT_SIZE(StartedMountingEvent, 0x70);
} // namespace vehicle
using vehicleStartedMountingEvent = vehicle::StartedMountingEvent;
using VehicleStartedMountingEvent = vehicle::StartedMountingEvent;
} // namespace RED4ext

// clang-format on
