#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimTargetAddEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct LookAtAddEvent : ent::AnimTargetAddEvent
{
    static constexpr const char* NAME = "entLookAtAddEvent";
    static constexpr const char* ALIAS = "LookAtAddEvent";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_58[0x58 - ::RED4ext::Detail::DataSize<ent::AnimTargetAddEvent>];
    anim::LookAtRef outLookAtRef; // 58
    uint8_t unk_68[0x68 - (0x58 + sizeof(outLookAtRef))];
    anim::LookAtRequest request; // 68
#else
    anim::LookAtRef outLookAtRef; // 58
    anim::LookAtRequest request; // 68
#endif
};
RED4EXT_ASSERT_SIZE(LookAtAddEvent, 0xD8);
} // namespace ent
using entLookAtAddEvent = ent::LookAtAddEvent;
using LookAtAddEvent = ent::LookAtAddEvent;
} // namespace RED4ext

// clang-format on
