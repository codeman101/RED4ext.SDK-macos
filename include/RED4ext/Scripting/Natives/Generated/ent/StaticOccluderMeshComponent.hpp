#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct __declspec(align(0x10)) StaticOccluderMeshComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entStaticOccluderMeshComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    Ref<CMesh> mesh; // 120
    uint8_t unk_138[0x138 - (0x120 + sizeof(mesh))];
    Vector3 scale; // 138
    uint8_t unk_144[0x144 - (0x138 + sizeof(scale))];
    Color color; // 144
    uint8_t unk_148[0x148 - (0x144 + sizeof(color))];
    vis::WorldOccluderType occluderType; // 148
    uint8_t unk_149[0x149 - (0x148 + sizeof(occluderType))];
    uint8_t occluderAutohideDistanceScale; // 149
#else
    Ref<CMesh> mesh; // 120
    Vector3 scale; // 138
    Color color; // 144
    vis::WorldOccluderType occluderType; // 148
    uint8_t occluderAutohideDistanceScale; // 149
    uint8_t unk14A[0x160 - 0x14A]; // 14A
#endif
};
RED4EXT_ASSERT_SIZE(StaticOccluderMeshComponent, 0x160);
} // namespace ent
using entStaticOccluderMeshComponent = ent::StaticOccluderMeshComponent;
} // namespace RED4ext

// clang-format on
