#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct RadioTrack_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questRadioTrack_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISystemConditionType>];
    CName radioTrack; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(radioTrack))];
    bool inverted; // 40
#else
    CName radioTrack; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
#endif
};
RED4EXT_ASSERT_SIZE(RadioTrack_ConditionType, 0x48);
} // namespace quest
using questRadioTrack_ConditionType = quest::RadioTrack_ConditionType;
} // namespace RED4ext

// clang-format on
