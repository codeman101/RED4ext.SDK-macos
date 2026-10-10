#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct TriggerVOEvent : red::Event
{
    static constexpr const char* NAME = "entTriggerVOEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName triggerBaseName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(triggerBaseName))];
    uint32_t triggerVariationIndex; // 48
    uint8_t unk_4C[0x4C - (0x48 + sizeof(triggerVariationIndex))];
    uint32_t triggerVariationNumber; // 4C
    uint8_t unk_68[0x68 - (0x4C + sizeof(triggerVariationNumber))];
    CName debugInitialContext; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(debugInitialContext))];
    uint64_t answeringEntityIDHash; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(answeringEntityIDHash))];
    bool ignoreGlobalVoLimitCheck; // 78
    uint8_t unk_79[0x79 - (0x78 + sizeof(ignoreGlobalVoLimitCheck))];
    loc::VoiceoverContext overridingVoContext; // 79
    uint8_t unk_7A[0x7A - (0x79 + sizeof(overridingVoContext))];
    loc::VoiceoverExpression overridingVoiceoverExpression; // 7A
    uint8_t unk_7B[0x7B - (0x7A + sizeof(overridingVoiceoverExpression))];
    bool overrideVoiceoverExpression; // 7B
    uint8_t unk_7C[0x7C - (0x7B + sizeof(overrideVoiceoverExpression))];
    uint8_t overridingVisualStyleValue; // 7C
    uint8_t unk_7D[0x7D - (0x7C + sizeof(overridingVisualStyleValue))];
    bool overrideVisualStyle; // 7D
#else
    CName triggerBaseName; // 40
    uint32_t triggerVariationIndex; // 48
    uint32_t triggerVariationNumber; // 4C
    uint8_t unk50[0x68 - 0x50]; // 50
    CName debugInitialContext; // 68
    uint64_t answeringEntityIDHash; // 70
    bool ignoreGlobalVoLimitCheck; // 78
    loc::VoiceoverContext overridingVoContext; // 79
    loc::VoiceoverExpression overridingVoiceoverExpression; // 7A
    bool overrideVoiceoverExpression; // 7B
    uint8_t overridingVisualStyleValue; // 7C
    bool overrideVisualStyle; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
#endif
};
RED4EXT_ASSERT_SIZE(TriggerVOEvent, 0x80);
} // namespace ent
using entTriggerVOEvent = ent::TriggerVOEvent;
} // namespace RED4ext

// clang-format on
