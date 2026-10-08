#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITriggerDestructionComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PuppetTriggerDestructionComponent : game::ITriggerDestructionComponent
{
    static constexpr const char* NAME = "gamePuppetTriggerDestructionComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_CC[0xCC - ::RED4ext::Detail::DataSize<game::ITriggerDestructionComponent>];
    float projectionDist; // CC
#else
    uint8_t unk98[0xCC - 0x98]; // 98
    float projectionDist; // CC
#endif
};
RED4EXT_ASSERT_SIZE(PuppetTriggerDestructionComponent, 0xD0);
} // namespace game
using gamePuppetTriggerDestructionComponent = game::PuppetTriggerDestructionComponent;
} // namespace RED4ext

// clang-format on
