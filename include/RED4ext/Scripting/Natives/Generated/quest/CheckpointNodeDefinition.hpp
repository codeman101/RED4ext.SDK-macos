#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct CheckpointNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questCheckpointNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_42[0x42 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    bool saveLock; // 42
    uint8_t unk_43[0x43 - (0x42 + sizeof(saveLock))];
    bool ignoreSaveLocks; // 43
    uint8_t unk_44[0x44 - (0x43 + sizeof(ignoreSaveLocks))];
    bool pointOfNoReturn; // 44
    uint8_t unk_45[0x45 - (0x44 + sizeof(pointOfNoReturn))];
    bool endGameSave; // 45
    uint8_t unk_46[0x46 - (0x45 + sizeof(endGameSave))];
    bool retryOnFailure; // 46
    uint8_t unk_48[0x48 - (0x46 + sizeof(retryOnFailure))];
    DynArray<TweakDBID> additionalEndGameRewardsTweak; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(additionalEndGameRewardsTweak))];
    CString debugString; // 58
#else
    bool saveLock; // 48
    bool ignoreSaveLocks; // 49
    bool pointOfNoReturn; // 4A
    bool endGameSave; // 4B
    bool retryOnFailure; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    DynArray<TweakDBID> additionalEndGameRewardsTweak; // 50
    CString debugString; // 60
#endif
};
RED4EXT_ASSERT_SIZE(CheckpointNodeDefinition, 0x80);
} // namespace quest
using questCheckpointNodeDefinition = quest::CheckpointNodeDefinition;
} // namespace RED4ext

// clang-format on
