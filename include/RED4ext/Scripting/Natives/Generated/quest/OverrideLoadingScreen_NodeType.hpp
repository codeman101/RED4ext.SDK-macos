#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
struct Bink;

namespace quest
{
struct OverrideLoadingScreen_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questOverrideLoadingScreen_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    RaRef<Bink> video; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(video))];
    DynArray<RaRef<Bink>> videos; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(videos))];
    DynArray<CString> tooltips; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(tooltips))];
    float tooltipDuration; // 60
    uint8_t unk_64[0x64 - (0x60 + sizeof(tooltipDuration))];
    bool forceVideoFrameRate; // 64
    uint8_t unk_68[0x68 - (0x64 + sizeof(forceVideoFrameRate))];
    uint32_t minimumPlayCount; // 68
    uint8_t unk_6C[0x6C - (0x68 + sizeof(minimumPlayCount))];
    bool keepLoadingScreenWhileVideoIsPlaying; // 6C
    uint8_t unk_70[0x70 - (0x6C + sizeof(keepLoadingScreenWhileVideoIsPlaying))];
    float glitchEffectTime; // 70
#else
    RaRef<Bink> video; // 38
    DynArray<RaRef<Bink>> videos; // 40
    DynArray<CString> tooltips; // 50
    float tooltipDuration; // 60
    bool forceVideoFrameRate; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    uint32_t minimumPlayCount; // 68
    bool keepLoadingScreenWhileVideoIsPlaying; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    float glitchEffectTime; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
#endif
};
RED4EXT_ASSERT_SIZE(OverrideLoadingScreen_NodeType, 0x78);
} // namespace quest
using questOverrideLoadingScreen_NodeType = quest::OverrideLoadingScreen_NodeType;
} // namespace RED4ext

// clang-format on
