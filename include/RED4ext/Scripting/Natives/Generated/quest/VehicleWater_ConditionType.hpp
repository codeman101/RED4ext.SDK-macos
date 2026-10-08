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
struct VehicleWater_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleWater_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    bool anyVehicle; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(anyVehicle))];
    bool submergedOnly; // 71
    uint8_t unk_72[0x72 - (0x71 + sizeof(submergedOnly))];
    bool onEnter; // 72
#else
    game::EntityReference vehicleRef; // 38
    bool anyVehicle; // 70
    bool submergedOnly; // 71
    bool onEnter; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
#endif
};
RED4EXT_ASSERT_SIZE(VehicleWater_ConditionType, 0x78);
} // namespace quest
using questVehicleWater_ConditionType = quest::VehicleWater_ConditionType;
} // namespace RED4ext

// clang-format on
