#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace work
{
struct BodytypeCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workBodytypeCondition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<work::IWorkspotCondition>];
    RaRef<anim::Rig> rig; // 38
#else
    RaRef<anim::Rig> rig; // 38
#endif
};
RED4EXT_ASSERT_SIZE(BodytypeCondition, 0x40);
} // namespace work
using workBodytypeCondition = work::BodytypeCondition;
} // namespace RED4ext

// clang-format on
