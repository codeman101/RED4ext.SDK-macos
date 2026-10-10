#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct InputHint_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questInputHint_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::IUIManagerNodeType>];
    CName action; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(action))];
    CName groupId; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(groupId))];
    CName source; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(source))];
    CString localizedLabel; // 50
    uint8_t unk_70[0x70 - (0x50 + sizeof(localizedLabel))];
    bool show; // 70
    uint8_t unk_74[0x74 - (0x70 + sizeof(show))];
    int32_t queuePriority; // 74
#else
    CName action; // 38
    CName groupId; // 40
    CName source; // 48
    CString localizedLabel; // 50
    bool show; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    int32_t queuePriority; // 74
#endif
};
RED4EXT_ASSERT_SIZE(InputHint_NodeType, 0x78);
} // namespace quest
using questInputHint_NodeType = quest::InputHint_NodeType;
} // namespace RED4ext

// clang-format on
