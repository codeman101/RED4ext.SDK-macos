#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) CrowdMemberComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameCrowdMemberComponent";
    static constexpr const char* ALIAS = "CrowdMemberComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_8D[0x8D - ::RED4ext::Detail::DataSize<ent::IComponent>];
    bool forceCrowdToIgnore; // 8D
#else
    bool forceCrowdToIgnore; // 90
    uint8_t unk91[0x220 - 0x91]; // 91
#endif
};
RED4EXT_ASSERT_SIZE(CrowdMemberComponent, 0x220);
} // namespace game
using gameCrowdMemberComponent = game::CrowdMemberComponent;
using CrowdMemberComponent = game::CrowdMemberComponent;
} // namespace RED4ext

// clang-format on
