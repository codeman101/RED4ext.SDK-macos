#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

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

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_C8[0xC8 - ::RED4ext::Detail::DataSize<world::Node>];
    DataBuffer compiledData; // C8
    uint8_t unk_F0[0xF0 - (0xC8 + sizeof(compiledData))];
    uint64_t sectorHash; // F0
    uint8_t unk_F8[0xF8 - (0xF0 + sizeof(sectorHash))];
    uint16_t numActors; // F8
    uint8_t unk_FA[0xFA - (0xF8 + sizeof(numActors))];
    uint16_t numShapeInfos; // FA
    uint8_t unk_FC[0xFC - (0xFA + sizeof(numShapeInfos))];
    uint16_t numShapePositions; // FC
    uint8_t unk_FE[0xFE - (0xFC + sizeof(numShapePositions))];
    uint16_t numShapeRotations; // FE
    uint8_t unk_100[0x100 - (0xFE + sizeof(numShapeRotations))];
    uint16_t numScales; // 100
    uint8_t unk_102[0x102 - (0x100 + sizeof(numScales))];
    uint16_t numMaterials; // 102
    uint8_t unk_104[0x104 - (0x102 + sizeof(numMaterials))];
    uint16_t numPresets; // 104
    uint8_t unk_106[0x106 - (0x104 + sizeof(numPresets))];
    uint16_t numShapeIndices; // 106
    uint8_t unk_108[0x108 - (0x106 + sizeof(numShapeIndices))];
    uint16_t numMaterialIndices; // 108
    uint8_t unk_10A[0x10A - (0x108 + sizeof(numMaterialIndices))];
    uint8_t lod; // 10A
    uint8_t unk_10B[0x10B - (0x10A + sizeof(lod))];
    uint8_t resourceVersion; // 10B
    uint8_t unk_110[0x110 - (0x10B + sizeof(resourceVersion))];
    Vector4 extents; // 110
#else
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

#endif
};
RED4EXT_ASSERT_SIZE(CollisionNode, 0xC0);
} // namespace world
using worldCollisionNode = world::CollisionNode;
} // namespace RED4ext

// clang-format on
