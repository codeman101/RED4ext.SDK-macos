#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct NarrationPlateComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameNarrationPlateComponent";
    static constexpr const char* ALIAS = "NarrationPlateComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    CName narrationText; // 90
    uint8_t unk_98[0x98 - (0x90 + sizeof(narrationText))];
    CName narrationCaption; // 98
#else
    CName narrationText; // 90
    CName narrationCaption; // 98
#endif
};
RED4EXT_ASSERT_SIZE(NarrationPlateComponent, 0xA0);
} // namespace game
using gameNarrationPlateComponent = game::NarrationPlateComponent;
using NarrationPlateComponent = game::NarrationPlateComponent;
} // namespace RED4ext

// clang-format on
