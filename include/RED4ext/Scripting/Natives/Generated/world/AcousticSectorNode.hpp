#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { struct AcousticDataResource; }

namespace world
{
struct AcousticSectorNode : world::Node
{
    static constexpr const char* NAME = "worldAcousticSectorNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<world::AcousticDataResource> data; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(data))];
    uint32_t inSectorCoordsX; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(inSectorCoordsX))];
    uint32_t inSectorCoordsY; // 44
    uint8_t unk_48[0x48 - (0x44 + sizeof(inSectorCoordsY))];
    uint32_t inSectorCoordsZ; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(inSectorCoordsZ))];
    uint32_t generatorId; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(generatorId))];
    uint8_t edgeMask; // 50
#else
    RaRef<world::AcousticDataResource> data; // 38
    uint32_t inSectorCoordsX; // 40
    uint32_t inSectorCoordsY; // 44
    uint32_t inSectorCoordsZ; // 48
    uint32_t generatorId; // 4C
    uint8_t edgeMask; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(AcousticSectorNode, 0x58);
} // namespace world
using worldAcousticSectorNode = world::AcousticSectorNode;
} // namespace RED4ext

// clang-format on
