#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct ActionRotateBaseState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionRotateBaseState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_24[0x24 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    float angleOffset; // 24
    uint8_t unk_28[0x28 - (0x24 + sizeof(angleOffset))];
    float angleTolerance; // 28
    uint8_t unk_2C[0x2C - (0x28 + sizeof(angleTolerance))];
    bool keepUpdatingTarget; // 2C
    uint8_t unk_2D[0x2D - (0x2C + sizeof(keepUpdatingTarget))];
    bool useRotationTime; // 2D
    uint8_t unk_30[0x30 - (0x2D + sizeof(useRotationTime))];
    float rotationSpeed; // 30
    uint8_t unk_34[0x34 - (0x30 + sizeof(rotationSpeed))];
    float rotationTime; // 34
#else
    float angleOffset; // 28
    float angleTolerance; // 2C
    bool keepUpdatingTarget; // 30
    bool useRotationTime; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    float rotationSpeed; // 34
    float rotationTime; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
#endif
};
RED4EXT_ASSERT_SIZE(ActionRotateBaseState, 0x40);
} // namespace game
using gameActionRotateBaseState = game::ActionRotateBaseState;
} // namespace RED4ext

// clang-format on
