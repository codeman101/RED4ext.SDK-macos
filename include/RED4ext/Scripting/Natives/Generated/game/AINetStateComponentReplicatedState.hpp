#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/NetAIState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct AINetStateComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameAINetStateComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1C[0x1C - ::RED4ext::Detail::DataSize<net::IComponentState>];
    game::NetAIState replHighLevelState; // 1C
    uint8_t unk_28[0x28 - (0x1C + sizeof(replHighLevelState))];
    game::NetAIState replUpperBodyState; // 28
    uint8_t unk_34[0x34 - (0x28 + sizeof(replUpperBodyState))];
    game::NetAIState replStanceState; // 34
    uint8_t unk_40[0x40 - (0x34 + sizeof(replStanceState))];
    game::NetAIState replHitReactionModeState; // 40
    uint8_t unk_4C[0x4C - (0x40 + sizeof(replHitReactionModeState))];
    game::NetAIState replBehaviorState; // 4C
    uint8_t unk_58[0x58 - (0x4C + sizeof(replBehaviorState))];
    game::NetAIState replPhaseState; // 58
    uint8_t unk_64[0x64 - (0x58 + sizeof(replPhaseState))];
    game::NetAIState replDefenseMode; // 64
    uint8_t unk_70[0x70 - (0x64 + sizeof(replDefenseMode))];
    game::NetAIState replLocomotionMode; // 70
#else
    game::NetAIState replHighLevelState; // 20
    game::NetAIState replUpperBodyState; // 2C
    game::NetAIState replStanceState; // 38
    game::NetAIState replHitReactionModeState; // 44
    game::NetAIState replBehaviorState; // 50
    game::NetAIState replPhaseState; // 5C
    game::NetAIState replDefenseMode; // 68
    game::NetAIState replLocomotionMode; // 74
#endif
};
RED4EXT_ASSERT_SIZE(AINetStateComponentReplicatedState, 0x80);
} // namespace game
using gameAINetStateComponentReplicatedState = game::AINetStateComponentReplicatedState;
} // namespace RED4ext

// clang-format on
