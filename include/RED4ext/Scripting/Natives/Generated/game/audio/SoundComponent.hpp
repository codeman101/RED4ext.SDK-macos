#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/SoundComponentBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/SoundComponentSubSystemWrapper.hpp>

namespace RED4ext
{
namespace game::audio
{
struct __declspec(align(0x10)) SoundComponent : game::audio::SoundComponentBase
{
    static constexpr const char* NAME = "gameaudioSoundComponent";
    static constexpr const char* ALIAS = "soundComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_190[0x190 - ::RED4ext::Detail::DataSize<game::audio::SoundComponentBase>];
    DynArray<game::audio::SoundComponentSubSystemWrapper> subSystems; // 190
    uint8_t unk_1A0[0x1A0 - (0x190 + sizeof(subSystems))];
    CName voEventOverride; // 1A0
    uint8_t unk_1F0[0x1F0 - (0x1A0 + sizeof(voEventOverride))];
    float minVocalizationRepeatTime; // 1F0
    uint8_t unk_1F4[0x1F4 - (0x1F0 + sizeof(minVocalizationRepeatTime))];
    float streamingDistance; // 1F4
#else
    uint8_t unk180[0x190 - 0x180]; // 180
    DynArray<game::audio::SoundComponentSubSystemWrapper> subSystems; // 190
    CName voEventOverride; // 1A0
    uint8_t unk1A8[0x1F0 - 0x1A8]; // 1A8
    float minVocalizationRepeatTime; // 1F0
    float streamingDistance; // 1F4
    uint8_t unk1F8[0x210 - 0x1F8]; // 1F8
#endif
};
RED4EXT_ASSERT_SIZE(SoundComponent, 0x210);
} // namespace game::audio
using gameaudioSoundComponent = game::audio::SoundComponent;
using soundComponent = game::audio::SoundComponent;
} // namespace RED4ext

// clang-format on
