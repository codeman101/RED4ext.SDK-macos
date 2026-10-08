#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace audio { struct AmbientAreaSettings; }

namespace audio
{
struct AmbientAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "audioAmbientAreaNotifier";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    Handle<audio::AmbientAreaSettings> Settings; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(Settings))];
    bool usePhysicsObstruction; // C8
    uint8_t unk_C9[0xC9 - (0xC8 + sizeof(usePhysicsObstruction))];
    bool occlusionEnabled; // C9
    uint8_t unk_CA[0xCA - (0xC9 + sizeof(occlusionEnabled))];
    bool acousticRepositioningEnabled; // CA
    uint8_t unk_CC[0xCC - (0xCA + sizeof(acousticRepositioningEnabled))];
    float obstructionChangeTime; // CC
    uint8_t unk_D0[0xD0 - (0xCC + sizeof(obstructionChangeTime))];
    bool overrideRolloff; // D0
    uint8_t unk_D4[0xD4 - (0xD0 + sizeof(overrideRolloff))];
    float rolloffOverride; // D4
    uint8_t unk_D8[0xD8 - (0xD4 + sizeof(rolloffOverride))];
    bool useAutoOutdoorness; // D8
#else
    Handle<audio::AmbientAreaSettings> Settings; // B8
    bool usePhysicsObstruction; // C8
    bool occlusionEnabled; // C9
    bool acousticRepositioningEnabled; // CA
    uint8_t unkCB[0xCC - 0xCB]; // CB
    float obstructionChangeTime; // CC
    bool overrideRolloff; // D0
    uint8_t unkD1[0xD4 - 0xD1]; // D1
    float rolloffOverride; // D4
    bool useAutoOutdoorness; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
#endif
};
RED4EXT_ASSERT_SIZE(AmbientAreaNotifier, 0xE0);
} // namespace audio
using audioAmbientAreaNotifier = audio::AmbientAreaNotifier;
} // namespace RED4ext

// clang-format on
