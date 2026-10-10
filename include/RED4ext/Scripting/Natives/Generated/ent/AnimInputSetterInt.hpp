#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimInputSetter.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimInputSetterInt : ent::AnimInputSetter
{
    static constexpr const char* NAME = "entAnimInputSetterInt";
    static constexpr const char* ALIAS = "AnimInputSetterInt";

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<ent::AnimInputSetter>];
    int32_t value; // 48
#else
    int32_t value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
#endif
};
RED4EXT_ASSERT_SIZE(AnimInputSetterInt, 0x50);
} // namespace ent
using entAnimInputSetterInt = ent::AnimInputSetterInt;
using AnimInputSetterInt = ent::AnimInputSetterInt;
} // namespace RED4ext

// clang-format on
