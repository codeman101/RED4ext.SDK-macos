#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct AIDirectorSpawnNode : world::Node
{
    static constexpr const char* NAME = "worldAIDirectorSpawnNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    red::TagList tags; // 38
#else
    red::TagList tags; // 38
#endif
};
RED4EXT_ASSERT_SIZE(AIDirectorSpawnNode, 0x48);
} // namespace world
using worldAIDirectorSpawnNode = world::AIDirectorSpawnNode;
} // namespace RED4ext

// clang-format on
