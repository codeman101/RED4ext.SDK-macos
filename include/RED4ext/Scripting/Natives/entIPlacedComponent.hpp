#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <cstdint>

namespace RED4ext
{
namespace ent
{
struct ITransformBinding;
}

namespace ent
{
struct __declspec(align(0x10)) IPlacedComponent : ent::IComponent
{
    static constexpr const char* NAME = "entIPlacedComponent";
    static constexpr const char* ALIAS = "IPlacedComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_90[0x90 - ::RED4ext::Detail::DataSize<ent::IComponent>];
    Handle<ent::ITransformBinding> parentTransform; // 90
    uint8_t unk_C0[0xC0 - (0x90 + sizeof(parentTransform))];
    WorldTransform localTransform; // C0
    uint8_t unk_E0[0xE0 - (0xC0 + sizeof(localTransform))];
    WorldTransform worldTransform; // E0
#else
    Handle<ent::ITransformBinding> parentTransform; // 90
    uint8_t unkA0[0xC0 - 0xA0];                     // A0
    WorldTransform localTransform;                  // C0
    WorldTransform worldTransform;                  // E0
    uint8_t unkE0[0x120 - 0x100];                   // 100
#endif
};
RED4EXT_ASSERT_SIZE(IPlacedComponent, 0x120);
} // namespace ent
using entIPlacedComponent = ent::IPlacedComponent;
using IPlacedComponent = ent::IPlacedComponent;
} // namespace RED4ext
