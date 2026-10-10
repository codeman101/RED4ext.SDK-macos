#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AudioDismembermentPart.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) DismembermentAudioEvent : red::Event
{
    static constexpr const char* NAME = "entDismembermentAudioEvent";
    static constexpr const char* ALIAS = "DismembermentAudioEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    ent::AudioDismembermentPart bodyPart; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(bodyPart))];
    Vector4 position; // 50
#else
    ent::AudioDismembermentPart bodyPart; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Vector4 position; // 50
#endif
};
RED4EXT_ASSERT_SIZE(DismembermentAudioEvent, 0x60);
} // namespace ent
using entDismembermentAudioEvent = ent::DismembermentAudioEvent;
using DismembermentAudioEvent = ent::DismembermentAudioEvent;
} // namespace RED4ext

// clang-format on
