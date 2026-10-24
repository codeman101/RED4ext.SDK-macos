#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntityEmitterContextType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AudioSyncs.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) AudioEmitterComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameAudioEmitterComponent";
    static constexpr const char* ALIAS = "audioEmitter";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_138[0x138 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    float updateDistance; // 138
    uint8_t unk_140[0x140 - (0x138 + sizeof(updateDistance))];
    CName EmitterName; // 140
    uint8_t unk_148[0x148 - (0x140 + sizeof(EmitterName))];
    audio::EntityEmitterContextType EmitterType; // 148
    uint8_t unk_150[0x150 - (0x148 + sizeof(EmitterType))];
    game::AudioSyncs OnAttach; // 150
    uint8_t unk_190[0x190 - (0x150 + sizeof(OnAttach))];
    game::AudioSyncs OnDetach; // 190
    uint8_t unk_1D0[0x1D0 - (0x190 + sizeof(OnDetach))];
    DynArray<CName> Tags; // 1D0
    uint8_t unk_1E0[0x1E0 - (0x1D0 + sizeof(Tags))];
    red::TagList TagList; // 1E0
    uint8_t unk_1F0[0x1F0 - (0x1E0 + sizeof(TagList))];
    CName emitterMetadataName; // 1F0
#else
    uint8_t unk120[0x138 - 0x120]; // 120
    float updateDistance; // 138
    uint8_t unk13C[0x140 - 0x13C]; // 13C
    CName EmitterName; // 140
    audio::EntityEmitterContextType EmitterType; // 148
    uint8_t unk14C[0x150 - 0x14C]; // 14C
    game::AudioSyncs OnAttach; // 150
    game::AudioSyncs OnDetach; // 190
    DynArray<CName> Tags; // 1D0
    red::TagList TagList; // 1E0
    CName emitterMetadataName; // 1F0
    uint8_t unk1F8[0x200 - 0x1F8]; // 1F8
#endif
};
RED4EXT_ASSERT_SIZE(AudioEmitterComponent, 0x200);
} // namespace game
using gameAudioEmitterComponent = game::AudioEmitterComponent;
using audioEmitter = game::AudioEmitterComponent;
} // namespace RED4ext

// clang-format on
