#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct ITexture;

struct CMaterialParameterTexture : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterTexture";
    static constexpr const char* ALIAS = NAME;

#if defined(__APPLE__)
// mac-layout (generated from the reflection dump)
    uint8_t unk_40[0x40 - ::RED4ext::Detail::DataSize<CMaterialParameter>];
    Ref<ITexture> texture; // 40
#else
    Ref<ITexture> texture; // 40
    uint8_t unk58[0x60 - 0x58]; // 58
#endif
};
RED4EXT_ASSERT_SIZE(CMaterialParameterTexture, 0x60);
} // namespace RED4ext

// clang-format on
