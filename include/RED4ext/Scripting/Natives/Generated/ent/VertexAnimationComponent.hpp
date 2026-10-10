#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VertexAnimationMapper.hpp>

namespace RED4ext
{
namespace ent { struct ISourceBinding; }

namespace ent
{
struct VertexAnimationComponent : ent::IComponent
{
    static constexpr const char* NAME = "entVertexAnimationComponent";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    ent::VertexAnimationMapper vertexAnimationMapper; // 90
    uint8_t unk_A0[0xA0 - (0x90 + sizeof(vertexAnimationMapper))];
    Handle<ent::ISourceBinding> animatedComponent; // A0
#else
    uint8_t unk90[0x98 - 0x90]; // 90
    ent::VertexAnimationMapper vertexAnimationMapper; // 98
    Handle<ent::ISourceBinding> animatedComponent; // A8
#endif
};
RED4EXT_ASSERT_SIZE(VertexAnimationComponent, 0xB8);
} // namespace ent
using entVertexAnimationComponent = ent::VertexAnimationComponent;
} // namespace RED4ext

// clang-format on
