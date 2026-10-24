#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ManageCollision_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct ManageCollision_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questManageCollision_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IWorldDataManagerNodeType>];
    DynArray<quest::ManageCollision_NodeTypeParams> params; // 38
#else
    DynArray<quest::ManageCollision_NodeTypeParams> params; // 38
#endif
};
RED4EXT_ASSERT_SIZE(ManageCollision_NodeType, 0x48);
} // namespace quest
using questManageCollision_NodeType = quest::ManageCollision_NodeType;
} // namespace RED4ext

// clang-format on
