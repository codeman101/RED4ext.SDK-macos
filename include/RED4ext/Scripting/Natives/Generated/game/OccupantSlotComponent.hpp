#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SlotComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OccupantSlotData.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) OccupantSlotComponent : ent::SlotComponent
{
    static constexpr const char* NAME = "gameOccupantSlotComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1A0[0x1A0 - ::RED4ext::Detail::DataSize<ent::SlotComponent>];
    DynArray<game::OccupantSlotData> slotData; // 1A0
#else
    DynArray<game::OccupantSlotData> slotData; // 1A0
#endif
};
RED4EXT_ASSERT_SIZE(OccupantSlotComponent, 0x1B0);
} // namespace game
using gameOccupantSlotComponent = game::OccupantSlotComponent;
} // namespace RED4ext

// clang-format on
