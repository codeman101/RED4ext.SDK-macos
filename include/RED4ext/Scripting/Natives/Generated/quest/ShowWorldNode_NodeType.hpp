#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowWorldNode_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questShowWorldNode_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IWorldDataManagerNodeType>];
    NodeRef objectRef; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(objectRef))];
    bool isPlayer; // 40
    uint8_t unk_41[0x41 - (0x40 + sizeof(isPlayer))];
    bool show; // 41
    uint8_t unk_48[0x48 - (0x41 + sizeof(show))];
    CName componentName; // 48
#else
    NodeRef objectRef; // 38
    bool isPlayer; // 40
    bool show; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    CName componentName; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ShowWorldNode_NodeType, 0x50);
} // namespace quest
using questShowWorldNode_NodeType = quest::ShowWorldNode_NodeType;
} // namespace RED4ext

// clang-format on
