#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DataNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GroupNodeGroupVariable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GroupNodeInheritanceState.hpp>

namespace RED4ext
{
namespace game::data { struct FileNode; }
namespace game::data { struct PackageNode; }

namespace game::data
{
struct GroupNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataGroupNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_98[0x98 - ::RED4ext::Detail::DataSize<game::data::DataNode>];
    CString name; // 98
    uint8_t unk_B8[0xB8 - (0x98 + sizeof(name))];
    CString base; // B8
    uint8_t unk_D8[0xD8 - (0xB8 + sizeof(base))];
    CString schema; // D8
    uint8_t unk_F8[0xF8 - (0xD8 + sizeof(schema))];
    bool isInline; // F8
    uint8_t unk_130[0x130 - (0xF8 + sizeof(isInline))];
    WeakHandle<game::data::GroupNode> baseGroup; // 130
    uint8_t unk_140[0x140 - (0x130 + sizeof(baseGroup))];
    WeakHandle<game::data::GroupNode> schemaGroup; // 140
    uint8_t unk_150[0x150 - (0x140 + sizeof(schemaGroup))];
    WeakHandle<game::data::PackageNode> package; // 150
    uint8_t unk_160[0x160 - (0x150 + sizeof(package))];
    Handle<game::data::FileNode> fileNode; // 160
    uint8_t unk_170[0x170 - (0x160 + sizeof(fileNode))];
    uint32_t inlineGroupId; // 170
    uint8_t unk_174[0x174 - (0x170 + sizeof(inlineGroupId))];
    game::data::GroupNodeInheritanceState inheritanceState; // 174
    uint8_t unk_1E8[0x1E8 - (0x174 + sizeof(inheritanceState))];
    DynArray<game::data::GroupNodeGroupVariable> serializedVariables; // 1E8
    uint8_t unk_1F8[0x1F8 - (0x1E8 + sizeof(serializedVariables))];
    DynArray<CName> tags; // 1F8
#else
    CString name; // 98
    CString base; // B8
    CString schema; // D8
    bool isInline; // F8
    uint8_t unkF9[0x130 - 0xF9]; // F9
    WeakHandle<game::data::GroupNode> baseGroup; // 130
    WeakHandle<game::data::GroupNode> schemaGroup; // 140
    WeakHandle<game::data::PackageNode> package; // 150
    Handle<game::data::FileNode> fileNode; // 160
    uint32_t inlineGroupId; // 170
    game::data::GroupNodeInheritanceState inheritanceState; // 174
    uint8_t unk178[0x1E8 - 0x178]; // 178
    DynArray<game::data::GroupNodeGroupVariable> serializedVariables; // 1E8
    DynArray<CName> tags; // 1F8
    uint8_t unk208[0x278 - 0x208]; // 208
#endif
};
RED4EXT_ASSERT_SIZE(GroupNode, 0x278);
} // namespace game::data
using gamedataGroupNode = game::data::GroupNode;
} // namespace RED4ext

// clang-format on
