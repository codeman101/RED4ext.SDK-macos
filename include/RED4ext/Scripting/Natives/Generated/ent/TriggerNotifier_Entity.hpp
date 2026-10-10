#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace ent
{
struct TriggerNotifier_Entity : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "entTriggerNotifier_Entity";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_B8[0xB8 - ::RED4ext::Detail::DataSize<world::ITriggerAreaNotifer>];
    NodeRef entityRef; // B8
#else
    NodeRef entityRef; // B8
#endif
};
RED4EXT_ASSERT_SIZE(TriggerNotifier_Entity, 0xC0);
} // namespace ent
using entTriggerNotifier_Entity = ent::TriggerNotifier_Entity;
} // namespace RED4ext

// clang-format on
