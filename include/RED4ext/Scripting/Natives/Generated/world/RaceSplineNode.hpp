#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RaceSplineNodeOffset.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNode.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) RaceSplineNode : world::SpeedSplineNode
{
    static constexpr const char* NAME = "worldRaceSplineNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_C8[0xC8 - ::RED4ext::Detail::DataSize<world::SpeedSplineNode>];
    DynArray<world::RaceSplineNodeOffset> offsets; // C8
    uint8_t unk_104[0x104 - (0xC8 + sizeof(offsets))];
    float offsetDefault; // 104
#else
    DynArray<world::RaceSplineNodeOffset> offsets; // C8
    uint8_t unkD8[0x104 - 0xD8]; // D8
    float offsetDefault; // 104
    uint8_t unk108[0x110 - 0x108]; // 108
#endif
};
RED4EXT_ASSERT_SIZE(RaceSplineNode, 0x110);
} // namespace world
using worldRaceSplineNode = world::RaceSplineNode;
} // namespace RED4ext

// clang-format on
