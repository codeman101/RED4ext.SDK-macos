#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game::state { struct MachineparameterTypeLadderDescription; }

namespace game::state
{
struct __declspec(align(0x10)) MachineComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gamestateMachineComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_20[0x20 - ::RED4ext::Detail::DataSize<net::IComponentState>];
    game::state::MachineStateContext stateContext; // 20
    uint8_t unk_18530[0x18530 - (0x20 + sizeof(stateContext))];
    Handle<game::state::MachineparameterTypeLadderDescription> enterLadderParameter; // 18530
    uint8_t unk_18540[0x18540 - (0x18530 + sizeof(enterLadderParameter))];
    bool exitLadderParameter; // 18540
#else
    game::state::MachineStateContext stateContext; // 20
    Handle<game::state::MachineparameterTypeLadderDescription> enterLadderParameter; // 1A930
    bool exitLadderParameter; // 1A940
    uint8_t unk1A941[0x1A980 - 0x1A941]; // 1A941
#endif
};
RED4EXT_ASSERT_SIZE(MachineComponentReplicatedState, 0x1A980);
} // namespace game::state
using gamestateMachineComponentReplicatedState = game::state::MachineComponentReplicatedState;
} // namespace RED4ext

// clang-format on
