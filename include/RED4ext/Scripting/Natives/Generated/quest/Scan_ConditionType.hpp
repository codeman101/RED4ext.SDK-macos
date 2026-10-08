#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ObjectScanEventType.hpp>

namespace RED4ext
{
namespace quest
{
struct Scan_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questScan_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IObjectConditionType>];
    game::EntityReference objectRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(objectRef))];
    quest::ObjectScanEventType eventType; // 70
#else
    game::EntityReference objectRef; // 38
    quest::ObjectScanEventType eventType; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
#endif
};
RED4EXT_ASSERT_SIZE(Scan_ConditionType, 0x80);
} // namespace quest
using questScan_ConditionType = quest::Scan_ConditionType;
} // namespace RED4ext

// clang-format on
