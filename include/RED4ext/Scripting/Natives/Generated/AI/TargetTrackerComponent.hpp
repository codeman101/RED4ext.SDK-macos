#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) TargetTrackerComponent : game::Component
{
    static constexpr const char* NAME = "AITargetTrackerComponent";
    static constexpr const char* ALIAS = "TargetTrackerComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_1FD[0x1FD - ::RED4ext::Detail::DataSize<game::Component>];
    bool TriggersCombat; // 1FD
#else
    uint8_t unkA8[0x1FD - 0xA8]; // A8
    bool TriggersCombat; // 1FD
    uint8_t unk1FE[0x290 - 0x1FE]; // 1FE
#endif
};
RED4EXT_ASSERT_SIZE(TargetTrackerComponent, 0x290);
} // namespace AI
using AITargetTrackerComponent = AI::TargetTrackerComponent;
using TargetTrackerComponent = AI::TargetTrackerComponent;
} // namespace RED4ext

// clang-format on
