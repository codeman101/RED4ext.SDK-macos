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
struct ToggleMinimapVisibility_NodeSubType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questToggleMinimapVisibility_NodeSubType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    game::EntityReference entityReference; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(entityReference))];
    bool show; // 70
#else
    game::EntityReference entityReference; // 38
    bool show; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(ToggleMinimapVisibility_NodeSubType, 0x78);
} // namespace quest
using questToggleMinimapVisibility_NodeSubType = quest::ToggleMinimapVisibility_NodeSubType;
} // namespace RED4ext

// clang-format on
