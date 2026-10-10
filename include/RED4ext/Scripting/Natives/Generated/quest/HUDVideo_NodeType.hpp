#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
struct Bink;

namespace quest
{
struct HUDVideo_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questHUDVideo_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    RaRef<Bink> video; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(video))];
    Vector2 position; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(position))];
    Vector2 size; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(size))];
    CName audioEvent; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(audioEvent))];
    bool syncToAudio; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(syncToAudio))];
    bool retriggerAudioOnLoop; // 59
    uint8_t unk_5A[0x5A - (0x59 + sizeof(retriggerAudioOnLoop))];
    bool skippable; // 5A
    uint8_t unk_5B[0x5B - (0x5A + sizeof(skippable))];
    bool looped; // 5B
    uint8_t unk_5C[0x5C - (0x5B + sizeof(looped))];
    bool forceVideoFrameRate; // 5C
    uint8_t unk_5D[0x5D - (0x5C + sizeof(forceVideoFrameRate))];
    bool playOnHud; // 5D
    uint8_t unk_5E[0x5E - (0x5D + sizeof(playOnHud))];
    bool fullScreen; // 5E
    uint8_t unk_5F[0x5F - (0x5E + sizeof(fullScreen))];
    bool useFullscreenVideoState; // 5F
    uint8_t unk_60[0x60 - (0x5F + sizeof(useFullscreenVideoState))];
    bool keepWidescreenAspectRatio; // 60
#else
    RaRef<Bink> video; // 38
    Vector2 position; // 40
    Vector2 size; // 48
    CName audioEvent; // 50
    bool syncToAudio; // 58
    bool retriggerAudioOnLoop; // 59
    bool skippable; // 5A
    bool looped; // 5B
    bool forceVideoFrameRate; // 5C
    bool playOnHud; // 5D
    bool fullScreen; // 5E
    bool useFullscreenVideoState; // 5F
    bool keepWidescreenAspectRatio; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
#endif
};
RED4EXT_ASSERT_SIZE(HUDVideo_NodeType, 0x68);
} // namespace quest
using questHUDVideo_NodeType = quest::HUDVideo_NodeType;
} // namespace RED4ext

// clang-format on
