#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITriggerDestructionComponent.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct __declspec(align(0x10)) BodyTriggerDestructionComponent : game::ITriggerDestructionComponent
{
    static constexpr const char* NAME = "gameBodyTriggerDestructionComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_98[0x98 - ::RED4ext::Detail::DataSize<game::ITriggerDestructionComponent>];
    CName colliderComponentName; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(colliderComponentName))];
    Handle<physics::FilterData> filterData; // A0
    uint8_t unk_B0[0xB0 - (0xA0 + sizeof(filterData))];
    float impulseForce; // B0
    uint8_t unk_B4[0xB4 - (0xB0 + sizeof(impulseForce))];
    float impulseRadius; // B4
#else
    CName colliderComponentName; // 98
    Handle<physics::FilterData> filterData; // A0
    float impulseForce; // B0
    float impulseRadius; // B4
    uint8_t unkB8[0x120 - 0xB8]; // B8
#endif
};
RED4EXT_ASSERT_SIZE(BodyTriggerDestructionComponent, 0x120);
} // namespace game
using gameBodyTriggerDestructionComponent = game::BodyTriggerDestructionComponent;
} // namespace RED4ext

// clang-format on
