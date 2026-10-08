#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DialogLineEventData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct DialogLine : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsDialogLine";
    static constexpr const char* ALIAS = "DialogLineEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    audio::DialogLineEventData data; // 40
#else
    audio::DialogLineEventData data; // 40
#endif
};
RED4EXT_ASSERT_SIZE(DialogLine, 0x68);
} // namespace game::audio::events
using gameaudioeventsDialogLine = game::audio::events::DialogLine;
using DialogLineEvent = game::audio::events::DialogLine;
} // namespace RED4ext

// clang-format on
