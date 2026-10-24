#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct SoundEvent : red::Event
{
    static constexpr const char* NAME = "entSoundEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName eventName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(eventName))];
    DynArray<audio::AudSwitch> switches; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(switches))];
    DynArray<audio::AudParameter> params; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(params))];
    DynArray<CName> dynamicParams; // 68
#else
    CName eventName; // 40
    DynArray<audio::AudSwitch> switches; // 48
    DynArray<audio::AudParameter> params; // 58
    DynArray<CName> dynamicParams; // 68
#endif
};
RED4EXT_ASSERT_SIZE(SoundEvent, 0x78);
} // namespace ent
using entSoundEvent = ent::SoundEvent;
} // namespace RED4ext

// clang-format on
