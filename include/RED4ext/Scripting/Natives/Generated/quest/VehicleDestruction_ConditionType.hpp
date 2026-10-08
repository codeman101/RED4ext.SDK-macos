#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleDestruction_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleDestruction_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IVehicleConditionType>];
    game::EntityReference vehicleRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(vehicleRef))];
    float destruction; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(destruction))];
    EComparisonType comparisonType; // 74
#else
    game::EntityReference vehicleRef; // 38
    float destruction; // 70
    EComparisonType comparisonType; // 74
#endif
};
RED4EXT_ASSERT_SIZE(VehicleDestruction_ConditionType, 0x78);
} // namespace quest
using questVehicleDestruction_ConditionType = quest::VehicleDestruction_ConditionType;
} // namespace RED4ext

// clang-format on
