#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct InteriorAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldInteriorAreaNotifier";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    DynArray<TweakDBID> gameRestrictionIDs; // B8
    uint8_t unk_C8[0xC8 - (0xB8 + sizeof(gameRestrictionIDs))];
    bool treatAsInterior; // C8
    uint8_t unk_C9[0xC9 - (0xC8 + sizeof(treatAsInterior))];
    bool setTier2; // C9
#else
    DynArray<TweakDBID> gameRestrictionIDs; // B8
    bool treatAsInterior; // C8
    bool setTier2; // C9
    uint8_t unkCA[0xD0 - 0xCA]; // CA
#endif
};
RED4EXT_ASSERT_SIZE(InteriorAreaNotifier, 0xD0);
} // namespace world
using worldInteriorAreaNotifier = world::InteriorAreaNotifier;
} // namespace RED4ext

// clang-format on
