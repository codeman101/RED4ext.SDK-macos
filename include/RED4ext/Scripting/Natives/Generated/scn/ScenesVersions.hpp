#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ScenesVersionsSceneChanges.hpp>

namespace RED4ext
{
namespace scn
{
struct ScenesVersions : CResource
{
    static constexpr const char* NAME = "scnScenesVersions";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_3C[0x3C - ::RED4ext::Detail::DataSize<CResource>];
    uint32_t currentVersion; // 3C
    uint8_t unk_40[0x40 - (0x3C + sizeof(currentVersion))];
    DynArray<scn::ScenesVersionsSceneChanges> scenes; // 40
#else
    uint32_t currentVersion; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<scn::ScenesVersionsSceneChanges> scenes; // 48
#endif
};
RED4EXT_ASSERT_SIZE(ScenesVersions, 0x58);
} // namespace scn
using scnScenesVersions = scn::ScenesVersions;
} // namespace RED4ext

// clang-format on
