#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct InstancedCrowdControlNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questInstancedCrowdControlNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::DisableableNodeDefinition>];
    CName crowdVariantTag; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(crowdVariantTag))];
    bool enable; // 50
#else
    CName crowdVariantTag; // 48
    bool enable; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
#endif
};
RED4EXT_ASSERT_SIZE(InstancedCrowdControlNodeDefinition, 0x58);
} // namespace quest
using questInstancedCrowdControlNodeDefinition = quest::InstancedCrowdControlNodeDefinition;
} // namespace RED4ext

// clang-format on
