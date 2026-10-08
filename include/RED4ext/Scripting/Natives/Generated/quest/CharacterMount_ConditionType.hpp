#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingSlotRole.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Affiliation.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleOrigin.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterMount_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterMount_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_78[0x78 - ::RED4ext::Detail::DataSize<quest::ICharacterConditionType>];
    game::EntityReference parentRef; // 78
    uint8_t unk_B0[0xB0 - (0x78 + sizeof(parentRef))];
    bool parentIsPlayer; // B0
    uint8_t unk_B1[0xB1 - (0xB0 + sizeof(parentIsPlayer))];
    quest::MountConditionType condition; // B1
    uint8_t unk_B4[0xB4 - (0xB1 + sizeof(condition))];
    game::MountingSlotRole role; // B4
    uint8_t unk_B8[0xB8 - (0xB4 + sizeof(role))];
    quest::MountVehicleType vehicleType; // B8
    uint8_t unk_BC[0xBC - (0xB8 + sizeof(vehicleType))];
    quest::MountVehicleOrigin vehicleOrigin; // BC
    uint8_t unk_C0[0xC0 - (0xBC + sizeof(vehicleOrigin))];
    game::data::Affiliation vehicleAfiliation; // C0
    uint8_t unk_C8[0xC8 - (0xC0 + sizeof(vehicleAfiliation))];
    CString playerVehicleName; // C8
    uint8_t unk_E8[0xE8 - (0xC8 + sizeof(playerVehicleName))];
    bool usePlayersVehicle; // E8
    uint8_t unk_E9[0xE9 - (0xE8 + sizeof(usePlayersVehicle))];
    bool anyParent; // E9
    uint8_t unk_EA[0xEA - (0xE9 + sizeof(anyParent))];
    bool anyChild; // EA
    uint8_t unk_EB[0xEB - (0xEA + sizeof(anyChild))];
    bool enterAnimationFinished; // EB
#else
    game::EntityReference parentRef; // 78
    bool parentIsPlayer; // B0
    quest::MountConditionType condition; // B1
    uint8_t unkB2[0xB4 - 0xB2]; // B2
    game::MountingSlotRole role; // B4
    quest::MountVehicleType vehicleType; // B8
    quest::MountVehicleOrigin vehicleOrigin; // BC
    game::data::Affiliation vehicleAfiliation; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
    CString playerVehicleName; // C8
    bool usePlayersVehicle; // E8
    bool anyParent; // E9
    bool anyChild; // EA
    bool enterAnimationFinished; // EB
    uint8_t unkEC[0xF0 - 0xEC]; // EC
#endif
};
RED4EXT_ASSERT_SIZE(CharacterMount_ConditionType, 0xF0);
} // namespace quest
using questCharacterMount_ConditionType = quest::CharacterMount_ConditionType;
} // namespace RED4ext

// clang-format on
