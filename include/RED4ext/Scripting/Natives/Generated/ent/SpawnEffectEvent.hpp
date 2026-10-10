#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace world { struct EffectBlackboard; }

namespace ent
{
struct SpawnEffectEvent : red::Event
{
    static constexpr const char* NAME = "entSpawnEffectEvent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    uint32_t e3hackDeferCount; // 40
    uint8_t unk_48[0x48 - (0x40 + sizeof(e3hackDeferCount))];
    Handle<world::EffectBlackboard> blackboard; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(blackboard))];
    CName effectName; // 68
    uint8_t unk_70[0x70 - (0x68 + sizeof(effectName))];
    CRUID idForRandomizedEffect; // 70
    uint8_t unk_78[0x78 - (0x70 + sizeof(idForRandomizedEffect))];
    CName effectInstanceName; // 78
    uint8_t unk_80[0x80 - (0x78 + sizeof(effectInstanceName))];
    bool persistOnDetach; // 80
    uint8_t unk_81[0x81 - (0x80 + sizeof(persistOnDetach))];
    bool breakAllLoops; // 81
    uint8_t unk_82[0x82 - (0x81 + sizeof(breakAllLoops))];
    bool breakAllOnDestroy; // 82
#else
    uint32_t e3hackDeferCount; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<world::EffectBlackboard> blackboard; // 48
    uint8_t unk58[0x68 - 0x58]; // 58
    CName effectName; // 68
    CRUID idForRandomizedEffect; // 70
    CName effectInstanceName; // 78
    bool persistOnDetach; // 80
    bool breakAllLoops; // 81
    bool breakAllOnDestroy; // 82
    uint8_t unk83[0x98 - 0x83]; // 83
#endif
};
RED4EXT_ASSERT_SIZE(SpawnEffectEvent, 0x98);
} // namespace ent
using entSpawnEffectEvent = ent::SpawnEffectEvent;
} // namespace RED4ext

// clang-format on
