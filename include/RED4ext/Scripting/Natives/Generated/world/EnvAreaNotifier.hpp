#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world { struct EnvironmentAreaParameters; }

namespace world
{
struct EnvAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldEnvAreaNotifier";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    Ref<world::EnvironmentAreaParameters> env; // B8
    uint8_t unk_D0[0xD0 - (0xB8 + sizeof(env))];
    WorldRenderAreaSettings params; // D0
    uint8_t unk_E0[0xE0 - (0xD0 + sizeof(params))];
    float blendTimeIn; // E0
    uint8_t unk_E4[0xE4 - (0xE0 + sizeof(blendTimeIn))];
    float blendTimeOut; // E4
    uint8_t unk_E8[0xE8 - (0xE4 + sizeof(blendTimeOut))];
    uint8_t priority; // E8
    uint8_t unk_EC[0xEC - (0xE8 + sizeof(priority))];
    float horizontalFadeDistance; // EC
    uint8_t unk_F0[0xF0 - (0xEC + sizeof(horizontalFadeDistance))];
    float verticalFadeDistance; // F0
    uint8_t unk_F8[0xF8 - (0xF0 + sizeof(verticalFadeDistance))];
    DynArray<CName> weatherStateNames; // F8
    uint8_t unk_108[0x108 - (0xF8 + sizeof(weatherStateNames))];
    DynArray<bool> weatherStateValues; // 108
    uint8_t unk_118[0x118 - (0x108 + sizeof(weatherStateValues))];
    uint8_t resourceVersion; // 118
#else
    Ref<world::EnvironmentAreaParameters> env; // B8
    WorldRenderAreaSettings params; // D0
    float blendTimeIn; // E0
    float blendTimeOut; // E4
    uint8_t priority; // E8
    uint8_t unkE9[0xEC - 0xE9]; // E9
    float horizontalFadeDistance; // EC
    float verticalFadeDistance; // F0
    uint8_t unkF4[0xF8 - 0xF4]; // F4
    DynArray<CName> weatherStateNames; // F8
    DynArray<bool> weatherStateValues; // 108
    uint8_t resourceVersion; // 118
    uint8_t unk119[0x120 - 0x119]; // 119
#endif
};
RED4EXT_ASSERT_SIZE(EnvAreaNotifier, 0x120);
} // namespace world
using worldEnvAreaNotifier = world::EnvAreaNotifier;
} // namespace RED4ext

// clang-format on
