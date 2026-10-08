#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct AcousticPortalNode : world::Node
{
    static constexpr const char* NAME = "worldAcousticPortalNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_32[0x32 - ::RED4ext::Detail::DataSize<world::Node>];
    uint8_t radius; // 32
    uint8_t unk_33[0x33 - (0x32 + sizeof(radius))];
    uint8_t nominalRadius; // 33
#else
    uint8_t radius; // 38
    uint8_t nominalRadius; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
#endif
};
RED4EXT_ASSERT_SIZE(AcousticPortalNode, 0x40);
} // namespace world
using worldAcousticPortalNode = world::AcousticPortalNode;
} // namespace RED4ext

// clang-format on
