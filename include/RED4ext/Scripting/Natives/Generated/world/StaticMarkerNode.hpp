#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SocketNode.hpp>

namespace RED4ext
{
namespace world { struct IMarker; }

namespace world
{
struct StaticMarkerNode : world::SocketNode
{
    static constexpr const char* NAME = "worldStaticMarkerNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::SocketNode>];
    Handle<world::IMarker> data; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(data))];
    red::TagList tags; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(tags))];
    bool isEnabled; // 58
#else
    Handle<world::IMarker> data; // 38
    red::TagList tags; // 48
    bool isEnabled; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
#endif
};
RED4EXT_ASSERT_SIZE(StaticMarkerNode, 0x60);
} // namespace world
using worldStaticMarkerNode = world::StaticMarkerNode;
} // namespace RED4ext

// clang-format on
