#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct ActionMoveToState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionMoveToState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_24[0x24 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    Vector3 targetPos; // 24
    uint8_t unk_30[0x30 - (0x24 + sizeof(targetPos))];
    float toleranceRadius; // 30
    uint8_t unk_34[0x34 - (0x30 + sizeof(toleranceRadius))];
    bool rotateEntity; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(rotateEntity))];
    uint32_t moveStyle; // 38
#else
    Vector3 targetPos; // 28
    float toleranceRadius; // 34
    bool rotateEntity; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    uint32_t moveStyle; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(ActionMoveToState, 0x40);
} // namespace game
using gameActionMoveToState = game::ActionMoveToState;
} // namespace RED4ext

// clang-format on
