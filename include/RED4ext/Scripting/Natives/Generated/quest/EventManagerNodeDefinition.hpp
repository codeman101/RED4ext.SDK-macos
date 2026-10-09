#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
struct IScriptable;

namespace quest
{
struct EventManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questEventManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::DisableableNodeDefinition>];
    game::EntityReference objectRef; // 48
    uint8_t unk_80[0x80 - (0x48 + sizeof(objectRef))];
    CString managerName; // 80
    uint8_t unk_A0[0xA0 - (0x80 + sizeof(managerName))];
    CName PSClassName; // A0
    uint8_t unk_A8[0xA8 - (0xA0 + sizeof(PSClassName))];
    CName componentName; // A8
    uint8_t unk_B0[0xB0 - (0xA8 + sizeof(componentName))];
    Handle<IScriptable> event; // B0
    uint8_t unk_C0[0xC0 - (0xB0 + sizeof(event))];
    bool isUiEvent; // C0
    uint8_t unk_C1[0xC1 - (0xC0 + sizeof(isUiEvent))];
    bool isObjectPlayer; // C1
#else
    game::EntityReference objectRef; // 48
    CString managerName; // 80
    CName PSClassName; // A0
    CName componentName; // A8
    Handle<IScriptable> event; // B0
    bool isUiEvent; // C0
    bool isObjectPlayer; // C1
    uint8_t unkC2[0xC8 - 0xC2]; // C2
#endif
};
RED4EXT_ASSERT_SIZE(EventManagerNodeDefinition, 0xC8);
} // namespace quest
using questEventManagerNodeDefinition = quest::EventManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
