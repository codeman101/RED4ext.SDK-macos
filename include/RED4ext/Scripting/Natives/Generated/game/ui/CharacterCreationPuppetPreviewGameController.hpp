#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCreationPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiCharacterCreationPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkCharacterCreationPuppetPreviewGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1B8[0x1B8 - ::RED4ext::Detail::DataSize<game::ui::PuppetPreviewGameController>];
    CName maleSceneName; // 1B8
    uint8_t unk_1C0[0x1C0 - (0x1B8 + sizeof(maleSceneName))];
    CName femaleSceneName; // 1C0
    uint8_t unk_1C8[0x1C8 - (0x1C0 + sizeof(femaleSceneName))];
    NodeRef maleCamera01Ref; // 1C8
    uint8_t unk_1D0[0x1D0 - (0x1C8 + sizeof(maleCamera01Ref))];
    NodeRef femaleCamera01Ref; // 1D0
    uint8_t unk_1D8[0x1D8 - (0x1D0 + sizeof(femaleCamera01Ref))];
    ink::CompoundWidgetReference root; // 1D8
    uint8_t unk_1F0[0x1F0 - (0x1D8 + sizeof(root))];
    ink::ImageWidgetReference image; // 1F0
    uint8_t unk_208[0x208 - (0x1F0 + sizeof(image))];
    ink::WidgetLibraryReference animLib; // 208
    uint8_t unk_218[0x218 - (0x208 + sizeof(animLib))];
    CName animName; // 218
#else
    CName maleSceneName; // 1E8
    CName femaleSceneName; // 1F0
    NodeRef maleCamera01Ref; // 1F8
    NodeRef femaleCamera01Ref; // 200
    ink::CompoundWidgetReference root; // 208
    ink::ImageWidgetReference image; // 220
    ink::WidgetLibraryReference animLib; // 238
    CName animName; // 248
    uint8_t unk250[0x270 - 0x250]; // 250

#endif
};
RED4EXT_ASSERT_SIZE(CharacterCreationPuppetPreviewGameController, 0x270);
} // namespace game::ui
using gameuiCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
using inkCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
