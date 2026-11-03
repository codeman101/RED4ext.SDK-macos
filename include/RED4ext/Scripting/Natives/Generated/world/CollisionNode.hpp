#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/worldCollisionNode.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CollisionNode : world::Node
{
    static constexpr const char* NAME = "worldCollisionNode";
    static constexpr const char* ALIAS = NAME;

    CollisionDataView GetCollisionDataView() const noexcept
    {
        return {compiledData, 0, numActors, numShapeInfos, numShapePositions, numShapeRotations, numScales,
                numMaterials, numPresets, numShapeIndices, numMaterialIndices};
    }

// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<world::Node>];
    DataBuffer compiledData; // 58
    uint8_t unk_80[0x80 - (0x58 + sizeof(compiledData))];
    uint64_t sectorHash; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(sectorHash))];
    uint16_t numActors; // 88
    uint8_t unk_8A[0x8A - (0x88 + sizeof(numActors))];
    uint16_t numShapeInfos; // 8A
    uint8_t unk_8C[0x8C - (0x8A + sizeof(numShapeInfos))];
    uint16_t numShapePositions; // 8C
    uint8_t unk_8E[0x8E - (0x8C + sizeof(numShapePositions))];
    uint16_t numShapeRotations; // 8E
    uint8_t unk_90[0x90 - (0x8E + sizeof(numShapeRotations))];
    uint16_t numScales; // 90
    uint8_t unk_92[0x92 - (0x90 + sizeof(numScales))];
    uint16_t numMaterials; // 92
    uint8_t unk_94[0x94 - (0x92 + sizeof(numMaterials))];
    uint16_t numPresets; // 94
    uint8_t unk_96[0x96 - (0x94 + sizeof(numPresets))];
    uint16_t numShapeIndices; // 96
    uint8_t unk_98[0x98 - (0x96 + sizeof(numShapeIndices))];
    uint16_t numMaterialIndices; // 98
    uint8_t unk_9A[0x9A - (0x98 + sizeof(numMaterialIndices))];
    uint8_t lod; // 9A
    uint8_t unk_9B[0x9B - (0x9A + sizeof(lod))];
    uint8_t resourceVersion; // 9B
    uint8_t unk_A0[0xA0 - (0x9B + sizeof(resourceVersion))];
    Vector4 extents; // A0

};
RED4EXT_ASSERT_SIZE(CollisionNode, 0xC0);
} // namespace world
using worldCollisionNode = world::CollisionNode;
} // namespace RED4ext

// clang-format on
#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/worldCollisionNode.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(world::CollisionNode, 0xC0);
using worldCollisionNode = world::CollisionNode;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CollisionNode : world::Node
{
    static constexpr const char* NAME = "worldCollisionNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x60 - 0x38]; // 38
    DataBuffer compiledData; // 60
    uint64_t sectorHash; // 88
    uint16_t numActors; // 90
    uint16_t numShapeInfos; // 92
    uint16_t numShapePositions; // 94
    uint16_t numShapeRotations; // 96
    uint16_t numScales; // 98
    uint16_t numMaterials; // 9A
    uint16_t numPresets; // 9C
    uint16_t numShapeIndices; // 9E
    uint16_t numMaterialIndices; // A0
    uint8_t lod; // A2
    uint8_t resourceVersion; // A3
    uint8_t unkA4[0xB0 - 0xA4]; // A4
    Vector4 extents; // B0
};
RED4EXT_ASSERT_SIZE(CollisionNode, 0xC0);
} // namespace world
using worldCollisionNode = world::CollisionNode;
} // namespace RED4ext
*/

// clang-format on
#endif
