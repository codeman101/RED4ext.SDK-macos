#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/tempshit/MapPinOperation.hpp>

namespace RED4ext
{
namespace tempshit
{
struct MapPinManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "tempshitMapPinManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::DisableableNodeDefinition>];
    CName mapPinName; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(mapPinName))];
    tempshit::MapPinOperation operation; // 50
    uint8_t unk_58[0x58 - (0x50 + sizeof(operation))];
    game::EntityReference nodeRef; // 58
    uint8_t unk_90[0x90 - (0x58 + sizeof(nodeRef))];
    Vector3 position; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(position))];
    LocalizationString forceCaption; // A0
#else
    CName mapPinName; // 48
    tempshit::MapPinOperation operation; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    game::EntityReference nodeRef; // 58
    Vector3 position; // 90
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    LocalizationString forceCaption; // A0
#endif
};
RED4EXT_ASSERT_SIZE(MapPinManagerNodeDefinition, 0xC8);
} // namespace tempshit
using tempshitMapPinManagerNodeDefinition = tempshit::MapPinManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
