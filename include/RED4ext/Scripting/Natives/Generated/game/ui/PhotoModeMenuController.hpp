#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ChangeAspectRatioCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/NpcImageCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SetPhotoModeKeyEnabledCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerImageCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhotoModeMenuController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiPhotoModeMenuController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1D0[0x1D0 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
    game::ui::SetPhotoModeKeyEnabledCallback SetAttributeOptionEnabled; // 1D0
    uint8_t unk_208[0x208 - (0x1D0 + sizeof(SetAttributeOptionEnabled))];
    game::ui::SetPhotoModeKeyEnabledCallback SetCategoryEnabled; // 208
    uint8_t unk_240[0x240 - (0x208 + sizeof(SetCategoryEnabled))];
    game::ui::StickerImageCallback SetStickerImage; // 240
    uint8_t unk_278[0x278 - (0x240 + sizeof(SetStickerImage))];
    game::ui::NpcImageCallback SetNpcImage; // 278
    uint8_t unk_2B0[0x2B0 - (0x278 + sizeof(SetNpcImage))];
    game::ui::ChangeAspectRatioCallback ChangeAspectRatio; // 2B0
#else
    uint8_t unkF0[0x2B0 - 0xF0]; // F0
    game::ui::SetPhotoModeKeyEnabledCallback SetAttributeOptionEnabled; // 2B0
    game::ui::SetPhotoModeKeyEnabledCallback SetCategoryEnabled; // 2E8
    game::ui::StickerImageCallback SetStickerImage; // 320
    game::ui::NpcImageCallback SetNpcImage; // 358
    game::ui::ChangeAspectRatioCallback ChangeAspectRatio; // 390
    uint8_t unk3C8[0x400 - 0x3C8]; // 3C8
#endif
};
RED4EXT_ASSERT_SIZE(PhotoModeMenuController, 0x400);
} // namespace game::ui
using gameuiPhotoModeMenuController = game::ui::PhotoModeMenuController;
} // namespace RED4ext

// clang-format on
