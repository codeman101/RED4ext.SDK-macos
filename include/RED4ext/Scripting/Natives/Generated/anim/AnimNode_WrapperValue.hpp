#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphLogicOp.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_WrapperValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_WrapperValue";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_48[0x48 - ::RED4ext::Detail::DataSize<anim::AnimNode_FloatValue>];
    DynArray<CName> wrapperNames; // 48
    uint8_t unk_58[0x58 - (0x48 + sizeof(wrapperNames))];
    anim::EAnimGraphLogicOp logicOp; // 58
    uint8_t unk_5C[0x5C - (0x58 + sizeof(logicOp))];
    bool oneMinus; // 5C
#else
    DynArray<CName> wrapperNames; // 48
    anim::EAnimGraphLogicOp logicOp; // 58
    bool oneMinus; // 5C
    uint8_t unk5D[0x70 - 0x5D]; // 5D
#endif
};
RED4EXT_ASSERT_SIZE(AnimNode_WrapperValue, 0x70);
} // namespace anim
using animAnimNode_WrapperValue = anim::AnimNode_WrapperValue;
} // namespace RED4ext

// clang-format on
