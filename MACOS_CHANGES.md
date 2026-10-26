# RED4ext.SDK macOS Changes

This document lists all changes made to support macOS (Apple Silicon/ARM64).

## Summary

All changes are **backwards compatible** with Windows. Platform-specific code is guarded with:

```cpp
#if defined(_WIN32) || defined(_WIN64)
    // Windows code
#else
    // macOS code (via RED4EXT_PLATFORM_MACOS)
#endif
```

---

## Files Modified

### `include/RED4ext/Detail/WinCompat.hpp` (NEW)

macOS compatibility layer providing Windows API equivalents:

| Feature | Implementation |
|---------|---------------|
| `HMODULE`, `HANDLE`, etc. | Type aliases to `void*` |
| `Interlocked*` functions | `__atomic_*` intrinsics |
| `InterlockedIncrement64/Decrement64` | 64-bit atomic operations |
| `_InterlockedCompareExchange8` | 8-bit CAS |
| `__declspec(align/noinline/dllexport)` | `__attribute__` equivalents |
| `GetModuleHandle(W)` | `dlopen`/`_dyld_get_image_header` |
| `_aligned_malloc/_aligned_free` | `posix_memalign`/`free` |

### `include/RED4ext/TLS-inl.hpp`

Thread-local storage access:

| Windows | macOS |
|---------|-------|
| `__readgsqword(0x58)` | pthread TLS via `g_gameTLS` pointer |

**Note:** macOS TLS requires runtime initialization by game hooks.

### `include/RED4ext/SharedSpinLock-inl.hpp`

Spinlock implementation:

| Windows | macOS |
|---------|-------|
| `_InterlockedCompareExchange8` | Macro from WinCompat.hpp |
| `InterlockedExchange8` | Macro from WinCompat.hpp |
| `SwitchToThread()` | `std::this_thread::yield()` |

### `include/RED4ext/Mutex.hpp`

Mutex implementation:

| Windows | macOS |
|---------|-------|
| `CRITICAL_SECTION` | `pthread_mutex_t` |
| Size assertion: 40 bytes | No size assertion (64 bytes on macOS) |

### `include/RED4ext/Mutex-inl.hpp`

```cpp
#if defined(_WIN32) || defined(_WIN64)
    InitializeCriticalSection(&m_cs);
#else
    pthread_mutex_init(&m_mutex, nullptr);
#endif
```

### `include/RED4ext/Relocation-inl.hpp`

Wide character output:

| Windows | macOS |
|---------|-------|
| `std::wcerr` | `std::cerr` (convert to narrow string) |

### `include/RED4ext/Mac/` (plugin support, header-only)

The Mac address table in `Relocation-inl.hpp` routes nine hashes to symbols each plugin defines (`tweakxl_memory_vault`,
`tweakxl_vault_*`, `tweakxl_class_vslot`, `tweakxl_rtti_async_id`, `tweakxl_serializable_counter`). After its own table,
`Resolve` now looks in the plugin's own image (`__dso_handle`) for a `__DATA,__red4ext_hooks` section (`Mac/RelocationHooks.hpp`):
the plugin's rows and an optional unknown-hash handler. A plugin without the section behaves as before.

A plugin built against the plain headers (the xmake package) adds one file that defines all of them:

```cpp
#define RED4EXT_MAC_PLUGIN_SUPPORT_IMPL
#define RED4EXT_MAC_RTTI_ASYNC_ID_BASE 0x7FF80000             // its id bands
#define RED4EXT_MAC_SERIALIZABLE_ID_BASE 0x7FC0000000000000
#define RED4EXT_MAC_PLUGIN_ROWS "MyPluginRows.inc"           // optional: { hash, RVA }, rows
#include <RED4ext/Mac/PluginSupport.hpp>
```

`PluginSupport.hpp` lists the options (`RED4EXT_MAC_PLUGIN_PROVIDES_HELPERS` for a plugin with its own vault,
`RED4EXT_MAC_NO_SDK_ROWS`, `RED4EXT_MAC_UNKNOWN_HASH_HANDLER`, log prefix, diagnostics variable). `Mac/SdkRows.inc` is a copy of
Codeware's `macos/MacSdkRows.inc` (the SDK-core rows the CMake ports inject); `Mac/MacPools.inc` is the game's pool list.

### `include/RED4ext/Common.hpp`

Macro compatibility:

```cpp
// Disable offsetof assertions for Clang (not allowed in static_assert)
#ifdef __clang__
#define RED4EXT_ASSERT_OFFSET(cls, member, offset)
#else
#define RED4EXT_ASSERT_OFFSET(cls, member, offset) \
    static_assert(offsetof(cls, member) == (offset), ...)
#endif
```

### `cmake/pch.hpp.in`

Precompiled header:

```cpp
#if defined(_WIN32) || defined(_WIN64)
#include <intrin.h>
#endif
```

---

## Build System Changes

### `CMakeLists.txt`

- Added macOS as supported platform
- Conditional linking: `-framework CoreFoundation` on macOS
- CMAKE_SYSTEM_PROCESSOR detection for ARM64

---

## API Compatibility

All public APIs remain unchanged. Plugins using RED4ext.SDK should:

1. **Compile without changes** on macOS
2. **Use the same headers** as Windows
3. **Link against the same library** (`RED4ext.dylib`)

### Example Plugin

```cpp
#include <RED4ext/RED4ext.hpp>

// Same code works on both platforms
RED4EXT_C_EXPORT bool RED4EXT_CALL Main(RED4ext::PluginHandle aHandle,
                                         RED4ext::EMainReason aReason,
                                         const RED4ext::Sdk* aSdk)
{
    // Platform-agnostic plugin code
    return true;
}
```

---

## Testing Status

| Feature | Windows | macOS |
|---------|---------|-------|
| Compilation | ✅ | ✅ |
| Linking | ✅ | ✅ |
| Runtime | ✅ | ✅ |
| Plugin loading | ✅ | ✅ |

---

## Known Limitations

1. **TLS Discovery** - macOS requires runtime TLS initialization (no GS segment)
2. **Mutex Size** - `pthread_mutex_t` is larger than `CRITICAL_SECTION`
3. **offsetof in static_assert** - Disabled for Clang compiler
