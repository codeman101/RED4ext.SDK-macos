#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetSaveDataLoadingScreen_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetSaveDataLoadingScreen_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    TweakDBID selectedLoading; // 34
#else
    TweakDBID selectedLoading; // 38
#endif
};
RED4EXT_ASSERT_SIZE(SetSaveDataLoadingScreen_NodeType, 0x40);
} // namespace quest
using questSetSaveDataLoadingScreen_NodeType = quest::SetSaveDataLoadingScreen_NodeType;
} // namespace RED4ext

// clang-format on
