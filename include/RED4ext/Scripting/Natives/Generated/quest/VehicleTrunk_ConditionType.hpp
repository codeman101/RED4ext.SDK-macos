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
struct VehicleTrunk_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleTrunk_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    bool playerVehicle; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(playerVehicle))];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    game::EntityReference objectRef; // 70
    uint8_t unk_A8[0xA8 - (0x70 + sizeof(objectRef))];
    bool inverted; // A8
    uint8_t unk_A9[0xA9 - (0xA8 + sizeof(inverted))];
    bool isInside; // A9
    uint8_t unk_AA[0xAA - (0xA9 + sizeof(isInside))];
    bool anyVehicle; // AA
    uint8_t unk_AB[0xAB - (0xAA + sizeof(anyVehicle))];
    bool anyObject; // AB
#else
    bool playerVehicle; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference vehicleRef; // 40
    game::EntityReference objectRef; // 78
    bool inverted; // B0
    bool isInside; // B1
    bool anyVehicle; // B2
    bool anyObject; // B3
    uint8_t unkB4[0xB8 - 0xB4]; // B4
#endif
};
RED4EXT_ASSERT_SIZE(VehicleTrunk_ConditionType, 0xB8);
} // namespace quest
using questVehicleTrunk_ConditionType = quest::VehicleTrunk_ConditionType;
} // namespace RED4ext

// clang-format on
