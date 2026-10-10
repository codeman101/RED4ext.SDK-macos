#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MaskWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game { struct MinimapSettings; }

namespace game::ui
{
struct MinimapContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiMinimapContainerController";
    static constexpr const char* ALIAS = "MinimapContainerController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C0[0x4C0 - ::RED4ext::Detail::DataSize<game::ui::MappinsContainerController>];
    Handle<game::MinimapSettings> settings; // 4C0
    uint8_t unk_4D0[0x4D0 - (0x4C0 + sizeof(settings))];
    ink::CompoundWidgetReference clampedMappinContainer; // 4D0
    uint8_t unk_4E8[0x4E8 - (0x4D0 + sizeof(clampedMappinContainer))];
    ink::CompoundWidgetReference unclampedMappinContainer; // 4E8
    uint8_t unk_500[0x500 - (0x4E8 + sizeof(unclampedMappinContainer))];
    ink::CacheWidgetReference worldGeometryCache; // 500
    uint8_t unk_518[0x518 - (0x500 + sizeof(worldGeometryCache))];
    ink::CanvasWidgetReference worldGeometryContainer; // 518
    uint8_t unk_530[0x530 - (0x518 + sizeof(worldGeometryContainer))];
    ink::WidgetReference playerIconWidget; // 530
    uint8_t unk_548[0x548 - (0x530 + sizeof(playerIconWidget))];
    ink::WidgetReference compassWidget; // 548
    uint8_t unk_560[0x560 - (0x548 + sizeof(compassWidget))];
    ink::MaskWidgetReference maskWidget; // 560
    uint8_t unk_578[0x578 - (0x560 + sizeof(maskWidget))];
    CName geometryLibraryID; // 578
    uint8_t unk_5E0[0x5E0 - (0x578 + sizeof(geometryLibraryID))];
    ink::CompoundWidgetReference timeDisplayWidget; // 5E0
#else
    uint8_t unk340[0x4C0 - 0x340]; // 340
    Handle<game::MinimapSettings> settings; // 4C0
    ink::CompoundWidgetReference clampedMappinContainer; // 4D0
    ink::CompoundWidgetReference unclampedMappinContainer; // 4E8
    ink::CacheWidgetReference worldGeometryCache; // 500
    ink::CanvasWidgetReference worldGeometryContainer; // 518
    ink::WidgetReference playerIconWidget; // 530
    ink::WidgetReference compassWidget; // 548
    ink::MaskWidgetReference maskWidget; // 560
    CName geometryLibraryID; // 578
    uint8_t unk580[0x5E0 - 0x580]; // 580
    ink::CompoundWidgetReference timeDisplayWidget; // 5E0
#endif
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x5F8);
} // namespace game::ui
using gameuiMinimapContainerController = game::ui::MinimapContainerController;
using MinimapContainerController = game::ui::MinimapContainerController;
} // namespace RED4ext

// clang-format on
