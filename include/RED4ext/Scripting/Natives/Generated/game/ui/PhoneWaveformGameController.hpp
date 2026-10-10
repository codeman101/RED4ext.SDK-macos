#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhoneWaveformGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPhoneWaveformGameController";
    static constexpr const char* ALIAS = "PhoneWaveformGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F0[0xF0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    int32_t measurementsCount; // F0
    uint8_t unk_F4[0xF4 - (0xF0 + sizeof(measurementsCount))];
    float measurementsIntreval; // F4
#else
    uint8_t unkE0[0xF0 - 0xE0]; // E0
    int32_t measurementsCount; // F0
    float measurementsIntreval; // F4
    uint8_t unkF8[0x100 - 0xF8]; // F8
#endif
};
RED4EXT_ASSERT_SIZE(PhoneWaveformGameController, 0x100);
} // namespace game::ui
using gameuiPhoneWaveformGameController = game::ui::PhoneWaveformGameController;
using PhoneWaveformGameController = game::ui::PhoneWaveformGameController;
} // namespace RED4ext

// clang-format on
