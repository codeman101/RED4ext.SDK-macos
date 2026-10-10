#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EmbeddedGraphNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/QuestPrefabEntry.hpp>

namespace RED4ext
{
namespace quest { struct GraphDefinition; }
namespace quest { struct QuestPhaseResource; }

namespace quest
{
struct PhaseNodeDefinition : quest::EmbeddedGraphNodeDefinition
{
    static constexpr const char* NAME = "questPhaseNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_60[0x60 - ::RED4ext::Detail::DataSize<quest::EmbeddedGraphNodeDefinition>];
    Handle<quest::GraphDefinition> phaseGraph; // 60
    uint8_t unk_70[0x70 - (0x60 + sizeof(phaseGraph))];
    DynArray<quest::QuestPrefabEntry> phaseInstancePrefabs; // 70
    uint8_t unk_80[0x80 - (0x70 + sizeof(phaseInstancePrefabs))];
    NodeRef unfreezingTriggerNodeRef; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(unfreezingTriggerNodeRef))];
    RaRef<quest::QuestPhaseResource> phaseResource; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(phaseResource))];
    bool saveLock; // 90
#else
    uint8_t unk48[0x60 - 0x48]; // 48
    Handle<quest::GraphDefinition> phaseGraph; // 60
    DynArray<quest::QuestPrefabEntry> phaseInstancePrefabs; // 70
    NodeRef unfreezingTriggerNodeRef; // 80
    RaRef<quest::QuestPhaseResource> phaseResource; // 88
    bool saveLock; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
#endif
};
RED4EXT_ASSERT_SIZE(PhaseNodeDefinition, 0x98);
} // namespace quest
using questPhaseNodeDefinition = quest::PhaseNodeDefinition;
} // namespace RED4ext

// clang-format on
