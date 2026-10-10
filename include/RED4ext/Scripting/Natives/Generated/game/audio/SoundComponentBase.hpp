#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::audio
{
struct __declspec(align(0x10)) SoundComponentBase : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameaudioSoundComponentBase";
    static constexpr const char* ALIAS = "SoundComponentBase";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    CName audioName; // 120
    uint8_t unk_131[0x131 - (0x120 + sizeof(audioName))];
    bool applyObstruction; // 131
    uint8_t unk_132[0x132 - (0x131 + sizeof(applyObstruction))];
    bool applyAcousticOcclusion; // 132
    uint8_t unk_133[0x133 - (0x132 + sizeof(applyAcousticOcclusion))];
    bool applyAcousticRepositioning; // 133
    uint8_t unk_138[0x138 - (0x133 + sizeof(applyAcousticRepositioning))];
    float obstructionChangeTime; // 138
    uint8_t unk_158[0x158 - (0x138 + sizeof(obstructionChangeTime))];
    float maxPlayDistance; // 158
#else
    CName audioName; // 120
    uint8_t unk128[0x131 - 0x128]; // 128
    bool applyObstruction; // 131
    bool applyAcousticOcclusion; // 132
    bool applyAcousticRepositioning; // 133
    uint8_t unk134[0x138 - 0x134]; // 134
    float obstructionChangeTime; // 138
    uint8_t unk13C[0x158 - 0x13C]; // 13C
    float maxPlayDistance; // 158
    uint8_t unk15C[0x180 - 0x15C]; // 15C
#endif
};
RED4EXT_ASSERT_SIZE(SoundComponentBase, 0x180);
} // namespace game::audio
using gameaudioSoundComponentBase = game::audio::SoundComponentBase;
using SoundComponentBase = game::audio::SoundComponentBase;
} // namespace RED4ext

// clang-format on
