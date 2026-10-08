#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ImpactPointData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace ent
{
struct MechanicalComponentImpactEvent : red::Event
{
    static constexpr const char* NAME = "entMechanicalComponentImpactEvent";
    static constexpr const char* ALIAS = "MechanicalComponentImpactEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    WeakHandle<ent::Entity> otherEntity; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(otherEntity))];
    DynArray<ent::ImpactPointData> impactPoints; // 50
#else
    WeakHandle<ent::Entity> otherEntity; // 40
    DynArray<ent::ImpactPointData> impactPoints; // 50
#endif
};
RED4EXT_ASSERT_SIZE(MechanicalComponentImpactEvent, 0x60);
} // namespace ent
using entMechanicalComponentImpactEvent = ent::MechanicalComponentImpactEvent;
using MechanicalComponentImpactEvent = ent::MechanicalComponentImpactEvent;
} // namespace RED4ext

// clang-format on
