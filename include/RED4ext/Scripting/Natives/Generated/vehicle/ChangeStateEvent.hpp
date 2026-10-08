#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EState.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ChangeStateEvent : red::Event
{
    static constexpr const char* NAME = "vehicleChangeStateEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    vehicle::EState newState; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(newState))];
    vehicle::EState oldState; // 44
#else
    vehicle::EState newState; // 40
    vehicle::EState oldState; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ChangeStateEvent, 0x50);
} // namespace vehicle
using vehicleChangeStateEvent = vehicle::ChangeStateEvent;
} // namespace RED4ext

// clang-format on
