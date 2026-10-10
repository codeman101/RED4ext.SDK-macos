#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct AIDirectorSpawnAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldAIDirectorSpawnAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    CName groupKey; // 60
#else
    CName groupKey; // 60
#endif
};
RED4EXT_ASSERT_SIZE(AIDirectorSpawnAreaNode, 0x68);
} // namespace world
using worldAIDirectorSpawnAreaNode = world::AIDirectorSpawnAreaNode;
} // namespace RED4ext

// clang-format on
