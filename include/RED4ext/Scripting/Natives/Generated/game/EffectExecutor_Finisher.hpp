#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game { struct IFinisherScenario; }

namespace game
{
struct EffectExecutor_Finisher : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_Finisher";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<game::EffectExecutor>];
    DynArray<Handle<game::IFinisherScenario>> finisherScenarios; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(finisherScenarios))];
    bool alwaysUseEntryAnims; // 58
    uint8_t unk_59[0x59 - (0x58 + sizeof(alwaysUseEntryAnims))];
    bool allowCameraMovement; // 59
    uint8_t unk_5A[0x5A - (0x59 + sizeof(allowCameraMovement))];
    bool InfluencedByPlayerCostBlock; // 5A
#else
    DynArray<Handle<game::IFinisherScenario>> finisherScenarios; // 48
    bool alwaysUseEntryAnims; // 58
    bool allowCameraMovement; // 59
    bool InfluencedByPlayerCostBlock; // 5A
    uint8_t unk5B[0x60 - 0x5B]; // 5B
#endif
};
RED4EXT_ASSERT_SIZE(EffectExecutor_Finisher, 0x60);
} // namespace game
using gameEffectExecutor_Finisher = game::EffectExecutor_Finisher;
} // namespace RED4ext

// clang-format on
