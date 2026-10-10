#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGamePlayerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct QuadRacerPlayer : game::ui::SideScrollerMiniGamePlayerController
{
    static constexpr const char* NAME = "gameuiQuadRacerPlayer";
    static constexpr const char* ALIAS = "QuadRacerPlayer";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_98[0x98 - ::RED4ext::Detail::DataSize<game::ui::SideScrollerMiniGamePlayerController>];
    CName leftTurnAtlasRegion; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(leftTurnAtlasRegion))];
    CName rightTurnAtlasRegion; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(rightTurnAtlasRegion))];
    CName straightTurnAtlasRegion; // A8
    uint8_t unk_B0[0xB0 - (0xA8 + sizeof(straightTurnAtlasRegion))];
    ink::ImageWidgetReference playerImage; // B0
    uint8_t unk_C8[0xC8 - (0xB0 + sizeof(playerImage))];
    ink::ImageWidgetReference leftTireSmoke; // C8
    uint8_t unk_E0[0xE0 - (0xC8 + sizeof(leftTireSmoke))];
    ink::ImageWidgetReference rightTireSmoke; // E0
    uint8_t unk_F8[0xF8 - (0xE0 + sizeof(rightTireSmoke))];
    ink::ImageWidgetReference rightFlame; // F8
    uint8_t unk_110[0x110 - (0xF8 + sizeof(rightFlame))];
    ink::ImageWidgetReference leftFlame; // 110
#else
    uint8_t unk88[0xA0 - 0x88]; // 88
    CName leftTurnAtlasRegion; // A0
    CName rightTurnAtlasRegion; // A8
    CName straightTurnAtlasRegion; // B0
    ink::ImageWidgetReference playerImage; // B8
    ink::ImageWidgetReference leftTireSmoke; // D0
    ink::ImageWidgetReference rightTireSmoke; // E8
    ink::ImageWidgetReference rightFlame; // 100
    ink::ImageWidgetReference leftFlame; // 118
#endif
};
RED4EXT_ASSERT_SIZE(QuadRacerPlayer, 0x130);
} // namespace game::ui
using gameuiQuadRacerPlayer = game::ui::QuadRacerPlayer;
using QuadRacerPlayer = game::ui::QuadRacerPlayer;
} // namespace RED4ext

// clang-format on
