#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimTargetAddEvent.hpp>

namespace RED4ext
{
namespace ent { struct IOrientationProvider; }

namespace ent
{
struct IKTargetAddEvent : ent::AnimTargetAddEvent
{
    static constexpr const char* NAME = "entIKTargetAddEvent";
    static constexpr const char* ALIAS = "IKTargetAddEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<ent::AnimTargetAddEvent>];
    anim::IKTargetRef outIKTargetRef; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(outIKTargetRef))];
    Handle<ent::IOrientationProvider> orientationProvider; // 68
    uint8_t unk_78[0x78 - (0x68 + sizeof(orientationProvider))];
    anim::IKTargetRequest request; // 78
#else
    anim::IKTargetRef outIKTargetRef; // 58
    Handle<ent::IOrientationProvider> orientationProvider; // 68
    anim::IKTargetRequest request; // 78
#endif
};
RED4EXT_ASSERT_SIZE(IKTargetAddEvent, 0x90);
} // namespace ent
using entIKTargetAddEvent = ent::IKTargetAddEvent;
using IKTargetAddEvent = ent::IKTargetAddEvent;
} // namespace RED4ext

// clang-format on
