#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/QualitySetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct PerformanceAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldPerformanceAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::TriggerAreaNode>];
    DynArray<world::QualitySetting> qualitySettingsArray; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(qualitySettingsArray))];
    CName disableCrowdUniqueName; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(disableCrowdUniqueName))];
    float globalStreamingDistanceScale; // 88
    uint8_t unk_8C[0x8C - (0x88 + sizeof(globalStreamingDistanceScale))];
    float globalEntityLODDistanceScale; // 8C
#else
    DynArray<world::QualitySetting> qualitySettingsArray; // 70
    CName disableCrowdUniqueName; // 80
    float globalStreamingDistanceScale; // 88
    float globalEntityLODDistanceScale; // 8C
#endif
};
RED4EXT_ASSERT_SIZE(PerformanceAreaNode, 0x90);
} // namespace world
using worldPerformanceAreaNode = world::PerformanceAreaNode;
} // namespace RED4ext

// clang-format on
