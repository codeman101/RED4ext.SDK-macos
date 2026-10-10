#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct GameplayVOEvent : red::Event
{
    static constexpr const char* NAME = "entGameplayVOEvent";
    static constexpr const char* ALIAS = "SoundPlayVo";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName voContext; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(voContext))];
    bool isQuest; // 48
    uint8_t unk_4A[0x4A - (0x48 + sizeof(isQuest))];
    bool ignoreFrustumCheck; // 4A
    uint8_t unk_4B[0x4B - (0x4A + sizeof(ignoreFrustumCheck))];
    bool ignoreDistanceCheck; // 4B
    uint8_t unk_4C[0x4C - (0x4B + sizeof(ignoreDistanceCheck))];
    bool ignoreGlobalVoLimitCheck; // 4C
    uint8_t unk_50[0x50 - (0x4C + sizeof(ignoreGlobalVoLimitCheck))];
    CName debugInitialContext; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(debugInitialContext))];
    ent::EntityID answeringEntityId; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(answeringEntityId))];
    loc::VoiceoverContext overridingVoiceoverContext; // 60
    uint8_t unk_61[0x61 - (0x60 + sizeof(overridingVoiceoverContext))];
    loc::VoiceoverExpression overridingVoiceoverExpression; // 61
    uint8_t unk_62[0x62 - (0x61 + sizeof(overridingVoiceoverExpression))];
    bool overrideVoiceoverExpression; // 62
    uint8_t unk_63[0x63 - (0x62 + sizeof(overrideVoiceoverExpression))];
    uint8_t overridingVisualStyleValue; // 63
    uint8_t unk_64[0x64 - (0x63 + sizeof(overridingVisualStyleValue))];
    bool overrideVisualStyle; // 64
#else
    CName voContext; // 40
    bool isQuest; // 48
    uint8_t unk49[0x4A - 0x49]; // 49
    bool ignoreFrustumCheck; // 4A
    bool ignoreDistanceCheck; // 4B
    bool ignoreGlobalVoLimitCheck; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    CName debugInitialContext; // 50
    ent::EntityID answeringEntityId; // 58
    loc::VoiceoverContext overridingVoiceoverContext; // 60
    loc::VoiceoverExpression overridingVoiceoverExpression; // 61
    bool overrideVoiceoverExpression; // 62
    uint8_t overridingVisualStyleValue; // 63
    bool overrideVisualStyle; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
#endif
};
RED4EXT_ASSERT_SIZE(GameplayVOEvent, 0x68);
} // namespace ent
using entGameplayVOEvent = ent::GameplayVOEvent;
using SoundPlayVo = ent::GameplayVOEvent;
} // namespace RED4ext

// clang-format on
