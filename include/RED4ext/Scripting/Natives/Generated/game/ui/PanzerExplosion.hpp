#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerExplosion : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerExplosion";
    static constexpr const char* ALIAS = "PanzerExplosion";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_D0[0xD0 - ::RED4ext::Detail::DataSize<game::ui::SideScrollerMiniGameDynObjectLogicAdvanced>];
    CName animationName; // D0
#else
    CName animationName; // D0
#endif
};
RED4EXT_ASSERT_SIZE(PanzerExplosion, 0xD8);
} // namespace game::ui
using gameuiPanzerExplosion = game::ui::PanzerExplosion;
using PanzerExplosion = game::ui::PanzerExplosion;
} // namespace RED4ext

// clang-format on
