#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISensesConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Stimuli_ConditionType : quest::ISensesConditionType
{
    static constexpr const char* NAME = "questStimuli_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISensesConditionType>];
    game::EntityReference instigatorRef; // 38
    uint8_t unk_70[0x70 - (0x38 + sizeof(instigatorRef))];
    bool isPlayerInstigator; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(isPlayerInstigator))];
    game::EntityReference targetRef; // 78
    uint8_t unk_B0[0xB0 - (0x78 + sizeof(targetRef))];
    game::data::StimType type; // B0
#else
    game::EntityReference instigatorRef; // 38
    bool isPlayerInstigator; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    game::EntityReference targetRef; // 78
    game::data::StimType type; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
#endif
};
RED4EXT_ASSERT_SIZE(Stimuli_ConditionType, 0xC0);
} // namespace quest
using questStimuli_ConditionType = quest::Stimuli_ConditionType;
} // namespace RED4ext

// clang-format on
