#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/events/EmitterEvent.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct SetParameterOnEmitter : game::audio::events::EmitterEvent
{
    static constexpr const char* NAME = "gameaudioeventsSetParameterOnEmitter";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<game::audio::events::EmitterEvent>];
    CName paramName; // 58
    uint8_t unk_60[0x60 - (0x58 + sizeof(paramName))];
    float paramValue; // 60
#else
    CName paramName; // 58
    float paramValue; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
#endif
};
RED4EXT_ASSERT_SIZE(SetParameterOnEmitter, 0x68);
} // namespace game::audio::events
using gameaudioeventsSetParameterOnEmitter = game::audio::events::SetParameterOnEmitter;
} // namespace RED4ext

// clang-format on
