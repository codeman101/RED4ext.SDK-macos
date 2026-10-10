#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world { struct ITriggerAreaNotifer; }

namespace world
{
struct TriggerAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldTriggerAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<world::AreaShapeNode>];
    DynArray<Handle<world::ITriggerAreaNotifer>> notifiers; // 60
#else
    DynArray<Handle<world::ITriggerAreaNotifer>> notifiers; // 60
#endif
};
RED4EXT_ASSERT_SIZE(TriggerAreaNode, 0x70);
} // namespace world
using worldTriggerAreaNode = world::TriggerAreaNode;
} // namespace RED4ext

// clang-format on
