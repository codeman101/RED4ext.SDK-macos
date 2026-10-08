#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITutorial_NodeSubType.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace quest
{
struct ShowOverlay_NodeSubType : quest::ITutorial_NodeSubType
{
    static constexpr const char* NAME = "questShowOverlay_NodeSubType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ITutorial_NodeSubType>];
    RaRef<ink::WidgetLibraryResource> overlayLibrary; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(overlayLibrary))];
    CName libraryItemName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(libraryItemName))];
    bool visible; // 48
    uint8_t unk_49[0x49 - (0x48 + sizeof(visible))];
    bool pauseGame; // 49
    uint8_t unk_4A[0x4A - (0x49 + sizeof(pauseGame))];
    bool lockPlayerMovement; // 4A
    uint8_t unk_4B[0x4B - (0x4A + sizeof(lockPlayerMovement))];
    bool hideOnInput; // 4B
#else
    RaRef<ink::WidgetLibraryResource> overlayLibrary; // 38
    CName libraryItemName; // 40
    bool visible; // 48
    bool pauseGame; // 49
    bool lockPlayerMovement; // 4A
    bool hideOnInput; // 4B
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(ShowOverlay_NodeSubType, 0x50);
} // namespace quest
using questShowOverlay_NodeSubType = quest::ShowOverlay_NodeSubType;
} // namespace RED4ext

// clang-format on
