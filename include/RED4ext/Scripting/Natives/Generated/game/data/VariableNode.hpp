#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VariableNodeVariableValue.hpp>

namespace RED4ext
{
namespace game::data
{
struct VariableNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataVariableNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_98[0x98 - ::RED4ext::Detail::DataSize<game::data::DataNode>];
    CName hashedName; // 98
    uint8_t unk_A0[0xA0 - (0x98 + sizeof(hashedName))];
    CString type; // A0
    uint8_t unk_C0[0xC0 - (0xA0 + sizeof(type))];
    CString name; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(name))];
    bool isForeignKey; // E0
    uint8_t unk_E1[0xE1 - (0xE0 + sizeof(isForeignKey))];
    bool isArray; // E1
    uint8_t unk_E2[0xE2 - (0xE1 + sizeof(isArray))];
    bool hasArrayValues; // E2
    uint8_t unk_E3[0xE3 - (0xE2 + sizeof(hasArrayValues))];
    bool isAddition; // E3
    uint8_t unk_E4[0xE4 - (0xE3 + sizeof(isAddition))];
    game::data::TweakDBType typeEnum; // E4
    uint8_t unk_E8[0xE8 - (0xE4 + sizeof(typeEnum))];
    DynArray<game::data::VariableNodeVariableValue> values; // E8
#else
    CName hashedName; // 98
    CString type; // A0
    CString name; // C0
    bool isForeignKey; // E0
    bool isArray; // E1
    bool hasArrayValues; // E2
    bool isAddition; // E3
    game::data::TweakDBType typeEnum; // E4
    DynArray<game::data::VariableNodeVariableValue> values; // E8
    uint8_t unkF8[0x218 - 0xF8]; // F8
#endif
};
RED4EXT_ASSERT_SIZE(VariableNode, 0x218);
} // namespace game::data
using gamedataVariableNode = game::data::VariableNode;
} // namespace RED4ext

// clang-format on
