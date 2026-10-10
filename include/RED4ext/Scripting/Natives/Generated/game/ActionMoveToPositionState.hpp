#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct ActionMoveToPositionState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionMoveToPositionState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_24[0x24 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    Vector3 target; // 24
    uint8_t unk_30[0x30 - (0x24 + sizeof(target))];
    bool useSpotReservation; // 30
    uint8_t unk_31[0x31 - (0x30 + sizeof(useSpotReservation))];
    bool usePathfinding; // 31
    uint8_t unk_32[0x32 - (0x31 + sizeof(usePathfinding))];
    bool useStart; // 32
    uint8_t unk_33[0x33 - (0x32 + sizeof(useStart))];
    bool useStop; // 33
    uint8_t unk_34[0x34 - (0x33 + sizeof(useStop))];
    move::MovementType movementType; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(movementType))];
    WeakHandle<game::Object> strafingTarget; // 38
#else
    Vector3 target; // 28
    bool useSpotReservation; // 34
    bool usePathfinding; // 35
    bool useStart; // 36
    bool useStop; // 37
    move::MovementType movementType; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    WeakHandle<game::Object> strafingTarget; // 40
#endif
};
RED4EXT_ASSERT_SIZE(ActionMoveToPositionState, 0x50);
} // namespace game
using gameActionMoveToPositionState = game::ActionMoveToPositionState;
} // namespace RED4ext

// clang-format on
