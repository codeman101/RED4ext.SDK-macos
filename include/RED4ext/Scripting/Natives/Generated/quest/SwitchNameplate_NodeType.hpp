#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SwitchNameplate_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSwitchNameplate_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    game::EntityReference puppetRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(puppetRef))];
    bool isPlayer; // 70
    uint8_t unk_71[0x71 - (0x70 + sizeof(isPlayer))];
    bool enable; // 71
    uint8_t unk_72[0x72 - (0x71 + sizeof(enable))];
    bool alternativeName; // 72
#else
    game::EntityReference puppetRef; // 38
    bool isPlayer; // 70
    bool enable; // 71
    bool alternativeName; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
#endif
};
RED4EXT_ASSERT_SIZE(SwitchNameplate_NodeType, 0x78);
} // namespace quest
using questSwitchNameplate_NodeType = quest::SwitchNameplate_NodeType;
} // namespace RED4ext

// clang-format on
