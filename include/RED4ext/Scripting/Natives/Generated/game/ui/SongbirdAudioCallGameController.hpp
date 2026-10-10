#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SongbirdAudioCallGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiSongbirdAudioCallGameController";
    static constexpr const char* ALIAS = "SongbirdAudioCallGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F8[0xF8 - ::RED4ext::Detail::DataSize<game::ui::HUDGameController>];
    DynArray<ink::WidgetReference> targets; // F8
    uint8_t unk_124[0x124 - (0xF8 + sizeof(targets))];
    float intensityMultiplier; // 124
    uint8_t unk_128[0x128 - (0x124 + sizeof(intensityMultiplier))];
    float voLevelsUpdateTimer; // 128
    uint8_t unk_130[0x130 - (0x128 + sizeof(voLevelsUpdateTimer))];
    bool waveformEnabled; // 130
#else
    DynArray<ink::WidgetReference> targets; // F8
    uint8_t unk108[0x124 - 0x108]; // 108
    float intensityMultiplier; // 124
    float voLevelsUpdateTimer; // 128
    uint8_t unk12C[0x130 - 0x12C]; // 12C
    bool waveformEnabled; // 130
    uint8_t unk131[0x138 - 0x131]; // 131
#endif
};
RED4EXT_ASSERT_SIZE(SongbirdAudioCallGameController, 0x138);
} // namespace game::ui
using gameuiSongbirdAudioCallGameController = game::ui::SongbirdAudioCallGameController;
using SongbirdAudioCallGameController = game::ui::SongbirdAudioCallGameController;
} // namespace RED4ext

// clang-format on
