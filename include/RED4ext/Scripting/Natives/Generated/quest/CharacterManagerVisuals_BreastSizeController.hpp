#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerVisuals_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerVisuals_BreastSizeController : quest::ICharacterManagerVisuals_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_BreastSizeController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<quest::ICharacterManagerVisuals_NodeSubType>];
    CName bodyGroupName; // 70
    uint8_t unk_7C[0x7C - (0x70 + sizeof(bodyGroupName))];
    bool customizedSize; // 7C
#else
    CName bodyGroupName; // 70
    uint8_t unk78[0x7C - 0x78]; // 78
    bool customizedSize; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
#endif
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_BreastSizeController, 0x80);
} // namespace quest
using questCharacterManagerVisuals_BreastSizeController = quest::CharacterManagerVisuals_BreastSizeController;
} // namespace RED4ext

// clang-format on
