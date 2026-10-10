#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace audio { struct AmbientAreaSettings; }

namespace world
{
struct StaticSoundEmitterNode : world::Node
{
    static constexpr const char* NAME = "worldStaticSoundEmitterNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<world::Node>];
    float radius; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(radius))];
    CName audioName; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(audioName))];
    Handle<audio::AmbientAreaSettings> Settings; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(Settings))];
    bool usePhysicsObstruction; // 50
    uint8_t unk_51[0x51 - (0x50 + sizeof(usePhysicsObstruction))];
    bool occlusionEnabled; // 51
    uint8_t unk_52[0x52 - (0x51 + sizeof(occlusionEnabled))];
    bool acousticRepositioningEnabled; // 52
    uint8_t unk_54[0x54 - (0x52 + sizeof(acousticRepositioningEnabled))];
    float obstructionChangeTime; // 54
    uint8_t unk_58[0x58 - (0x54 + sizeof(obstructionChangeTime))];
    bool useDoppler; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(useDoppler))];
    float dopplerFactor; // 5C
    uint8_t unk_60[0x60 - (0x5C + sizeof(dopplerFactor))];
    bool setOpenDoorEmitter; // 60
    uint8_t unk_68[0x68 - (0x60 + sizeof(setOpenDoorEmitter))];
    CName emitterMetadataName; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(emitterMetadataName))];
    bool overrideRolloff; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(overrideRolloff))];
    float rolloffOverride; // 74
    uint8_t unk_78[0x78 - (0x74 + sizeof(rolloffOverride))];
    CName ambientPaletteTag; // 78
#else
    float radius; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName audioName; // 40
    Handle<audio::AmbientAreaSettings> Settings; // 48
    bool usePhysicsObstruction; // 58
    bool occlusionEnabled; // 59
    bool acousticRepositioningEnabled; // 5A
    uint8_t unk5B[0x5C - 0x5B]; // 5B
    float obstructionChangeTime; // 5C
    bool useDoppler; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    float dopplerFactor; // 64
    bool setOpenDoorEmitter; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    CName emitterMetadataName; // 70
    bool overrideRolloff; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    float rolloffOverride; // 7C
    CName ambientPaletteTag; // 80
#endif
};
RED4EXT_ASSERT_SIZE(StaticSoundEmitterNode, 0x88);
} // namespace world
using worldStaticSoundEmitterNode = world::StaticSoundEmitterNode;
} // namespace RED4ext

// clang-format on
