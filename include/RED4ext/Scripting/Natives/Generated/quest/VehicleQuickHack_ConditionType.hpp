#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleQuickHack_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleQuickHack_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    bool checkAccelerate; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(checkAccelerate))];
    bool checkForceBrakes; // 71
    uint8_t unk_72[0x72 - (0x71 + sizeof(checkForceBrakes))];
    bool checkRemoteControl; // 72
#else
    game::EntityReference vehicleRef; // 38
    bool checkAccelerate; // 70
    bool checkForceBrakes; // 71
    bool checkRemoteControl; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
#endif
};
RED4EXT_ASSERT_SIZE(VehicleQuickHack_ConditionType, 0x78);
} // namespace quest
using questVehicleQuickHack_ConditionType = quest::VehicleQuickHack_ConditionType;
} // namespace RED4ext

// clang-format on
