#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) ItemPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiItemPreviewGameController";
    static constexpr const char* ALIAS = "inkItemPreviewGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_168[0x168 - ::RED4ext::Detail::DataSize<game::ui::PreviewGameController>];
    ink::WidgetReference root; // 168
    uint8_t unk_180[0x180 - (0x168 + sizeof(root))];
    ink::ImageWidgetReference image; // 180
#else
    uint8_t unk128[0x168 - 0x128]; // 128
    ink::WidgetReference root; // 168
    ink::ImageWidgetReference image; // 180
    uint8_t unk198[0x1D0 - 0x198]; // 198
#endif

};
RED4EXT_ASSERT_SIZE(ItemPreviewGameController, 0x1D0);
} // namespace game::ui
using gameuiItemPreviewGameController = game::ui::ItemPreviewGameController;
using inkItemPreviewGameController = game::ui::ItemPreviewGameController;
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) ItemPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiItemPreviewGameController";
    static constexpr const char* ALIAS = "inkItemPreviewGameController";

    uint8_t unk118[0x158 - 0x118]; // 118
    ink::WidgetReference root; // 158
    ink::ImageWidgetReference image; // 170
    uint8_t unk188[0x1C0 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(ItemPreviewGameController, 0x1C0);
} // namespace game::ui
using gameuiItemPreviewGameController = game::ui::ItemPreviewGameController;
using inkItemPreviewGameController = game::ui::ItemPreviewGameController;
} // namespace RED4ext

// clang-format on

#endif
