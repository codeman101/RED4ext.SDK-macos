#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace vehicle
{
struct Controller : game::Component
{
    static constexpr const char* NAME = "vehicleController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_A8[0xA8 - ::RED4ext::Detail::DataSize<game::Component>];
    CName alarmCurve; // A8
    uint8_t unk_B0[0xB0 - (0xA8 + sizeof(alarmCurve))];
    float alarmTime; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(alarmTime))];
    bool overrideHeadlightsSettingsForPlayer; // B4
#else
    CName alarmCurve; // A8
    float alarmTime; // B0
    bool overrideHeadlightsSettingsForPlayer; // B4
    uint8_t unkB5[0xD8 - 0xB5]; // B5
#endif
};
RED4EXT_ASSERT_SIZE(Controller, 0xD8);
} // namespace vehicle
using vehicleController = vehicle::Controller;
} // namespace RED4ext

// clang-format on
