#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewCameraController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkPuppetPreviewGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_128[0x128 - ::RED4ext::Detail::DataSize<game::ui::PreviewGameController>];
    game::ui::PuppetPreviewCameraController cameraController; // 128
#else
    uint8_t unk128[0x138 - 0x128]; // 128
    game::ui::PuppetPreviewCameraController cameraController; // 138
    uint8_t unk1C8[0x1E8 - 0x1C8]; // 1C8

#endif
};
RED4EXT_ASSERT_SIZE(PuppetPreviewGameController, 0x1E8);
} // namespace game::ui
using gameuiPuppetPreviewGameController = game::ui::PuppetPreviewGameController;
using inkPuppetPreviewGameController = game::ui::PuppetPreviewGameController;
} // namespace RED4ext

// clang-format on
