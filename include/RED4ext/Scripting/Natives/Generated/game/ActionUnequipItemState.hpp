#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct ActionUnequipItemState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionUnequipItemState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_24[0x24 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    TweakDBID slotId; // 24
    uint8_t unk_30[0x30 - (0x24 + sizeof(slotId))];
    CName animFeatureNameRight; // 30
    uint8_t unk_38[0x38 - (0x30 + sizeof(animFeatureNameRight))];
    CName animFeatureNameLeft; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(animFeatureNameLeft))];
    float duration; // 40
#else
    TweakDBID slotId; // 28
    CName animFeatureNameRight; // 30
    CName animFeatureNameLeft; // 38
    float duration; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
#endif
};
RED4EXT_ASSERT_SIZE(ActionUnequipItemState, 0x48);
} // namespace game
using gameActionUnequipItemState = game::ActionUnequipItemState;
} // namespace RED4ext

// clang-format on
