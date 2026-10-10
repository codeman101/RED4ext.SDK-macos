#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct ItemData; }

namespace game
{
struct ItemBeingRemovedEvent : red::Event
{
    static constexpr const char* NAME = "gameItemBeingRemovedEvent";
    static constexpr const char* ALIAS = "ItemBeingRemovedEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    ItemID itemID; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(itemID))];
    Handle<game::ItemData> itemData; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(itemData))];
    int32_t difference; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(difference))];
    int32_t currentQuantity; // 64
#else
    ItemID itemID; // 40
    Handle<game::ItemData> itemData; // 50
    int32_t difference; // 60
    int32_t currentQuantity; // 64
#endif
};
RED4EXT_ASSERT_SIZE(ItemBeingRemovedEvent, 0x68);
} // namespace game
using gameItemBeingRemovedEvent = game::ItemBeingRemovedEvent;
using ItemBeingRemovedEvent = game::ItemBeingRemovedEvent;
} // namespace RED4ext

// clang-format on
