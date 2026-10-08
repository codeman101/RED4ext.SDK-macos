#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) SaveSanitizationForbiddenAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldSaveSanitizationForbiddenAreaNode";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_70[0x70 - ::RED4ext::Detail::DataSize<world::TriggerAreaNode>];
    Vector4 safeSpotOffset; // 70
#else
    Vector4 safeSpotOffset; // 70
#endif
};
RED4EXT_ASSERT_SIZE(SaveSanitizationForbiddenAreaNode, 0x80);
} // namespace world
using worldSaveSanitizationForbiddenAreaNode = world::SaveSanitizationForbiddenAreaNode;
} // namespace RED4ext

// clang-format on
