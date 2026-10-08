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
struct CharacterCustomizationFeetController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationFeetController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<game::ui::CharacterCustomizationBodyPartsController>];
    CName liftedFeetGroupName; // B8
    uint8_t unk_C0[0xC0 - (0xB8 + sizeof(liftedFeetGroupName))];
    CName flatFeetGroupName; // C0
#else
    CName liftedFeetGroupName; // C0
    CName flatFeetGroupName; // C8
    uint8_t unkD0[0x170 - 0xD0]; // D0
#endif
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationFeetController, 0x170);
} // namespace game::ui
using gameuiCharacterCustomizationFeetController = game::ui::CharacterCustomizationFeetController;
} // namespace RED4ext

// clang-format on
