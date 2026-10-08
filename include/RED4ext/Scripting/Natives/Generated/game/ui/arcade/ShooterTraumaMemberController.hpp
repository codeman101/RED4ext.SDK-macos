#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterObjectController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterTraumaMemberController : game::ui::arcade::ShooterObjectController
{
    static constexpr const char* NAME = "gameuiarcadeShooterTraumaMemberController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_140[0x140 - ::RED4ext::Detail::DataSize<game::ui::arcade::ShooterObjectController>];
    float baseFollowDelay; // 140
#else
    uint8_t unk120[0x140 - 0x120]; // 120
    float baseFollowDelay; // 140
    uint8_t unk144[0x1B0 - 0x144]; // 144
#endif
};
RED4EXT_ASSERT_SIZE(ShooterTraumaMemberController, 0x1B0);
} // namespace game::ui::arcade
using gameuiarcadeShooterTraumaMemberController = game::ui::arcade::ShooterTraumaMemberController;
} // namespace RED4ext

// clang-format on
