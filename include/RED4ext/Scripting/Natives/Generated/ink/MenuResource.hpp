#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MenuEntry.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuResource : CResource
{
    static constexpr const char* NAME = "inkMenuResource";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<CResource>];
    DynArray<ink::MenuEntry> menusEntries; // 40
    uint8_t unk_50[0x50 - (0x40 + sizeof(menusEntries))];
    DynArray<CName> scenariosNames; // 50
    uint8_t unk_60[0x60 - (0x50 + sizeof(scenariosNames))];
    CName initialScenarioName; // 60
#else
    uint8_t unk40[0x48 - 0x40]; // 40
    DynArray<ink::MenuEntry> menusEntries; // 48
    DynArray<CName> scenariosNames; // 58
    CName initialScenarioName; // 68
#endif
};
RED4EXT_ASSERT_SIZE(MenuResource, 0x70);
} // namespace ink
using inkMenuResource = ink::MenuResource;
} // namespace RED4ext

// clang-format on
