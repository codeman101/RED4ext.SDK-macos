#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimInputSetter : red::Event
{
    static constexpr const char* NAME = "entAnimInputSetter";
    static constexpr const char* ALIAS = "AnimInputSetter";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<red::Event>];
    CName key; // 40
#else
    CName key; // 40
#endif
};
RED4EXT_ASSERT_SIZE(AnimInputSetter, 0x48);
} // namespace ent
using entAnimInputSetter = ent::AnimInputSetter;
using AnimInputSetter = ent::AnimInputSetter;
} // namespace RED4ext

// clang-format on
