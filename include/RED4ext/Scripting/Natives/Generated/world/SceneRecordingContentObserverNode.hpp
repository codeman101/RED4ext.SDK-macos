#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SceneRecordingNodeFilter.hpp>

namespace RED4ext
{
namespace world
{
struct SceneRecordingContentObserverNode : world::Node
{
    static constexpr const char* NAME = "worldSceneRecordingContentObserverNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<world::Node>];
    world::SceneRecordingNodeFilter filter; // 38
#else
    world::SceneRecordingNodeFilter filter; // 38
#endif
};
RED4EXT_ASSERT_SIZE(SceneRecordingContentObserverNode, 0x68);
} // namespace world
using worldSceneRecordingContentObserverNode = world::SceneRecordingContentObserverNode;
} // namespace RED4ext

// clang-format on
