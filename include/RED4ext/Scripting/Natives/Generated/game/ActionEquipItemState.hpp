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
struct ActionEquipItemState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionEquipItemState";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_24[0x24 - ::RED4ext::Detail::DataSize<game::ActionReplicatedState>];
    TweakDBID slotId; // 24
    uint8_t unk_2C[0x2C - (0x24 + sizeof(slotId))];
    ItemID itemId; // 2C
    uint8_t unk_40[0x40 - (0x2C + sizeof(itemId))];
    CName animFeatureNameRight; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(animFeatureNameRight))];
    CName animFeatureNameLeft; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(animFeatureNameLeft))];
    float duration; // 50
    uint8_t unk_54[0x54 - (0x50 + sizeof(duration))];
    float spawnDelay; // 54
#else
    TweakDBID slotId; // 28
    ItemID itemId; // 30
    CName animFeatureNameRight; // 40
    CName animFeatureNameLeft; // 48
    float duration; // 50
    float spawnDelay; // 54
#endif
};
RED4EXT_ASSERT_SIZE(ActionEquipItemState, 0x58);
} // namespace game
using gameActionEquipItemState = game::ActionEquipItemState;
} // namespace RED4ext

// clang-format on
