#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinGroupState.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) BaseWorldMapMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiBaseWorldMapMappinController";
    static constexpr const char* ALIAS = "BaseWorldMapMappinController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_2B8[0x2B8 - ::RED4ext::Detail::DataSize<game::ui::InteractionMappinController>];
    bool selected; // 2B8
    uint8_t unk_2B9[0x2B9 - (0x2B8 + sizeof(selected))];
    bool inZoomLevel; // 2B9
    uint8_t unk_2BA[0x2BA - (0x2B9 + sizeof(inZoomLevel))];
    bool inCustomFilter; // 2BA
    uint8_t unk_2BB[0x2BB - (0x2BA + sizeof(inCustomFilter))];
    bool hasCustomFilter; // 2BB
    uint8_t unk_2BC[0x2BC - (0x2BB + sizeof(hasCustomFilter))];
    bool isFastTravelEnabled; // 2BC
    uint8_t unk_2BD[0x2BD - (0x2BC + sizeof(isFastTravelEnabled))];
    bool isVisibleInFilterAndZoom; // 2BD
    uint8_t unk_2D8[0x2D8 - (0x2BD + sizeof(isVisibleInFilterAndZoom))];
    game::ui::MappinGroupState groupState; // 2D8
    uint8_t unk_2DC[0x2DC - (0x2D8 + sizeof(groupState))];
    uint8_t collectionCount; // 2DC
    uint8_t unk_308[0x308 - (0x2DC + sizeof(collectionCount))];
    ink::WidgetReference groupContainerWidget; // 308
    uint8_t unk_320[0x320 - (0x308 + sizeof(groupContainerWidget))];
    ink::TextWidgetReference groupCountTextWidget; // 320
#else
    bool selected; // 2C0
    bool inZoomLevel; // 2C1
    bool inCustomFilter; // 2C2
    bool hasCustomFilter; // 2C3
    bool isFastTravelEnabled; // 2C4
    bool isVisibleInFilterAndZoom; // 2C5
    uint8_t unk2C6[0x2E0 - 0x2C6]; // 2C6
    game::ui::MappinGroupState groupState; // 2E0
    uint8_t collectionCount; // 2E4
    uint8_t unk2E5[0x310 - 0x2E5]; // 2E5
    ink::WidgetReference groupContainerWidget; // 310
    ink::TextWidgetReference groupCountTextWidget; // 328
#endif
};
RED4EXT_ASSERT_SIZE(BaseWorldMapMappinController, 0x340);
} // namespace game::ui
using gameuiBaseWorldMapMappinController = game::ui::BaseWorldMapMappinController;
using BaseWorldMapMappinController = game::ui::BaseWorldMapMappinController;
} // namespace RED4ext

// clang-format on
