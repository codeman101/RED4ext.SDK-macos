#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseWorldMapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) WorldMapPlayerMappinController : game::ui::BaseWorldMapMappinController
{
    static constexpr const char* NAME = "gameuiWorldMapPlayerMappinController";
    static constexpr const char* ALIAS = "WorldMapPlayerMappinController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_380[0x380 - ::RED4ext::Detail::DataSize<game::ui::BaseWorldMapMappinController>];
    ink::ImageWidgetReference coneIconWidget; // 380
#else
    uint8_t unk340[0x380 - 0x340]; // 340
    ink::ImageWidgetReference coneIconWidget; // 380
    uint8_t unk398[0x3A0 - 0x398]; // 398
#endif
};
RED4EXT_ASSERT_SIZE(WorldMapPlayerMappinController, 0x3A0);
} // namespace game::ui
using gameuiWorldMapPlayerMappinController = game::ui::WorldMapPlayerMappinController;
using WorldMapPlayerMappinController = game::ui::WorldMapPlayerMappinController;
} // namespace RED4ext

// clang-format on
