#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/WorldMarker.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptionOperation; }
namespace scn { struct SceneResource; }

namespace quest
{
struct SceneNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questSceneNodeDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<quest::SignalStoppingNodeDefinition>];
    RaRef<scn::SceneResource> sceneFile; // 48
    uint8_t unk_50[0x50 - (0x48 + sizeof(sceneFile))];
    scn::WorldMarker sceneLocation; // 50
    uint8_t unk_68[0x68 - (0x50 + sizeof(sceneLocation))];
    DynArray<Handle<scn::IInterruptionOperation>> interruptionOperations; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(interruptionOperations))];
    bool syncToMusic; // 78
    uint8_t unk_79[0x79 - (0x78 + sizeof(syncToMusic))];
    bool notAllowedToBeFrozen; // 79
    uint8_t unk_7A[0x7A - (0x79 + sizeof(notAllowedToBeFrozen))];
    bool reapplyInterruptionOperationsAfterGameLoad; // 7A
#else
    RaRef<scn::SceneResource> sceneFile; // 48
    scn::WorldMarker sceneLocation; // 50
    DynArray<Handle<scn::IInterruptionOperation>> interruptionOperations; // 68
    bool syncToMusic; // 78
    bool notAllowedToBeFrozen; // 79
    bool reapplyInterruptionOperationsAfterGameLoad; // 7A
    uint8_t unk7B[0x88 - 0x7B]; // 7B
#endif
};
RED4EXT_ASSERT_SIZE(SceneNodeDefinition, 0x88);
} // namespace quest
using questSceneNodeDefinition = quest::SceneNodeDefinition;
} // namespace RED4ext

// clang-format on
