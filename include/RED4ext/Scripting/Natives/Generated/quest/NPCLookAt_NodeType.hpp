#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct NPCLookAt_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questNPCLookAt_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::ISceneManagerNodeType>];
    bool assignLookAt; // 34
    uint8_t unk_35[0x35 - (0x34 + sizeof(assignLookAt))];
    bool refPlayer; // 35
    uint8_t unk_38[0x38 - (0x35 + sizeof(refPlayer))];
    game::EntityReference puppetRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(puppetRef))];
    game::EntityReference lookAtTargetRef; // 70
#else
    bool assignLookAt; // 38
    bool refPlayer; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
    game::EntityReference puppetRef; // 40
    game::EntityReference lookAtTargetRef; // 78
#endif
};
RED4EXT_ASSERT_SIZE(NPCLookAt_NodeType, 0xB0);
} // namespace quest
using questNPCLookAt_NodeType = quest::NPCLookAt_NodeType;
} // namespace RED4ext

// clang-format on
