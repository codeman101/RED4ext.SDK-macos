#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptCondition; }
namespace scn { struct SceneResource; }

namespace quest
{
struct SceneInterrupt_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneInterrupt_ConditionType";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<quest::ISceneConditionType>];
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk_41[0x41 - (0x38 + sizeof(sceneFile))];
    bool onlyInSafeMoment; // 41
    uint8_t unk_48[0x48 - (0x41 + sizeof(onlyInSafeMoment))];
    DynArray<Handle<scn::IInterruptCondition>> interruptConditions; // 48
#else
    RaRef<scn::SceneResource> sceneFile; // 38
    uint8_t unk40[0x41 - 0x40]; // 40
    bool onlyInSafeMoment; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    DynArray<Handle<scn::IInterruptCondition>> interruptConditions; // 48
#endif
};
RED4EXT_ASSERT_SIZE(SceneInterrupt_ConditionType, 0x58);
} // namespace quest
using questSceneInterrupt_ConditionType = quest::SceneInterrupt_ConditionType;
} // namespace RED4ext

// clang-format on
