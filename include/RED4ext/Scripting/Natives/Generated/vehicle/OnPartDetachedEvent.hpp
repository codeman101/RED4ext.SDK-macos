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
struct OnPartDetachedEvent : red::Event
{
    static constexpr const char* NAME = "vehicleOnPartDetachedEvent";
    static constexpr const char* ALIAS = "VehicleOnPartDetachedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName partName; // 40
#else
    CName partName; // 40
#endif
};
RED4EXT_ASSERT_SIZE(OnPartDetachedEvent, 0x48);
} // namespace vehicle
using vehicleOnPartDetachedEvent = vehicle::OnPartDetachedEvent;
using VehicleOnPartDetachedEvent = vehicle::OnPartDetachedEvent;
} // namespace RED4ext

// clang-format on
