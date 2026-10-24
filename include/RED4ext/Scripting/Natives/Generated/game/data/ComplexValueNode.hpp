#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ValueDataNode.hpp>

namespace RED4ext
{
namespace game::data
{
struct ComplexValueNode : game::data::ValueDataNode
{
    static constexpr const char* NAME = "gamedataComplexValueNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_98[0x98 - ::RED4ext::Detail::DataSize<game::data::ValueDataNode>];
    DynArray<CString> data; // 98
#else
    DynArray<CString> data; // 98
#endif
};
RED4EXT_ASSERT_SIZE(ComplexValueNode, 0xA8);
} // namespace game::data
using gamedataComplexValueNode = game::data::ComplexValueNode;
} // namespace RED4ext

// clang-format on
