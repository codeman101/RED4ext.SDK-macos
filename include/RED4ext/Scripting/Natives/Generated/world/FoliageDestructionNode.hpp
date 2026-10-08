#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CollisionNode.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) FoliageDestructionNode : world::CollisionNode
{
    static constexpr const char* NAME = "worldFoliageDestructionNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<world::CollisionNode>];
    DynArray<uint32_t> populationIndex; // 120
    uint8_t unk_130[0x130 - (0x120 + sizeof(populationIndex))];
    uint64_t foliageResourceHash; // 130
    uint8_t unk_138[0x138 - (0x130 + sizeof(foliageResourceHash))];
    uint32_t dataVersion; // 138
#else
    DynArray<uint32_t> populationIndex; // 120
    uint64_t foliageResourceHash; // 130
    uint32_t dataVersion; // 138
    uint8_t unk13C[0x140 - 0x13C]; // 13C
#endif
};
RED4EXT_ASSERT_SIZE(FoliageDestructionNode, 0x140);
} // namespace world
using worldFoliageDestructionNode = world::FoliageDestructionNode;
} // namespace RED4ext

// clang-format on
