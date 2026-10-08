#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SharedInventoryTag.hpp>

namespace RED4ext
{
namespace game
{
struct Inventory : game::Component
{
    static constexpr const char* NAME = "gameInventory";
    static constexpr const char* ALIAS = "Inventory";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B0[0xB0 - ::RED4ext::Detail::DataSize<game::Component>];
    game::SharedInventoryTag inventoryTag; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(inventoryTag))];
    bool noInitialization; // B4
    uint8_t unk_B6[0xB6 - (0xB4 + sizeof(noInitialization))];
    bool saveInventory; // B6
#else
    uint8_t unkA8[0xB0 - 0xA8]; // A8
    game::SharedInventoryTag inventoryTag; // B0
    bool noInitialization; // B4
    uint8_t unkB5[0xB6 - 0xB5]; // B5
    bool saveInventory; // B6
    uint8_t unkB7[0x110 - 0xB7]; // B7
#endif
};
RED4EXT_ASSERT_SIZE(Inventory, 0x110);
} // namespace game
using gameInventory = game::Inventory;
using Inventory = game::Inventory;
} // namespace RED4ext

// clang-format on
