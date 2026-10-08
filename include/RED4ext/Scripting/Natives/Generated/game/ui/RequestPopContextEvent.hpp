#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UIGameContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RequestPopContextEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRequestPopContextEvent";
    static constexpr const char* ALIAS = "PopUIGameContextEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    UIGameContext context; // 40
    uint8_t unk_44[0x44 - (0x40 + sizeof(context))];
    bool invalidate; // 44
#else
    UIGameContext context; // 40
    bool invalidate; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
#endif
};
RED4EXT_ASSERT_SIZE(RequestPopContextEvent, 0x48);
} // namespace game::ui
using gameuiRequestPopContextEvent = game::ui::RequestPopContextEvent;
using PopUIGameContextEvent = game::ui::RequestPopContextEvent;
} // namespace RED4ext

// clang-format on
