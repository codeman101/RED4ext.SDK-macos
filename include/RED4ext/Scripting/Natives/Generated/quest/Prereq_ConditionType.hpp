#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace quest
{
struct Prereq_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questPrereq_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    game::EntityReference objectRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(objectRef))];
    bool isObjectPlayer; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(isObjectPlayer))];
    Handle<game::IPrereq> prereq; // 78
#else
    game::EntityReference objectRef; // 38
    bool isObjectPlayer; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    Handle<game::IPrereq> prereq; // 78
#endif
};
RED4EXT_ASSERT_SIZE(Prereq_ConditionType, 0x88);
} // namespace quest
using questPrereq_ConditionType = quest::Prereq_ConditionType;
} // namespace RED4ext

// clang-format on
