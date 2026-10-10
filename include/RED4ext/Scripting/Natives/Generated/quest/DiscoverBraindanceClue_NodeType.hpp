#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct DiscoverBraindanceClue_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questDiscoverBraindanceClue_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    CName clueName; // 38
#else
    CName clueName; // 38
#endif
};
RED4EXT_ASSERT_SIZE(DiscoverBraindanceClue_NodeType, 0x40);
} // namespace quest
using questDiscoverBraindanceClue_NodeType = quest::DiscoverBraindanceClue_NodeType;
} // namespace RED4ext

// clang-format on
