#pragma once

// macOS only: the plugin-side pieces the Mac SDK needs, for a plugin that consumes the SDK as plain headers (the xmake
// red4ext-sdk package, for example) and has no copy of its own.
//
// The Mac table in Relocation-inl.hpp routes nine hashes to symbols the plugin defines (the game has no Memory::Vault global and
// no matching RTTI id counters): tweakxl_memory_vault, tweakxl_vault_alloc / _alloc_aligned / _realloc / _realloc_aligned /
// _free, tweakxl_class_vslot, tweakxl_rtti_async_id, tweakxl_serializable_counter. Unknown hashes go through the two hooks of
// RED4ext/Mac/RelocationHooks.hpp (the plugin's rows, through a section of its own image). This header defines all of them, in
// ONE translation unit of the plugin:
//
//     // MySdkSupport.cpp, the whole file. The defines come before any include.
//     #define RED4EXT_MAC_PLUGIN_SUPPORT_IMPL
//     #define RED4EXT_MAC_RTTI_ASYNC_ID_BASE 0x7FF80000            // this plugin's id bands (required, see below)
//     #define RED4EXT_MAC_SERIALIZABLE_ID_BASE 0x7FC0000000000000
//     #define RED4EXT_MAC_PLUGIN_ROWS "MyPluginRows.inc"          // optional: this plugin's { hash, RVA }, rows
//     #include <RED4ext/Mac/PluginSupport.hpp>
//
// Every other translation unit includes the SDK as usual. Nothing here is compiled anywhere else, and a plugin that never defines
// RED4EXT_MAC_PLUGIN_SUPPORT_IMPL (all the CMake ports, which carry their own MacVault.cpp) is unaffected. Other SDK headers may
// come first (a force-included prelude, a precompiled header): nothing here collides with them.
//
// Options (define before the include, in that one file):
//   RED4EXT_MAC_RTTI_ASYNC_ID_BASE      Required (unless the next option is set). First id of this plugin's async RTTI id band
//                                       (0x10000 wide). Bands taken so far: TweakXL 0x7FFF0000, Codeware 0x7FFE0000, ArchiveXL
//                                       0x7FFD0000, LTBF 0x7FFC0000, Mod Settings 0x7FFB0000, CET 0x7FFA0000, IWN 0x7FF90000,
//                                       New Game Plus 0x7FF80000. Two plugins in one game must not share a band.
//   RED4EXT_MAC_SERIALIZABLE_ID_BASE    Required (same). Start of this plugin's serializable id band (64-bit). TweakXL 1<<62, then
//                                       each plugin one bit lower on top of the previous (Codeware +1<<61, ArchiveXL +1<<60, ...).
//   RED4EXT_MAC_PLUGIN_PROVIDES_HELPERS The plugin defines the nine tweakxl_* symbols itself; only the rows and the unknown-hash
//                                       handler come from here.
//   RED4EXT_MAC_PLUGIN_ROWS             A quoted include name: rows `{ hash, RVA },  // name` for hashes the SDK table lacks.
//                                       RVA is relative to the Cyberpunk2077 image. The SDK table wins for a hash in both.
//   RED4EXT_MAC_NO_SDK_ROWS             Leave out RED4ext/Mac/SdkRows.inc, the SDK-core rows (jobs, reflection, resource loader,
//                                       update registrar) the CMake ports inject from Codeware's macos/MacSdkRows.inc.
//   RED4EXT_MAC_UNKNOWN_HASH_HANDLER    A function `extern "C" uintptr_t f(uint32_t aHash)` of the plugin for a hash with no row
//                                       (a trap stub, say). A nonzero result is returned; 0 (and the default) gives the SDK's
//                                       "Unknown hash" warning and 0.
//   RED4EXT_MAC_LOG_PREFIX              String literal in front of the vault's log lines. Default "[RED4ext.SDK]".
//   RED4EXT_MAC_DIAG_ENV                Environment variable that turns on the vault's diagnostic lines. Default "RED4EXT_MAC_DIAG".
//
// Everything defined here is hidden: each plugin dylib binds its own copy.

#if defined(__APPLE__)

namespace RED4ext::Mac
{
// True when the game's PoolStorageProxy functions were found where this build expects them. Not defined with
// RED4EXT_MAC_PLUGIN_PROVIDES_HELPERS.
__attribute__((visibility("hidden"))) bool VaultReady();

// Allocates and frees 64 bytes through each of the seven core pools and checks the vault lookup; one log line per pool.
__attribute__((visibility("hidden"))) bool VaultSelfTest();
} // namespace RED4ext::Mac

#if defined(RED4EXT_MAC_PLUGIN_SUPPORT_IMPL)

#include <RED4ext/Mac/RelocationHooks.hpp>

#include <cstdint>
#include <unordered_map>

#if !defined(RED4EXT_MAC_PLUGIN_PROVIDES_HELPERS)
#if !defined(RED4EXT_MAC_RTTI_ASYNC_ID_BASE) || !defined(RED4EXT_MAC_SERIALIZABLE_ID_BASE)
#error "RED4ext/Mac/PluginSupport.hpp: define RED4EXT_MAC_RTTI_ASYNC_ID_BASE and RED4EXT_MAC_SERIALIZABLE_ID_BASE (this plugin's id bands)"
#endif
#endif

#if defined(RED4EXT_MAC_UNKNOWN_HASH_HANDLER)
extern "C" uintptr_t RED4EXT_MAC_UNKNOWN_HASH_HANDLER(uint32_t aHash);
#endif

// ---- Rows and the unknown-hash handler, published to Resolve through this image's __DATA,__red4ext_hooks section ----

namespace RED4ext::Mac::Impl
{
namespace
{
uintptr_t PluginRva(uint32_t aHash)
{
    // Never destroyed, like the SDK table: exit() runs static destructors before RED4ext unloads the plugins, and an SDK call
    // made from Unload would otherwise look its hash up in a freed map.
    static const std::unordered_map<uint32_t, uintptr_t>& rows = *new std::unordered_map<uint32_t, uintptr_t>{
#if !defined(RED4EXT_MAC_NO_SDK_ROWS)
#include <RED4ext/Mac/SdkRows.inc>
#endif
#if defined(RED4EXT_MAC_PLUGIN_ROWS)
#include RED4EXT_MAC_PLUGIN_ROWS
#endif
    };
    const auto it = rows.find(aHash);
    return it != rows.end() ? it->second : 0;
}

// `used` keeps it through the compiler and the linker's dead stripping (.no_dead_strip); nothing references it by name.
__attribute__((used, section(RED4EXT_MAC_HOOKS_SEGMENT "," RED4EXT_MAC_HOOKS_SECTION)))
const RED4ext::Detail::MacPluginHooksV1 kPluginHooks = {
    RED4ext::Detail::MacPluginHooksV1::CurrentVersion,
    sizeof(RED4ext::Detail::MacPluginHooksV1),
    &PluginRva,
#if defined(RED4EXT_MAC_UNKNOWN_HASH_HANDLER)
    &RED4EXT_MAC_UNKNOWN_HASH_HANDLER,
#else
    nullptr,
#endif
};
} // namespace
} // namespace RED4ext::Mac::Impl

#if !defined(RED4EXT_MAC_PLUGIN_PROVIDES_HELPERS)
#include <RED4ext/Mac/PluginSupport-inl.hpp>
#endif

#endif // RED4EXT_MAC_PLUGIN_SUPPORT_IMPL

#endif // __APPLE__
