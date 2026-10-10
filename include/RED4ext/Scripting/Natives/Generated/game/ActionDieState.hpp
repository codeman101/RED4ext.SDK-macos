#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace ent { struct RagdollComponent; }
namespace ent { struct SlotComponent; }
namespace game { struct Object; }
namespace move { struct Component; }

namespace game
{
struct ActionDieState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionDieState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_28[0x28 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    WeakHandle<game::Object> owner; // 28
    uint8_t unk_38[0x38 - (0x28 + sizeof(owner))];
    WeakHandle<move::Component> movingAgent; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(movingAgent))];
    WeakHandle<ent::RagdollComponent> ragdollComponent; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(ragdollComponent))];
    WeakHandle<ent::SlotComponent> slotComponent; // 58
#else
    WeakHandle<game::Object> owner; // 28
    WeakHandle<move::Component> movingAgent; // 38
    WeakHandle<ent::RagdollComponent> ragdollComponent; // 48
    WeakHandle<ent::SlotComponent> slotComponent; // 58
#endif
};
RED4EXT_ASSERT_SIZE(ActionDieState, 0x68);
} // namespace game
using gameActionDieState = game::ActionDieState;
} // namespace RED4ext

// clang-format on
