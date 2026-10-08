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
struct MinimapDynamicEventMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDynamicEventMappinController";
    static constexpr const char* ALIAS = "MinimapDynamicEventMappinController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_224[0x224 - ::RED4ext::Detail::DataSize<game::ui::BaseMinimapMappinController>];
    bool pulseEnabled; // 224
    uint8_t unk_228[0x228 - (0x224 + sizeof(pulseEnabled))];
    ink::WidgetReference pulseWidget; // 228
    uint8_t unk_240[0x240 - (0x228 + sizeof(pulseWidget))];
    float hideAtDistance; // 240
    uint8_t unk_244[0x244 - (0x240 + sizeof(hideAtDistance))];
    bool hideInCombat; // 244
#else
    bool pulseEnabled; // 228
    uint8_t unk229[0x230 - 0x229]; // 229
    ink::WidgetReference pulseWidget; // 230
    float hideAtDistance; // 248
    bool hideInCombat; // 24C
    uint8_t unk24D[0x250 - 0x24D]; // 24D
#endif
};
RED4EXT_ASSERT_SIZE(MinimapDynamicEventMappinController, 0x250);
} // namespace game::ui
using gameuiMinimapDynamicEventMappinController = game::ui::MinimapDynamicEventMappinController;
using MinimapDynamicEventMappinController = game::ui::MinimapDynamicEventMappinController;
} // namespace RED4ext

// clang-format on
