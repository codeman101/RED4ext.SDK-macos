#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CustomStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetCustomStyle_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetCustomStyle_NodeType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<quest::IPhoneManagerNodeType>];
    quest::CustomStyle style; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(style))];
    bool isActive; // 38
#else
    quest::CustomStyle style; // 38
    bool isActive; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
#endif
};
RED4EXT_ASSERT_SIZE(SetCustomStyle_NodeType, 0x40);
} // namespace quest
using questSetCustomStyle_NodeType = quest::SetCustomStyle_NodeType;
} // namespace RED4ext

// clang-format on
