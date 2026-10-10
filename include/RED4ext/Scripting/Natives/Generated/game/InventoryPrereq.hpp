#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IComparisonPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryPrereq : game::IComparisonPrereq
{
    static constexpr const char* NAME = "gameInventoryPrereq";
    static constexpr const char* ALIAS = "InventoryPrereq";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_44[0x44 - ::RED4ext::Detail::DataSize<game::IComparisonPrereq>];
    ItemID itemID; // 44
    uint8_t unk_54[0x54 - (0x44 + sizeof(itemID))];
    uint32_t amount; // 54
#else
    ItemID itemID; // 48
    uint32_t amount; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
#endif
};
RED4EXT_ASSERT_SIZE(InventoryPrereq, 0x60);
} // namespace game
using gameInventoryPrereq = game::InventoryPrereq;
using InventoryPrereq = game::InventoryPrereq;
} // namespace RED4ext

// clang-format on
