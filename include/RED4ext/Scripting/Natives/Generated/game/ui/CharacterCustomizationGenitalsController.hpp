#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationGenitalsController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationGenitalsController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<game::ui::CharacterCustomizationBodyPartsController>];
    CName upperBodyGroupName; // B8
    uint8_t unk_C0[0xC0 - (0xB8 + sizeof(upperBodyGroupName))];
    CName bottomBodyGroupName; // C0
    uint8_t unk_C8[0xC8 - (0xC0 + sizeof(bottomBodyGroupName))];
    bool forceHideGenitals; // C8
#else
    CName upperBodyGroupName; // C0
    CName bottomBodyGroupName; // C8
    bool forceHideGenitals; // D0
    uint8_t unkD1[0x180 - 0xD1]; // D1
#endif
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationGenitalsController, 0x180);
} // namespace game::ui
using gameuiCharacterCustomizationGenitalsController = game::ui::CharacterCustomizationGenitalsController;
} // namespace RED4ext

// clang-format on
