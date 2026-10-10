#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateMachineInstanceData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::state
{
struct MachineeventAddOnDemandStateMachine : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventAddOnDemandStateMachine";
    static constexpr const char* ALIAS = "PSMAddOnDemandStateMachine";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName stateMachineName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(stateMachineName))];
    game::state::MachineStateMachineInstanceData instanceData; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(instanceData))];
    WeakHandle<game::Object> owner; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(owner))];
    bool tryHotSwap; // 78
#else
    CName stateMachineName; // 40
    game::state::MachineStateMachineInstanceData instanceData; // 48
    WeakHandle<game::Object> owner; // 68
    bool tryHotSwap; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
#endif
};
RED4EXT_ASSERT_SIZE(MachineeventAddOnDemandStateMachine, 0x80);
} // namespace game::state
using gamestateMachineeventAddOnDemandStateMachine = game::state::MachineeventAddOnDemandStateMachine;
using PSMAddOnDemandStateMachine = game::state::MachineeventAddOnDemandStateMachine;
} // namespace RED4ext

// clang-format on
