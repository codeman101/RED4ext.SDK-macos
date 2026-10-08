#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct EquipRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameEquipRequest";
    static constexpr const char* ALIAS = "EquipRequest";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::PlayerScriptableSystemRequest>];
    ItemID itemID; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(itemID))];
    int32_t slotIndex; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(slotIndex))];
    bool addToInventory; // 6C
    uint8_t unk_6D[0x6D - (0x6C + sizeof(addToInventory))];
    bool equipToCurrentActiveSlot; // 6D
#else
    ItemID itemID; // 58
    int32_t slotIndex; // 68
    bool addToInventory; // 6C
    bool equipToCurrentActiveSlot; // 6D
    uint8_t unk6E[0x70 - 0x6E]; // 6E
#endif
};
RED4EXT_ASSERT_SIZE(EquipRequest, 0x70);
} // namespace game
using gameEquipRequest = game::EquipRequest;
using EquipRequest = game::EquipRequest;
} // namespace RED4ext

// clang-format on
