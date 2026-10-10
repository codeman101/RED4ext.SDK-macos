#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct InteriorMapNode : world::Node
{
    static constexpr const char* NAME = "worldInteriorMapNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    uint32_t version; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(version))];
    uint64_t coords; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(coords))];
    DeferredDataBuffer buffer; // 40
#else
    uint32_t version; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    uint64_t coords; // 40
    DeferredDataBuffer buffer; // 48
#endif
};
RED4EXT_ASSERT_SIZE(InteriorMapNode, 0xA0);
} // namespace world
using worldInteriorMapNode = world::InteriorMapNode;
} // namespace RED4ext

// clang-format on
