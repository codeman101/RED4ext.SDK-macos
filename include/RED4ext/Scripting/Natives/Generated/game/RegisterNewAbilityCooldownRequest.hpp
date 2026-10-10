#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game
{
struct RegisterNewAbilityCooldownRequest
{
    static constexpr const char* NAME = "gameRegisterNewAbilityCooldownRequest";
    static constexpr const char* ALIAS = "RegisterNewAbilityCooldownRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    WeakHandle<ent::Entity> owner; // 0
    uint8_t unk_10[0x10 - (0x0 + sizeof(owner))];
    ItemID ownerItemId; // 10
    uint8_t unk_20[0x20 - (0x10 + sizeof(ownerItemId))];
    TweakDBID ownerRecord; // 20
    uint8_t unk_28[0x28 - (0x20 + sizeof(ownerRecord))];
    CName cooldownName; // 28
    uint8_t unk_30[0x30 - (0x28 + sizeof(cooldownName))];
    float duration; // 30
    uint8_t unk_34[0x34 - (0x30 + sizeof(duration))];
    game::data::StatType type; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(type))];
    bool modifiable; // 38
    uint8_t unk_3C[0x3C - (0x38 + sizeof(modifiable))];
    game::data::StatType abilityType; // 3C
#else
    WeakHandle<ent::Entity> owner; // 00
    ItemID ownerItemId; // 10
    TweakDBID ownerRecord; // 20
    CName cooldownName; // 28
    float duration; // 30
    game::data::StatType type; // 34
    bool modifiable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::data::StatType abilityType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
#endif
};
RED4EXT_ASSERT_SIZE(RegisterNewAbilityCooldownRequest, 0x48);
} // namespace game
using gameRegisterNewAbilityCooldownRequest = game::RegisterNewAbilityCooldownRequest;
using RegisterNewAbilityCooldownRequest = game::RegisterNewAbilityCooldownRequest;
} // namespace RED4ext

// clang-format on
