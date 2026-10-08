#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/TriggerShape.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent
{
struct __declspec(align(0x10)) PhysicalTriggerComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entPhysicalTriggerComponent";
    static constexpr const char* ALIAS = "PhysicalTriggerComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_130[0x130 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    Handle<physics::FilterData> filterData; // 130
    uint8_t unk_140[0x140 - (0x130 + sizeof(filterData))];
    physics::SimulationType simulationType; // 140
    uint8_t unk_150[0x150 - (0x140 + sizeof(simulationType))];
    physics::TriggerShape shape; // 150
#else
    uint8_t unk120[0x130 - 0x120]; // 120
    Handle<physics::FilterData> filterData; // 130
    physics::SimulationType simulationType; // 140
    uint8_t unk141[0x150 - 0x141]; // 141
    physics::TriggerShape shape; // 150
    uint8_t unk180[0x190 - 0x180]; // 180
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalTriggerComponent, 0x190);
} // namespace ent
using entPhysicalTriggerComponent = ent::PhysicalTriggerComponent;
using PhysicalTriggerComponent = ent::PhysicalTriggerComponent;
} // namespace RED4ext

// clang-format on
