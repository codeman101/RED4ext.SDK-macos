#if defined(__APPLE__)
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableBoolBase : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableBoolBase";
    static constexpr const char* ALIAS = NAME;

    bool defaultValue; // 40
#if !defined(__APPLE__)
    uint8_t unk41[0x48 - 0x41]; // 41
#endif // the game reuses this tail padding (see Detail::DataSize)
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableBoolBase, 0x48);
} // namespace RED4ext

// clang-format on

#else
#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableBoolBase : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableBoolBase";
    static constexpr const char* ALIAS = NAME;

    bool defaultValue; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableBoolBase, 0x48);
} // namespace RED4ext

// clang-format on

#endif
