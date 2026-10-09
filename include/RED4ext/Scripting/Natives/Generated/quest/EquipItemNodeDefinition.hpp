#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest { struct EquipItemParams; }
namespace quest { struct ObservableUniversalRef; }

namespace quest
{
struct EquipItemNodeDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questEquipItemNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<quest::AICommandNodeBase>];
    Handle<quest::ObservableUniversalRef> entityReference; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(entityReference))];
    Handle<quest::EquipItemParams> params; // 60
#else
    uint8_t unk48[0x50 - 0x48]; // 48
    Handle<quest::ObservableUniversalRef> entityReference; // 50
    Handle<quest::EquipItemParams> params; // 60
#endif
};
RED4EXT_ASSERT_SIZE(EquipItemNodeDefinition, 0x70);
} // namespace quest
using questEquipItemNodeDefinition = quest::EquipItemNodeDefinition;
} // namespace RED4ext

// clang-format on
