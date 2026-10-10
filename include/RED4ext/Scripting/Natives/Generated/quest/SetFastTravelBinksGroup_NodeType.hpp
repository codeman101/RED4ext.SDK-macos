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
struct SetFastTravelBinksGroup_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetFastTravelBinksGroup_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    TweakDBID selectedBinkDataGroup; // 34
#else
    TweakDBID selectedBinkDataGroup; // 38
#endif
};
RED4EXT_ASSERT_SIZE(SetFastTravelBinksGroup_NodeType, 0x40);
} // namespace quest
using questSetFastTravelBinksGroup_NodeType = quest::SetFastTravelBinksGroup_NodeType;
} // namespace RED4ext

// clang-format on
