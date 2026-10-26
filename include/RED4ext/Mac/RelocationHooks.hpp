#pragma once

// macOS only. How UniversalRelocBase::Resolve (Relocation-inl.hpp) reaches a plugin's own address rows.
//
// After its own table, Resolve looks in the plugin's own image for a section __DATA,__red4ext_hooks holding one
// MacPluginHooksV1. RED4ext/Mac/PluginSupport.hpp emits it, in the one translation unit of the plugin that defines
// RED4EXT_MAC_PLUGIN_SUPPORT_IMPL. A plugin without the section (every CMake port) behaves exactly as before.
//
// A section rather than weak symbols: there is no definition for a later include to collide with, so the support file works
// after a force-included prelude or a precompiled header, and no static initializer has to run before the first Resolve
// (dyld has fixed the pointers before any code of the image runs). The image is found through __dso_handle, which the linker
// defines as the image's own Mach-O header, so each plugin dylib reads only its own section.
//
//   rva(hash)          RVA (relative to the game image) for a hash, 0 for "no row".
//   unknownHash(hash)  the address to return for a hash with no row anywhere, 0 for the SDK's "Unknown hash" warning and 0.

#if defined(__APPLE__)

#include <cstdint>
#include <mach-o/getsect.h>
#include <mach-o/loader.h>

#define RED4EXT_MAC_HOOKS_SEGMENT "__DATA"
#define RED4EXT_MAC_HOOKS_SECTION "__red4ext_hooks"

extern "C" __attribute__((visibility("hidden"))) const struct mach_header __dso_handle;

namespace RED4ext::Detail
{
struct MacPluginHooksV1
{
    static constexpr uint32_t CurrentVersion = 1;

    uint32_t version;
    uint32_t size; // sizeof(MacPluginHooksV1); a later version only appends fields
    uintptr_t (*rva)(uint32_t aHash);
    uintptr_t (*unknownHash)(uint32_t aHash);
};

// This image's hooks, or null. Hidden, so the cached pointer and the lookup stay per dylib.
__attribute__((visibility("hidden"))) inline const MacPluginHooksV1* MacPluginHooks()
{
    static const MacPluginHooksV1* const hooks = []() -> const MacPluginHooksV1* {
        unsigned long size = 0;
        const auto* header = reinterpret_cast<const mach_header_64*>(&__dso_handle);
        const auto* data = getsectiondata(header, RED4EXT_MAC_HOOKS_SEGMENT, RED4EXT_MAC_HOOKS_SECTION, &size);
        if (!data || size < sizeof(MacPluginHooksV1))
        {
            return nullptr;
        }
        const auto* found = reinterpret_cast<const MacPluginHooksV1*>(data);
        if (found->version < 1 || found->size < sizeof(MacPluginHooksV1))
        {
            return nullptr;
        }
        return found;
    }();
    return hooks;
}
} // namespace RED4ext::Detail

#endif
