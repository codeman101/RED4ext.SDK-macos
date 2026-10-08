#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ScannerGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiScannerGameController";
    static constexpr const char* ALIAS = "scannerGameController";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_F8[0xF8 - ::RED4ext::Detail::DataSize<game::ui::HUDGameController>];
    ent::EntityID currentTarget; // F8
    uint8_t unk_100[0x100 - (0xF8 + sizeof(currentTarget))];
    bool scanLock; // 100
    uint8_t unk_104[0x104 - (0x100 + sizeof(scanLock))];
    float percentValue; // 104
    uint8_t unk_108[0x108 - (0x104 + sizeof(percentValue))];
    float oldPercentValue; // 108
#else
    ent::EntityID currentTarget; // F8
    bool scanLock; // 100
    uint8_t unk101[0x104 - 0x101]; // 101
    float percentValue; // 104
    float oldPercentValue; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
#endif
};
RED4EXT_ASSERT_SIZE(ScannerGameController, 0x110);
} // namespace game::ui
using gameuiScannerGameController = game::ui::ScannerGameController;
using scannerGameController = game::ui::ScannerGameController;
} // namespace RED4ext

// clang-format on
