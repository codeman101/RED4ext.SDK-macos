#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IBraindanceConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn
{
struct BraindanceJumpInProgress_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindanceJumpInProgress_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_34[0x34 - ::RED4ext::Detail::DataSize<scn::IBraindanceConditionType>];
    bool inProgress; // 34
    uint8_t unk_38[0x38 - (0x34 + sizeof(inProgress))];
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk_40[0x40 - (0x38 + sizeof(sceneFile))];
    scn::SceneVersionCheck SceneVersion; // 40
#else
    bool inProgress; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    RaRef<scn::SceneResource> sceneFile; // 40
    scn::SceneVersionCheck SceneVersion; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
#endif
};
RED4EXT_ASSERT_SIZE(BraindanceJumpInProgress_ConditionType, 0x50);
} // namespace scn
using scnBraindanceJumpInProgress_ConditionType = scn::BraindanceJumpInProgress_ConditionType;
} // namespace RED4ext

// clang-format on
