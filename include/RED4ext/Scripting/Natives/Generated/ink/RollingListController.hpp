#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ListController.hpp>

namespace RED4ext
{
namespace ink
{
struct RollingListController : ink::ListController
{
    static constexpr const char* NAME = "inkRollingListController";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_124[0x124 - ::RED4ext::Detail::DataSize<ink::ListController>];
    int32_t itemsToDisplay; // 124
    uint8_t unk_128[0x128 - (0x124 + sizeof(itemsToDisplay))];
    float convexity; // 128
    uint8_t unk_12C[0x12C - (0x128 + sizeof(convexity))];
    float verticalCompression; // 12C
    uint8_t unk_130[0x130 - (0x12C + sizeof(verticalCompression))];
    float scrollTime; // 130
#else
    int32_t itemsToDisplay; // 128
    float convexity; // 12C
    float verticalCompression; // 130
    float scrollTime; // 134
#endif
};
RED4EXT_ASSERT_SIZE(RollingListController, 0x138);
} // namespace ink
using inkRollingListController = ink::RollingListController;
} // namespace RED4ext

// clang-format on
