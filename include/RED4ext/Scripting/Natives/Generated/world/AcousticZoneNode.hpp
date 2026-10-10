#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct AcousticZoneNode : world::Node
{
    static constexpr const char* NAME = "worldAcousticZoneNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_32[0x32 - ::RED4ext::Detail::DataSize<world::Node>];
    bool isBlocker; // 32
    uint8_t unk_38[0x38 - (0x32 + sizeof(isBlocker))];
    CName tagName; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(tagName))];
    float tagSpread; // 40
#else
    bool isBlocker; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName tagName; // 40
    float tagSpread; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(AcousticZoneNode, 0x50);
} // namespace world
using worldAcousticZoneNode = world::AcousticZoneNode;
} // namespace RED4ext

// clang-format on
