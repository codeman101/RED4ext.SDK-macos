#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent
{
struct __declspec(align(0x10)) PhysicalMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entPhysicalMeshComponent";
    static constexpr const char* ALIAS = "PhysicalMeshComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_200[0x200 - ::RED4ext::Detail::DataSize<ent::MeshComponent>];
    Handle<physics::FilterData> filterData; // 200
    uint8_t unk_210[0x210 - (0x200 + sizeof(filterData))];
    CName visibilityAnimationParam; // 210
    uint8_t unk_220[0x220 - (0x210 + sizeof(visibilityAnimationParam))];
    physics::FilterDataSource filterDataSource; // 220
    uint8_t unk_221[0x221 - (0x220 + sizeof(filterDataSource))];
    physics::SimulationType simulationType; // 221
    uint8_t unk_222[0x222 - (0x221 + sizeof(simulationType))];
    bool startInactive; // 222
    uint8_t unk_223[0x223 - (0x222 + sizeof(startInactive))];
    bool useResourceSimulationType; // 223
#else
    uint8_t unk1E0[0x210 - 0x1E0]; // 1E0
    Handle<physics::FilterData> filterData; // 210
    CName visibilityAnimationParam; // 220
    uint8_t unk228[0x230 - 0x228]; // 228
    physics::FilterDataSource filterDataSource; // 230
    physics::SimulationType simulationType; // 231
    bool startInactive; // 232
    bool useResourceSimulationType; // 233
    uint8_t unk234[0x240 - 0x234]; // 234
#endif
};
RED4EXT_ASSERT_SIZE(PhysicalMeshComponent, 0x240);
} // namespace ent
using entPhysicalMeshComponent = ent::PhysicalMeshComponent;
using PhysicalMeshComponent = ent::PhysicalMeshComponent;
} // namespace RED4ext

// clang-format on
