#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/FoliagePopulationSpanInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct FoliageCompiledResource; }

namespace world
{
struct __declspec(align(0x10)) FoliageNode : world::Node
{
    static constexpr const char* NAME = "worldFoliageNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CMesh> mesh; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(mesh))];
    CName meshAppearance; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(meshAppearance))];
    RaRef<world::FoliageCompiledResource> foliageResource; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(foliageResource))];
    Box foliageLocalBounds; // 50
    uint8_t unk_70[0x70 - (0x50 + sizeof(foliageLocalBounds))];
    world::FoliagePopulationSpanInfo populationSpanInfo; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(populationSpanInfo))];
    uint64_t destructionHash; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(destructionHash))];
    float autoHideDistanceScale; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(autoHideDistanceScale))];
    float lodDistanceScale; // 8C
    uint8_t unk_90[0x90 - (0x8C + sizeof(lodDistanceScale))];
    float streamingDistance; // 90
    uint8_t unk_94[0x94 - (0x90 + sizeof(streamingDistance))];
    float meshHeight; // 94
#else
    RaRef<CMesh> mesh; // 38
    CName meshAppearance; // 40
    RaRef<world::FoliageCompiledResource> foliageResource; // 48
    Box foliageLocalBounds; // 50
    world::FoliagePopulationSpanInfo populationSpanInfo; // 70
    uint64_t destructionHash; // 80
    float autoHideDistanceScale; // 88
    float lodDistanceScale; // 8C
    float streamingDistance; // 90
    float meshHeight; // 94
    uint8_t unk98[0xA0 - 0x98]; // 98
#endif
};
RED4EXT_ASSERT_SIZE(FoliageNode, 0xA0);
} // namespace world
using worldFoliageNode = world::FoliageNode;
} // namespace RED4ext

// clang-format on
