#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RootHudGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiRootHudGameController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_2C0[0x2C0 - ::RED4ext::Detail::DataSize<game::ui::WidgetGameController>];
    DynArray<ink::CompoundWidgetReference> resolutionSensitiveRoots; // 2C0
#else
    uint8_t unkE0[0x2C0 - 0xE0]; // E0
    DynArray<ink::CompoundWidgetReference> resolutionSensitiveRoots; // 2C0
    uint8_t unk2D0[0x328 - 0x2D0]; // 2D0
#endif
};
RED4EXT_ASSERT_SIZE(RootHudGameController, 0x328);
} // namespace game::ui
using gameuiRootHudGameController = game::ui::RootHudGameController;
} // namespace RED4ext

// clang-format on
