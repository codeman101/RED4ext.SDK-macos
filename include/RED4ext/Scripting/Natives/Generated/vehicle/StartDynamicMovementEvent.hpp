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
struct StartDynamicMovementEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStartDynamicMovementEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    Vector3 targetPosition; // 40
#else
    Vector3 targetPosition; // 40
    uint8_t unk4C[0x60 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(StartDynamicMovementEvent, 0x60);
} // namespace vehicle
using vehicleStartDynamicMovementEvent = vehicle::StartDynamicMovementEvent;
} // namespace RED4ext

// clang-format on
