#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/InteractionType.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct IVisualizerTimeProvider; }

namespace game::interactions::vis
{
struct DeviceVisualizerDefinition : game::interactions::vis::IVisualizerDefinition
{
    static constexpr const char* NAME = "gameinteractionsvisDeviceVisualizerDefinition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_42[0x42 - ::RED4ext::Detail::DataSize<game::interactions::vis::IVisualizerDefinition>];
    game::interactions::vis::InteractionType interactionType; // 42
    uint8_t unk_48[0x48 - (0x42 + sizeof(interactionType))];
    CString displayNameOverride; // 48
    uint8_t unk_68[0x68 - (0x48 + sizeof(displayNameOverride))];
    bool isDynamic; // 68
    uint8_t unk_69[0x69 - (0x68 + sizeof(isDynamic))];
    bool useDefaultActionMapping; // 69
    uint8_t unk_6A[0x6A - (0x69 + sizeof(useDefaultActionMapping))];
    bool createMappin; // 6A
    uint8_t unk_70[0x70 - (0x6A + sizeof(createMappin))];
    Handle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 70
#else
    game::interactions::vis::InteractionType interactionType; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CString displayNameOverride; // 50
    bool isDynamic; // 70
    bool useDefaultActionMapping; // 71
    bool createMappin; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
    Handle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 78
    uint8_t unk88[0x90 - 0x88]; // 88
#endif
};
RED4EXT_ASSERT_SIZE(DeviceVisualizerDefinition, 0x90);
} // namespace game::interactions::vis
using gameinteractionsvisDeviceVisualizerDefinition = game::interactions::vis::DeviceVisualizerDefinition;
} // namespace RED4ext

// clang-format on
