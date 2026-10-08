#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work { struct IScriptedCondition; }

namespace work
{
struct ScriptedCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workScriptedCondition";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_38[0x38 - ::RED4ext::Detail::DataSize<work::IWorkspotCondition>];
    Handle<work::IScriptedCondition> script; // 38
#else
    Handle<work::IScriptedCondition> script; // 38
#endif
};
RED4EXT_ASSERT_SIZE(ScriptedCondition, 0x48);
} // namespace work
using workScriptedCondition = work::ScriptedCondition;
} // namespace RED4ext

// clang-format on
