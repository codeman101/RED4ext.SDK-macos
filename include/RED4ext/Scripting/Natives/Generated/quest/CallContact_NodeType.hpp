#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallVisuals.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct CallContact_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questCallContact_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IPhoneManagerNodeType>];
    Handle<game::JournalPath> caller; // 38
    uint8_t unk_48[0x48 - (0x38 + sizeof(caller))];
    Handle<game::JournalPath> addressee; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(addressee))];
    quest::PhoneCallPhase phase; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(phase))];
    quest::PhoneCallMode mode; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(mode))];
    NodeRef prefabNodeRef; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(prefabNodeRef))];
    bool applyPhoneRestriction; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(applyPhoneRestriction))];
    bool isRejectable; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(isRejectable))];
    bool showAvatar; // 6A
    uint8_t unk_6C[0x6C - (0x6A + sizeof(showAvatar))];
    quest::PhoneCallVisuals visuals; // 6C
#else
    Handle<game::JournalPath> caller; // 38
    Handle<game::JournalPath> addressee; // 48
    quest::PhoneCallPhase phase; // 58
    quest::PhoneCallMode mode; // 5C
    NodeRef prefabNodeRef; // 60
    bool applyPhoneRestriction; // 68
    bool isRejectable; // 69
    bool showAvatar; // 6A
    uint8_t unk6B[0x6C - 0x6B]; // 6B
    quest::PhoneCallVisuals visuals; // 6C
#endif
};
RED4EXT_ASSERT_SIZE(CallContact_NodeType, 0x70);
} // namespace quest
using questCallContact_NodeType = quest::CallContact_NodeType;
} // namespace RED4ext

// clang-format on
