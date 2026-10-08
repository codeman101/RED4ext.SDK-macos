#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/QuestType.hpp>

namespace RED4ext
{
namespace world
{
struct StaticQuestMarkerNode : world::Node
{
    static constexpr const char* NAME = "worldStaticQuestMarkerNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<world::Node>];
    world::QuestType questType; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(questType))];
    CString questLabel; // 50
    uint8_t unk_70[0x70 - (0x50 + sizeof(questLabel))];
    float questMarkerHeight; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(questMarkerHeight))];
    CName mapFilteringTag; // 78
#else
    uint8_t unk38[0x48 - 0x38]; // 38
    world::QuestType questType; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CString questLabel; // 50
    float questMarkerHeight; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName mapFilteringTag; // 78
#endif
};
RED4EXT_ASSERT_SIZE(StaticQuestMarkerNode, 0x80);
} // namespace world
using worldStaticQuestMarkerNode = world::StaticQuestMarkerNode;
} // namespace RED4ext

// clang-format on
