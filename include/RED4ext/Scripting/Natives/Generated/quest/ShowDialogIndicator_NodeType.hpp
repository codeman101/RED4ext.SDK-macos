#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ShowDialogIndicator_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowDialogIndicator_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowDialogIndicator_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    DynArray<quest::ShowDialogIndicator_NodeTypeParams> params; // 38
#else
    DynArray<quest::ShowDialogIndicator_NodeTypeParams> params; // 38
#endif
};
RED4EXT_ASSERT_SIZE(ShowDialogIndicator_NodeType, 0x48);
} // namespace quest
using questShowDialogIndicator_NodeType = quest::ShowDialogIndicator_NodeType;
} // namespace RED4ext

// clang-format on
