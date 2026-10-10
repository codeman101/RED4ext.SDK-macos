#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HoldIndicatorProgressCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HoldIndicatorGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiHoldIndicatorGameController";
    static constexpr const char* ALIAS = "HoldIndicatorGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_E0[0xE0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    game::ui::HoldIndicatorProgressCallback HoldProgress; // E0
    uint8_t unk_118[0x118 - (0xE0 + sizeof(HoldProgress))];
    ink::EmptyCallback HoldStart; // 118
    uint8_t unk_150[0x150 - (0x118 + sizeof(HoldStart))];
    ink::EmptyCallback HoldFinish; // 150
    uint8_t unk_188[0x188 - (0x150 + sizeof(HoldFinish))];
    ink::EmptyCallback HoldStop; // 188
#else
    game::ui::HoldIndicatorProgressCallback HoldProgress; // E0
    ink::EmptyCallback HoldStart; // 118
    ink::EmptyCallback HoldFinish; // 150
    ink::EmptyCallback HoldStop; // 188
    uint8_t unk1C0[0x1E8 - 0x1C0]; // 1C0
#endif
};
RED4EXT_ASSERT_SIZE(HoldIndicatorGameController, 0x1E8);
} // namespace game::ui
using gameuiHoldIndicatorGameController = game::ui::HoldIndicatorGameController;
using HoldIndicatorGameController = game::ui::HoldIndicatorGameController;
} // namespace RED4ext

// clang-format on
