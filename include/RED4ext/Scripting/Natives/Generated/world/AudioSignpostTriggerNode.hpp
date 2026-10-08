#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct AudioSignpostTriggerNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldAudioSignpostTriggerNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::TriggerAreaNode>];
    CName enterSignpost; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(enterSignpost))];
    CName exitSignpost; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(exitSignpost))];
    CName reEnterSignpost; // 80
    uint8_t unk_88[0x88 - (0x80 + sizeof(reEnterSignpost))];
    CName preExitSignpost; // 88
    uint8_t unk_90[0x90 - (0x88 + sizeof(preExitSignpost))];
    float exitCooldown; // 90
#else
    CName enterSignpost; // 70
    CName exitSignpost; // 78
    CName reEnterSignpost; // 80
    CName preExitSignpost; // 88
    float exitCooldown; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
#endif
};
RED4EXT_ASSERT_SIZE(AudioSignpostTriggerNode, 0x98);
} // namespace world
using worldAudioSignpostTriggerNode = world::AudioSignpostTriggerNode;
} // namespace RED4ext

// clang-format on
