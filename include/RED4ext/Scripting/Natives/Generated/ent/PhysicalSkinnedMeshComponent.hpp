#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SkinnedMeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent
{
struct __declspec(align(0x10)) PhysicalSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entPhysicalSkinnedMeshComponent";
    static constexpr const char* ALIAS = "PhysicalSkinnedMeshComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_2A8[0x2A8 - ::RED4ext::Detail::DataSize<ent::SkinnedMeshComponent>];
    Handle<physics::FilterData> filterData; // 2A8
    uint8_t unk_2C4[0x2C4 - (0x2A8 + sizeof(filterData))];
    physics::SimulationType simulationType; // 2C4
    uint8_t unk_2C5[0x2C5 - (0x2C4 + sizeof(simulationType))];
    physics::FilterDataSource filterDataSource; // 2C5
    uint8_t unk_2C6[0x2C6 - (0x2C5 + sizeof(filterDataSource))];
    bool startInactive; // 2C6
    uint8_t unk_2C8[0x2C8 - (0x2C6 + sizeof(startInactive))];
    bool useResourceSimulationType; // 2C8
#else
    uint8_t unk270[0x2A8 - 0x270]; // 270
    Handle<physics::FilterData> filterData; // 2A8
    uint8_t unk2B8[0x2C4 - 0x2B8]; // 2B8
    physics::SimulationType simulationType; // 2C4
    physics::FilterDataSource filterDataSource; // 2C5
    bool startInactive; // 2C6
    uint8_t unk2C7[0x2C8 - 0x2C7]; // 2C7
    bool useResourceSimulationType; // 2C8
    uint8_t unk2C9[0x2D0 - 0x2C9]; // 2C9
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalSkinnedMeshComponent, 0x2D0);
} // namespace ent
using entPhysicalSkinnedMeshComponent = ent::PhysicalSkinnedMeshComponent;
using PhysicalSkinnedMeshComponent = ent::PhysicalSkinnedMeshComponent;
} // namespace RED4ext

// clang-format on
