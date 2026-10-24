#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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
    uint8_t unk_B0[0xB0 - ::RED4ext::Detail::DataSize<world::CollisionNode>];
    DynArray<uint32_t> populationIndex; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(populationIndex))];
    uint64_t foliageResourceHash; // C0
    uint8_t unk_C8[0xC8 - (0xC0 + sizeof(foliageResourceHash))];
    uint32_t dataVersion; // C8
#else
    DynArray<uint32_t> populationIndex; // C0
    uint64_t foliageResourceHash; // D0
    uint32_t dataVersion; // D8
    uint8_t unkDC[0xE0 - 0xDC]; // DC
#endif

};
RED4EXT_ASSERT_SIZE(FoliageDestructionNode, 0xE0);
} // namespace world
using worldFoliageDestructionNode = world::FoliageDestructionNode;
} // namespace RED4ext

// clang-format on
