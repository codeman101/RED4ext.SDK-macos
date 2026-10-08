#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct JournalChangeMappinPhase_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalChangeMappinPhase_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_4C[0x4C - ::RED4ext::Detail::DataSize<quest::IJournal_NodeType>];
    game::data::MappinPhase phase; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(phase))];
    bool notifyUI; // 50
#else
    game::data::MappinPhase phase; // 50
    bool notifyUI; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
#endif
};
RED4EXT_ASSERT_SIZE(JournalChangeMappinPhase_NodeType, 0x58);
} // namespace quest
using questJournalChangeMappinPhase_NodeType = quest::JournalChangeMappinPhase_NodeType;
} // namespace RED4ext

// clang-format on
