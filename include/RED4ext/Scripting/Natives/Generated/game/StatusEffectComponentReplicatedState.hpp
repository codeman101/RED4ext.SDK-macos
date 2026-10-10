#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatusEffectReplicatedInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct StatusEffectComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameStatusEffectComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_20[0x20 - ::RED4ext::Detail::DataSize<net::IComponentState>];
    DynArray<game::StatusEffectReplicatedInfo> replicatedInfo; // 20
#else
    DynArray<game::StatusEffectReplicatedInfo> replicatedInfo; // 20
    uint8_t unk30[0x40 - 0x30]; // 30
#endif
};
RED4EXT_ASSERT_SIZE(StatusEffectComponentReplicatedState, 0x40);
} // namespace game
using gameStatusEffectComponentReplicatedState = game::StatusEffectComponentReplicatedState;
} // namespace RED4ext

// clang-format on
