#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionMoveToState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectInstanceEntryType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct __declspec(align(0x10)) ActionMoveToSmartObjectState : game::ActionMoveToState
{
    static constexpr const char* NAME = "gameActionMoveToSmartObjectState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<game::ActionMoveToState>];
    uint64_t targetHash; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(targetHash))];
    bool usePathfinding; // 48
    uint8_t unk_49[0x49 - (0x48 + sizeof(usePathfinding))];
    bool useStart; // 49
    uint8_t unk_4A[0x4A - (0x49 + sizeof(useStart))];
    bool useStop; // 4A
    uint8_t unk_4C[0x4C - (0x4A + sizeof(useStop))];
    game::SmartObjectInstanceEntryType entryType; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(entryType))];
    move::MovementType movementType; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(movementType))];
    WeakHandle<game::Object> strafingTarget; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(strafingTarget))];
    Vector3 entryDirection; // 68
    uint8_t unk_74[0x74 - (0x68 + sizeof(entryDirection))];
    Vector3 entryPointPos; // 74
    uint8_t unk_80[0x80 - (0x74 + sizeof(entryPointPos))];
    Vector4 entryPointDir; // 80
    uint8_t unk_90[0x90 - (0x80 + sizeof(entryPointDir))];
    CName animationName; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(animationName))];
    bool isInSmartObject; // 98
#else
    uint64_t targetHash; // 40
    bool usePathfinding; // 48
    bool useStart; // 49
    bool useStop; // 4A
    uint8_t unk4B[0x4C - 0x4B]; // 4B
    game::SmartObjectInstanceEntryType entryType; // 4C
    move::MovementType movementType; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    WeakHandle<game::Object> strafingTarget; // 58
    Vector3 entryDirection; // 68
    Vector3 entryPointPos; // 74
    Vector4 entryPointDir; // 80
    CName animationName; // 90
    bool isInSmartObject; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
#endif
};
RED4EXT_ASSERT_SIZE(ActionMoveToSmartObjectState, 0xA0);
} // namespace game
using gameActionMoveToSmartObjectState = game::ActionMoveToSmartObjectState;
} // namespace RED4ext

// clang-format on
