#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct SetEnableEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsSetEnableEvent";
    static constexpr const char* ALIAS = "InteractionSetEnableEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    bool enable; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(enable))];
    CName linkedLayers; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(linkedLayers))];
    CName layer; // 50
#else
    bool enable; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    CName linkedLayers; // 48
    CName layer; // 50
#endif
};
RED4EXT_ASSERT_SIZE(SetEnableEvent, 0x58);
} // namespace game::interactions
using gameinteractionsSetEnableEvent = game::interactions::SetEnableEvent;
using InteractionSetEnableEvent = game::interactions::SetEnableEvent;
} // namespace RED4ext

// clang-format on
