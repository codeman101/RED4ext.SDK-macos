#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/TankDestroyableObjectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankEnemyController : game::ui::arcade::TankDestroyableObjectController
{
    static constexpr const char* NAME = "gameuiarcadeTankEnemyController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<game::ui::arcade::TankDestroyableObjectController>];
    ink::WidgetReference headParent; // 120
    uint8_t unk_138[0x138 - (0x120 + sizeof(headParent))];
    ink::WidgetReference head; // 138
#else
    ink::WidgetReference headParent; // 120
    ink::WidgetReference head; // 138
    uint8_t unk150[0x1A8 - 0x150]; // 150
#endif
};
RED4EXT_ASSERT_SIZE(TankEnemyController, 0x1A8);
} // namespace game::ui::arcade
using gameuiarcadeTankEnemyController = game::ui::arcade::TankEnemyController;
} // namespace RED4ext

// clang-format on
