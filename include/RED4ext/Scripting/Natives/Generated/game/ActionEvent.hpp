#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace game { struct ActionInternalEvent; }

namespace game
{
struct ActionEvent : AI::AIEvent
{
    static constexpr const char* NAME = "gameActionEvent";
    static constexpr const char* ALIAS = "ActionEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_50[0x50 - ::RED4ext::Detail::DataSize<AI::AIEvent>];
    CName eventAction; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(eventAction))];
    Handle<game::ActionInternalEvent> internalEvent; // 58
#else
    CName eventAction; // 50
    Handle<game::ActionInternalEvent> internalEvent; // 58
#endif
};
RED4EXT_ASSERT_SIZE(ActionEvent, 0x68);
} // namespace game
using gameActionEvent = game::ActionEvent;
using ActionEvent = game::ActionEvent;
} // namespace RED4ext

// clang-format on
