#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapRemotePlayerMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapRemotePlayerMappinController";
    static constexpr const char* ALIAS = "MinimapRemotePlayerMappinController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_228[0x228 - ::RED4ext::Detail::DataSize<game::ui::BaseMinimapMappinController>];
    ink::WidgetReference rootWidget; // 228
    uint8_t unk_240[0x240 - (0x228 + sizeof(rootWidget))];
    ink::WidgetReference shapeWidget; // 240
    uint8_t unk_258[0x258 - (0x240 + sizeof(shapeWidget))];
    ink::WidgetReference dataWidget; // 258
#else
    ink::WidgetReference rootWidget; // 228
    ink::WidgetReference shapeWidget; // 240
    ink::WidgetReference dataWidget; // 258
#endif
};
RED4EXT_ASSERT_SIZE(MinimapRemotePlayerMappinController, 0x270);
} // namespace game::ui
using gameuiMinimapRemotePlayerMappinController = game::ui::MinimapRemotePlayerMappinController;
using MinimapRemotePlayerMappinController = game::ui::MinimapRemotePlayerMappinController;
} // namespace RED4ext

// clang-format on
