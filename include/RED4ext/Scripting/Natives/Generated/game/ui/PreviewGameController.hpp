#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiPreviewGameController";
    static constexpr const char* ALIAS = "inkPreviewGameController";

#if defined(__APPLE__)
    // R25. sceneName and cameraRef are not reflected (the dump cannot check them); yawSpeed and yawDefault are at their Windows offsets in
    // the game (0x110, 0x114), and so is the script area that MenuGameController stands for, so the first member is placed with the base's data size.
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<game::ui::MenuGameController>];
#endif
    CName sceneName; // F0
    NodeRef cameraRef; // F8
    uint8_t unk100[0x110 - 0x100]; // 100
    float yawSpeed; // 110
    float yawDefault; // 114
};
RED4EXT_ASSERT_SIZE(PreviewGameController, 0x118);
} // namespace game::ui
using gameuiPreviewGameController = game::ui::PreviewGameController;
using inkPreviewGameController = game::ui::PreviewGameController;
} // namespace RED4ext

// clang-format on
