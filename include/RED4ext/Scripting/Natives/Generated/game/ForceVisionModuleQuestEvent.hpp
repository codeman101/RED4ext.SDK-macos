#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ForceVisionModuleQuestEvent : red::Event
{
    static constexpr const char* NAME = "gameForceVisionModuleQuestEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName moduleName; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(moduleName))];
    DynArray<CName> meshComponentNames; // 48
#else
    CName moduleName; // 40
    DynArray<CName> meshComponentNames; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ForceVisionModuleQuestEvent, 0x58);
} // namespace game
using gameForceVisionModuleQuestEvent = game::ForceVisionModuleQuestEvent;
} // namespace RED4ext

// clang-format on
