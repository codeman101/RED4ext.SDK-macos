#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace audio { struct AmbientAreaSettings; }

namespace ent
{
struct __declspec(align(0x10)) AmbientSoundEmitterComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entAmbientSoundEmitterComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    Handle<audio::AmbientAreaSettings> Settings; // 120
    uint8_t unk_140[0x140 - (0x120 + sizeof(Settings))];
    bool usePhysicsObstruction; // 140
    uint8_t unk_141[0x141 - (0x140 + sizeof(usePhysicsObstruction))];
    bool occlusionEnabled; // 141
    uint8_t unk_142[0x142 - (0x141 + sizeof(occlusionEnabled))];
    bool repositionEnabled; // 142
    uint8_t unk_144[0x144 - (0x142 + sizeof(repositionEnabled))];
    float obstructionChangeTime; // 144
#else
    Handle<audio::AmbientAreaSettings> Settings; // 120
    uint8_t unk130[0x140 - 0x130]; // 130
    bool usePhysicsObstruction; // 140
    bool occlusionEnabled; // 141
    bool repositionEnabled; // 142
    uint8_t unk143[0x144 - 0x143]; // 143
    float obstructionChangeTime; // 144
    uint8_t unk148[0x150 - 0x148]; // 148
#endif
};
RED4EXT_ASSERT_SIZE(AmbientSoundEmitterComponent, 0x150);
} // namespace ent
using entAmbientSoundEmitterComponent = ent::AmbientSoundEmitterComponent;
} // namespace RED4ext

// clang-format on
