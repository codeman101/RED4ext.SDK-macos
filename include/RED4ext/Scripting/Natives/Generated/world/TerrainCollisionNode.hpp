#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) TerrainCollisionNode : world::Node
{
    static constexpr const char* NAME = "worldTerrainCollisionNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    DynArray<CName> materials; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(materials))];
    DynArray<uint8_t> materialIndices; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(materialIndices))];
    DeferredDataBuffer heightfieldGeometry; // 58
    uint8_t unk_B0[0xB0 - (0x58 + sizeof(heightfieldGeometry))];
    WorldTransform actorTransform; // B0
    uint8_t unk_D0[0xD0 - (0xB0 + sizeof(actorTransform))];
    Vector4 extents; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(extents))];
    float streamingDistance; // E0
    uint8_t unk_E4[0xE4 - (0xE0 + sizeof(streamingDistance))];
    float rowScale; // E4
    uint8_t unk_E8[0xE8 - (0xE4 + sizeof(rowScale))];
    float columnScale; // E8
    uint8_t unk_EC[0xEC - (0xE8 + sizeof(columnScale))];
    float heightScale; // EC
    uint8_t unk_F0[0xF0 - (0xEC + sizeof(heightScale))];
    bool increaseStreamingDistance; // F0
#else
    DynArray<CName> materials; // 38
    DynArray<uint8_t> materialIndices; // 48
    DeferredDataBuffer heightfieldGeometry; // 58
    WorldTransform actorTransform; // B0
    Vector4 extents; // D0
    float streamingDistance; // E0
    float rowScale; // E4
    float columnScale; // E8
    float heightScale; // EC
    bool increaseStreamingDistance; // F0
    uint8_t unkF1[0x100 - 0xF1]; // F1
#endif
};
RED4EXT_ASSERT_SIZE(TerrainCollisionNode, 0x100);
} // namespace world
using worldTerrainCollisionNode = world::TerrainCollisionNode;
} // namespace RED4ext

// clang-format on
