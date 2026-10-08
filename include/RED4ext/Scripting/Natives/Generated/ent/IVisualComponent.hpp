#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) IVisualComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entIVisualComponent";
    static constexpr const char* ALIAS = "IVisualComponent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_120[0x120 - ::RED4ext::Detail::DataSize<ent::IPlacedComponent>];
    float autoHideDistance; // 120
    uint8_t unk_125[0x125 - (0x120 + sizeof(autoHideDistance))];
    int8_t forceLODLevel; // 125
    uint8_t unk_126[0x126 - (0x125 + sizeof(forceLODLevel))];
    RenderSceneLayerMask renderSceneLayerMask; // 126
#else
    float autoHideDistance; // 120
    uint8_t unk124[0x125 - 0x124]; // 124
    int8_t forceLODLevel; // 125
    RenderSceneLayerMask renderSceneLayerMask; // 126
    uint8_t unk127[0x140 - 0x127]; // 127
#endif
};
RED4EXT_ASSERT_SIZE(IVisualComponent, 0x140);
} // namespace ent
using entIVisualComponent = ent::IVisualComponent;
using IVisualComponent = ent::IVisualComponent;
} // namespace RED4ext

// clang-format on
