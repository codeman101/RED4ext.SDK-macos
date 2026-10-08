#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { struct TrafficPersistentResource; }

namespace world
{
struct TrafficPersistentNode : world::Node
{
    static constexpr const char* NAME = "worldTrafficPersistentNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    RaRef<world::TrafficPersistentResource> resource; // 38
#else
    RaRef<world::TrafficPersistentResource> resource; // 38
#endif
};
RED4EXT_ASSERT_SIZE(TrafficPersistentNode, 0x40);
} // namespace world
using worldTrafficPersistentNode = world::TrafficPersistentNode;
} // namespace RED4ext

// clang-format on
