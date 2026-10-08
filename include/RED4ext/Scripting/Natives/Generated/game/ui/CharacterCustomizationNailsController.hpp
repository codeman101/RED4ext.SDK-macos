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
struct CharacterCustomizationNailsController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationNailsController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<game::ui::CharacterCustomizationBodyPartsController>];
    CName nailsGroupName; // B8
#else
    CName nailsGroupName; // C0
    uint8_t unkC8[0x118 - 0xC8]; // C8
#endif
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationNailsController, 0x118);
} // namespace game::ui
using gameuiCharacterCustomizationNailsController = game::ui::CharacterCustomizationNailsController;
} // namespace RED4ext

// clang-format on
