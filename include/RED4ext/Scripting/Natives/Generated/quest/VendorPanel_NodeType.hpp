#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct VendorPanel_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questVendorPanel_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    bool openVendorPanel; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(openVendorPanel))];
    CString vendorId; // 38
    uint8_t unk_58[0x58 - (0x38 + sizeof(vendorId))];
    game::EntityReference objectRef; // 58
    uint8_t unk_90[0x90 - (0x58 + sizeof(objectRef))];
    CName scenarioName; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(scenarioName))];
    CString assetsLibrary; // 98
    uint8_t unk_B8[0xB8 - (0x98 + sizeof(assetsLibrary))];
    CName rootItemName; // B8
#else
    bool openVendorPanel; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CString vendorId; // 40
    game::EntityReference objectRef; // 60
    CName scenarioName; // 98
    CString assetsLibrary; // A0
    CName rootItemName; // C0
#endif
};
RED4EXT_ASSERT_SIZE(VendorPanel_NodeType, 0xC8);
} // namespace quest
using questVendorPanel_NodeType = quest::VendorPanel_NodeType;
} // namespace RED4ext

// clang-format on
