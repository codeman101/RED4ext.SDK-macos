#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CGIDataResource;

namespace world
{
struct GINode : world::Node
{
    static constexpr const char* NAME = "worldGINode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<CGIDataResource> data; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(data))];
    NativeArray<int16_t, 3> location; // 40
#else
    RaRef<CGIDataResource> data; // 38
    NativeArray<int16_t, 3> location; // 40
    uint8_t unk46[0x48 - 0x46]; // 46
#endif
};
RED4EXT_ASSERT_SIZE(GINode, 0x48);
} // namespace world
using worldGINode = world::GINode;
} // namespace RED4ext

// clang-format on
