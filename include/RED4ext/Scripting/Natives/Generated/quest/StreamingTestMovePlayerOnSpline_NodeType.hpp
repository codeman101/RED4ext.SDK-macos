#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct StreamingTestMovePlayerOnSpline_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questStreamingTestMovePlayerOnSpline_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IWorldDataManagerNodeType>];
    NodeRef splineRef; // 38
#else
    NodeRef splineRef; // 38
#endif
};
RED4EXT_ASSERT_SIZE(StreamingTestMovePlayerOnSpline_NodeType, 0x40);
} // namespace quest
using questStreamingTestMovePlayerOnSpline_NodeType = quest::StreamingTestMovePlayerOnSpline_NodeType;
} // namespace RED4ext

// clang-format on
