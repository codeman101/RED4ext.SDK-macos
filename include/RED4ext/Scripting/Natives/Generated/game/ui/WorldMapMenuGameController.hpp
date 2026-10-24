#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/NewMappinID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/District.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EWorldMapDistrictView.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { struct BaseWorldMapMappinController; }

namespace game::ui
{
struct __declspec(align(0x10)) WorldMapMenuGameController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapMenuGameController";
    static constexpr const char* ALIAS = "WorldMapMenuGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_368[0x368 - ::RED4ext::Detail::DataSize<game::ui::MappinsContainerController>];
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 368
    uint8_t unk_3B0[0x3B0 - (0x368 + sizeof(selectedMappin))];
    game::NewMappinID delamainTaxiMappinID; // 3B0
    uint8_t unk_3D8[0x3D8 - (0x3B0 + sizeof(delamainTaxiMappinID))];
    bool isZoomToMappinEnabled; // 3D8
    uint8_t unk_420[0x420 - (0x3D8 + sizeof(isZoomToMappinEnabled))];
    bool canChangeCustomFilter; // 420
    uint8_t unk_4A0[0x4A0 - (0x420 + sizeof(canChangeCustomFilter))];
    TweakDBID settingsRecordID; // 4A0
    uint8_t unk_4A8[0x4A8 - (0x4A0 + sizeof(settingsRecordID))];
    CName entityPreviewLibraryID; // 4A8
    uint8_t unk_4B0[0x4B0 - (0x4A8 + sizeof(entityPreviewLibraryID))];
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 4B0
    uint8_t unk_4C8[0x4C8 - (0x4B0 + sizeof(entityPreviewSpawnContainer))];
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 4C8
    uint8_t unk_4E0[0x4E0 - (0x4C8 + sizeof(floorPlanSpawnContainer))];
    ink::WidgetReference compassWidget; // 4E0
    uint8_t unk_4F8[0x4F8 - (0x4E0 + sizeof(compassWidget))];
    ink::CompoundWidgetReference tooltipContainer; // 4F8
    uint8_t unk_510[0x510 - (0x4F8 + sizeof(tooltipContainer))];
    ink::Margin tooltipOffset; // 510
    uint8_t unk_520[0x520 - (0x510 + sizeof(tooltipOffset))];
    ink::Margin tooltipDistrictOffset; // 520
    uint8_t unk_530[0x530 - (0x520 + sizeof(tooltipDistrictOffset))];
    ink::CompoundWidgetReference districtsContainer; // 530
    uint8_t unk_548[0x548 - (0x530 + sizeof(districtsContainer))];
    ink::CompoundWidgetReference subdistrictsContainer; // 548
    uint8_t unk_560[0x560 - (0x548 + sizeof(subdistrictsContainer))];
    bool playerOnTop; // 560
    uint8_t unk_568[0x568 - (0x560 + sizeof(playerOnTop))];
    ink::CompoundWidgetReference mappinOutlinesContainer; // 568
    uint8_t unk_580[0x580 - (0x568 + sizeof(mappinOutlinesContainer))];
    ink::CompoundWidgetReference groupOutlinesContainer; // 580
    uint8_t unk_5F0[0x5F0 - (0x580 + sizeof(groupOutlinesContainer))];
    game::data::District hoveredDistrict; // 5F0
    uint8_t unk_5F4[0x5F4 - (0x5F0 + sizeof(hoveredDistrict))];
    game::data::District hoveredSubDistrict; // 5F4
    uint8_t unk_5F8[0x5F8 - (0x5F4 + sizeof(hoveredSubDistrict))];
    game::data::District selectedDistrict; // 5F8
    uint8_t unk_604[0x604 - (0x5F8 + sizeof(selectedDistrict))];
    game::ui::EWorldMapDistrictView districtView; // 604
#else
    uint8_t unk340[0x368 - 0x340]; // 340
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 368
    uint8_t unk378[0x3B0 - 0x378]; // 378
    game::NewMappinID delamainTaxiMappinID; // 3B0
    uint8_t unk3B8[0x3D8 - 0x3B8]; // 3B8
    bool isZoomToMappinEnabled; // 3D8
    uint8_t unk3D9[0x420 - 0x3D9]; // 3D9
    bool canChangeCustomFilter; // 420
    uint8_t unk421[0x4A0 - 0x421]; // 421
    TweakDBID settingsRecordID; // 4A0
    CName entityPreviewLibraryID; // 4A8
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 4B0
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 4C8
    ink::WidgetReference compassWidget; // 4E0
    ink::CompoundWidgetReference tooltipContainer; // 4F8
    ink::Margin tooltipOffset; // 510
    ink::Margin tooltipDistrictOffset; // 520
    ink::CompoundWidgetReference districtsContainer; // 530
    ink::CompoundWidgetReference subdistrictsContainer; // 548
    bool playerOnTop; // 560
    uint8_t unk561[0x568 - 0x561]; // 561
    ink::CompoundWidgetReference mappinOutlinesContainer; // 568
    ink::CompoundWidgetReference groupOutlinesContainer; // 580
    uint8_t unk598[0x5F0 - 0x598]; // 598
    game::data::District hoveredDistrict; // 5F0
    game::data::District hoveredSubDistrict; // 5F4
    game::data::District selectedDistrict; // 5F8
    uint8_t unk5FC[0x604 - 0x5FC]; // 5FC
    game::ui::EWorldMapDistrictView districtView; // 604
    uint8_t unk608[0x6D0 - 0x608]; // 608
#endif
};
RED4EXT_ASSERT_SIZE(WorldMapMenuGameController, 0x6D0);
} // namespace game::ui
using gameuiWorldMapMenuGameController = game::ui::WorldMapMenuGameController;
using WorldMapMenuGameController = game::ui::WorldMapMenuGameController;
} // namespace RED4ext

// clang-format on
