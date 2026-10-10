#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct CameraShakeEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsCameraShakeEvent";
    static constexpr const char* ALIAS = "gameCameraShakeEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    float shakeStrength; // 40
#else
    float shakeStrength; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
#endif
};
RED4EXT_ASSERT_SIZE(CameraShakeEvent, 0x48);
} // namespace game::events
using gameeventsCameraShakeEvent = game::events::CameraShakeEvent;
using gameCameraShakeEvent = game::events::CameraShakeEvent;
} // namespace RED4ext

// clang-format on
