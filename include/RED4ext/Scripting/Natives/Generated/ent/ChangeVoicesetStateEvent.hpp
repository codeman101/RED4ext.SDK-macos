#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VoicesetInputToBlock.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct ChangeVoicesetStateEvent : red::Event
{
    static constexpr const char* NAME = "entChangeVoicesetStateEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool enableVoicesetLines; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(enableVoicesetLines))];
    bool enableVoicesetGrunts; // 41
    uint8_t unk_48[0x48 - (0x41 + sizeof(enableVoicesetGrunts))];
    DynArray<ent::VoicesetInputToBlock> inputsToBlock; // 48
#else
    bool enableVoicesetLines; // 40
    bool enableVoicesetGrunts; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    DynArray<ent::VoicesetInputToBlock> inputsToBlock; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ChangeVoicesetStateEvent, 0x58);
} // namespace ent
using entChangeVoicesetStateEvent = ent::ChangeVoicesetStateEvent;
} // namespace RED4ext

// clang-format on
