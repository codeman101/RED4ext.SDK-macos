#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenDynamicTrafficSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace physics { struct ICollider; }

namespace ent
{
struct __declspec(align(0x10)) ColliderComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entColliderComponent";
    static constexpr const char* ALIAS = "ColliderComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_138[0x138 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    DynArray<Handle<physics::ICollider>> colliders; // 138
    uint8_t unk_148[0x148 - (0x138 + sizeof(colliders))];
    physics::SimulationType simulationType; // 148
    uint8_t unk_149[0x149 - (0x148 + sizeof(simulationType))];
    bool startInactive; // 149
    uint8_t unk_14A[0x14A - (0x149 + sizeof(startInactive))];
    bool useCCD; // 14A
    uint8_t unk_14C[0x14C - (0x14A + sizeof(useCCD))];
    float massOverride; // 14C
    uint8_t unk_150[0x150 - (0x14C + sizeof(massOverride))];
    float mass; // 150
    uint8_t unk_154[0x154 - (0x150 + sizeof(mass))];
    float volume; // 154
    uint8_t unk_158[0x158 - (0x154 + sizeof(volume))];
    Vector3 inertia; // 158
    uint8_t unk_170[0x170 - (0x158 + sizeof(inertia))];
    Transform comOffset; // 170
    uint8_t unk_190[0x190 - (0x170 + sizeof(comOffset))];
    Handle<physics::FilterData> filterData; // 190
    uint8_t unk_1A0[0x1A0 - (0x190 + sizeof(filterData))];
    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 1A0
#else
    uint8_t unk120[0x138 - 0x120]; // 120
    DynArray<Handle<physics::ICollider>> colliders; // 138
    physics::SimulationType simulationType; // 148
    bool startInactive; // 149
    bool useCCD; // 14A
    uint8_t unk14B[0x14C - 0x14B]; // 14B
    float massOverride; // 14C
    float mass; // 150
    float volume; // 154
    Vector3 inertia; // 158
    uint8_t unk164[0x170 - 0x164]; // 164
    Transform comOffset; // 170
    Handle<physics::FilterData> filterData; // 190
    TrafficGenDynamicTrafficSetting dynamicTrafficSetting; // 1A0
    uint8_t unk1A2[0x1C0 - 0x1A2]; // 1A2
#endif
};
RED4EXT_ASSERT_SIZE(ColliderComponent, 0x1C0);
} // namespace ent
using entColliderComponent = ent::ColliderComponent;
using ColliderComponent = ent::ColliderComponent;
} // namespace RED4ext

// clang-format on
