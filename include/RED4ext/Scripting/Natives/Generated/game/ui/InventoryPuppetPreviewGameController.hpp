#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }
namespace ink::anim { struct Proxy; }

namespace game::ui
{
struct InventoryPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiInventoryPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkInventoryPuppetPreviewGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1E8[0x1E8 - ::RED4ext::Detail::DataSize<game::ui::PuppetPreviewGameController>];
    ink::ImageWidgetReference image; // 1E8
    uint8_t unk_200[0x200 - (0x1E8 + sizeof(image))];
    ink::WidgetLibraryReference animLib; // 200
    uint8_t unk_210[0x210 - (0x200 + sizeof(animLib))];
    CName animName; // 210
    uint8_t unk_218[0x218 - (0x210 + sizeof(animName))];
    WeakHandle<ink::Widget> animRoot; // 218
    uint8_t unk_228[0x228 - (0x218 + sizeof(animRoot))];
    Handle<ink::anim::Proxy> animProxy; // 228
#else
    ink::ImageWidgetReference image; // 1E8
    ink::WidgetLibraryReference animLib; // 200
    CName animName; // 210
    WeakHandle<ink::Widget> animRoot; // 218
    Handle<ink::anim::Proxy> animProxy; // 228
#endif
};
RED4EXT_ASSERT_SIZE(InventoryPuppetPreviewGameController, 0x238);
} // namespace game::ui
using gameuiInventoryPuppetPreviewGameController = game::ui::InventoryPuppetPreviewGameController;
using inkInventoryPuppetPreviewGameController = game::ui::InventoryPuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
