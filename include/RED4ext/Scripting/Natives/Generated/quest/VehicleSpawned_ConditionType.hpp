#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnedVehicleType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleSpawned_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleSpawned_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    EComparisonType comparisonType; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(comparisonType))];
    uint32_t count; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(count))];
    quest::SpawnedVehicleType vehicleType; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(vehicleType))];
    CString vehicleName; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(vehicleName))];
    CName vehicleGlobalName; // A0
#else
    game::EntityReference vehicleRef; // 38
    EComparisonType comparisonType; // 70
    uint32_t count; // 74
    quest::SpawnedVehicleType vehicleType; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    CString vehicleName; // 80
    CName vehicleGlobalName; // A0
#endif
};
RED4EXT_ASSERT_SIZE(VehicleSpawned_ConditionType, 0xA8);
} // namespace quest
using questVehicleSpawned_ConditionType = quest::VehicleSpawned_ConditionType;
} // namespace RED4ext

// clang-format on
