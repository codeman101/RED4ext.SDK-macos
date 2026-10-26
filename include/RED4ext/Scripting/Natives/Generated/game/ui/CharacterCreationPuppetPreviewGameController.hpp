#if defined(__APPLE__)
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

// mac-layout (generated from the reflection dump)
    uint8_t unk_1E8[0x1E8 - ::RED4ext::Detail::DataSize<game::ui::PuppetPreviewGameController>];
    CName maleSceneName; // 1E8
    uint8_t unk_1F0[0x1F0 - (0x1E8 + sizeof(maleSceneName))];
    CName femaleSceneName; // 1F0
    uint8_t unk_1F8[0x1F8 - (0x1F0 + sizeof(femaleSceneName))];
    NodeRef maleCamera01Ref; // 1F8
    uint8_t unk_200[0x200 - (0x1F8 + sizeof(maleCamera01Ref))];
    NodeRef femaleCamera01Ref; // 200
    uint8_t unk_208[0x208 - (0x200 + sizeof(femaleCamera01Ref))];
    ink::CompoundWidgetReference root; // 208
    uint8_t unk_220[0x220 - (0x208 + sizeof(root))];
    ink::ImageWidgetReference image; // 220
    uint8_t unk_238[0x238 - (0x220 + sizeof(image))];
    ink::WidgetLibraryReference animLib; // 238
    uint8_t unk_248[0x248 - (0x238 + sizeof(animLib))];
    CName animName; // 248

};
RED4EXT_ASSERT_SIZE(CharacterCreationPuppetPreviewGameController, 0x270);
} // namespace game::ui
using gameuiCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
using inkCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
#else
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

    CName maleSceneName; // 1E8
    CName femaleSceneName; // 1F0
    NodeRef maleCamera01Ref; // 1F8
    NodeRef femaleCamera01Ref; // 200
    ink::CompoundWidgetReference root; // 208
    ink::ImageWidgetReference image; // 220
    ink::WidgetLibraryReference animLib; // 238
    CName animName; // 248
    uint8_t unk250[0x270 - 0x250]; // 250
};
RED4EXT_ASSERT_SIZE(CharacterCreationPuppetPreviewGameController, 0x270);
} // namespace game::ui
using gameuiCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
using inkCharacterCreationPuppetPreviewGameController = game::ui::CharacterCreationPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
#endif
