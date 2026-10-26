# Address database for game 2.5.0

`cyberpunk2077_addresses.json` on this branch describes Cyberpunk 2077 **2.5.0** for macOS: LC_UUID
`7D7382D0-EADD-36F0-BA1C-CEBEC1D5BEBC`, CFBundleVersion 5814786. Every row was carried over from the 2.3.1 database (UUID
`A6656ADC-FBE2-36A4-9B9D-B4A9DE645089`, the file at the base of this branch, f657158c0 plus the merged pull requests #2 to #9).
The hashes did not change; only the offsets and the `verified` flags did. Per-row evidence is in
[ADDRESS_DB_2.5_EVIDENCE.tsv](ADDRESS_DB_2.5_EVIDENCE.tsv) (hash, name, old offset, new offset, method, verified before and after, note).
All work is static analysis of the two binaries on disk (nothing was run); the tools are in `scripts/remap_2.5/`.

Offsets keep the format `segment:0xOFFSET` (1 = `__TEXT`, 2 = `__DATA_CONST`, 3 = `__DATA`, offset from the start of that segment).
The segments moved: 2.5.0 has `__TEXT` 0x7758000 bytes, `__DATA_CONST` at 0x107758000 (was 0x106DE0000) and `__DATA` at
0x107D30000 (was 0x107394000). `__text` grew from 343k to 434k functions, so most bodies changed.

## Counts

| | 2.3.1 (merged) | 2.5.0 |
|---|---|---|
| rows | 699 | 699 |
| resolved (offset not 0) | 694 | 687 |
| unresolved | 5 | 12 |
| verified | 635 | 633 |

Verified rows in 2.5.0 by method (633):

| method | rows | evidence |
|---|---|---|
| `configvar-name` | 394 | `scripts/config_var_dump.py` run on both binaries (with two fixes in the copy used here: stores that reach the object through a base register, and a longer replay window for the 9000-instruction initializer). Same group and name strings, same constructor call, same value-type vtable (bool/int/float) as in 2.3.1. 391 variables, plus the 3 value-type vtables. |
| `accepted-auto` | 110 | The old-to-new pair is an accepted entry of `p25/accepted-auto.tsv` (exact, propagate, feature-matched at 0.9 or above), re-checked with `bodycmp.py` (callee twins, caller twins). |
| `manual-comparison` | 40 | Read side by side: disassembly or a card from `card.py`, vtable context (`vtctx*.py`), caller context (`callers.py`), string evidence (`strrefs.py`). The note column of the TSV says what was compared. |
| `bodycmp` | 39 | Same strings, similar constants and field offsets, matched callees, sequence similarity at least 0.4 (`bodycmp.py`); all but 11 also have a reviewer entry in `p25/map-final.tsv` (CONFIRMED or CORRECTED). The 11 without one have sequence similarity 0.5 to 0.98 and all their callees matched. |
| `exact/named/propagate` | 38 | The masked body hash (PC-relative fields masked) is identical, from `macdiff.py`. |
| `data-xref` | 11 | Data rows: the functions that reference the global in 2.3.1 have twins that reference the 2.5.0 address (the notes give the counts). |
| `script` | 1 | `scripts/upscaler_scale_table.py` on the 2.5.0 binary. |

A row is verified in 2.5.0 only if it was verified in 2.3.1. Unverified rows were mapped when the match was good (54 rows with an
offset, still unverified) and set to 0 otherwise.

## Rows that lost `verified`

| hash | name | why |
|---|---|---|
| 620961393 | MappinSystem_GetPoiData | The 4-instruction stub was merged into 0x30F7934 in 2.5.0. The macdiff exact match 0x30F7C20 is the twin of the neighbouring stub, not of this one. Set to 0. |
| 1426857557 | ConfigVar MFX/PreExposure | No variable with this group, name and value type in 2.5.0 (`FSR2/PreExposure` exists, a different group). Set to 0. |

## Where an automatic match was wrong

Tiny functions that differ only in a branch target look identical after masking, so `macdiff.py` exact matches are not enough for
them. The checks that caught this:

- TTypedClass_IsEqual (1482886888): the row is the shared one-instruction vtable thunk (`b` to the body). macdiff exact gave 0x4BF3BD0,
  which is a different thunk used once. The thunk in 8351 vtables in 2.5.0 (8241 in 2.3.1, previous slot a twin in 8241 of 8241) is
  0xF611F8.
- MappinSystem_GetPoiData: see above.
- CNamePool_Get (1759447004): 0x4E38940 has the same two-instruction body and the same signature; 0x4E38948 is a new wrapper that also
  returns the length, and the old call sites moved to it. The row points at 0x4E38940.
- CClassFunction_ctor, CClassStaticFunction_ctor, CGlobalFunction_ctor: two byte-identical twins each in 2.5.0, only one has callers.

## Cross-check against the 2.5.0 table of `p25/pr/sdk-pkg` (branch mac-next-pkg)

67 hashes are in both the database and sdk-pkg (`Relocation-inl.hpp` table and `Mac/SdkRows.inc`). 65 agree. The two that differ:

| hash | name | database (2.5.0) | sdk-pkg | explanation |
|---|---|---|---|---|
| 240386859 | Main | 0x4E3274C | 0x323A0 | The database row is the engine initializer that `main()` calls first (the row's commit message, 29f6b1b54); sdk-pkg has `main()` itself (0x323A0 calls 0x4E3274C). Different functions by design. |
| 1482886888 | TTypedClass_IsEqual | 0xF611F8 | 0x10C3BC8 | The database keeps the vtable thunk, sdk-pkg the body it jumps to (docs/re/rttireg.md: equivalent). Hook the body, call either. |

Against the other 2.5.0 plugin tables (Codeware, ArchiveXL, TweakXL, Ltbf, NG+, CET, IWN, Mod Settings) the only further difference is
hash 4285205681 (AssertionFailed, unverified): NG+ lists 0x2D80, which is mid-function; the database has 0x94FEB0 (same body, one vtable
slot).

## Loader hooks (hashes in the loader's `Detail/AddressHashes.hpp`)

| hash | name | 2.5.0 | state |
|---|---|---|---|
| 240386859 | WinMain / Main | 0x4E3274C | verified |
| 4223801011 | CGameApplication_AddState | 0x4D6A27C | verified |
| 898639042 | ScriptValidator_Validate | 0x11A7E28 | verified |
| 3230163856 | GameInstance_CollectSaveableSystems | 0x9A03B8 | unverified (same body) |
| 4285205681 | AssertionFailed | 0x94FEB0 | unverified (same body) |
| 3570081113 | CBaseEngine_LoadScripts | 0x4D7ABBC | unverified; the four script blob names are referenced by the same three functions as in 2.3.1, this one by all four |
| 2141394294 | GsmState_SessionActive_ReportErrorCode | 0x15D2B2C | unverified; same code, 24 of 24 vtable neighbours |
| 2875532677 | CBaseEngine_InitScripts | 0 | inlined, as in 2.3.1 |
| 2203918127 | Global_ExecuteProcess | 0 | no twin, as in 2.3.1 |
| 388826167 | QuickExit | not in the database | |

## Unresolved rows (offset 0)

The 5 that were already 0 in 2.3.1 (see `ALLOW_ZERO` in `scripts/validate_addresses.py`), and 7 more, all with a reason in the TSV and
in `ALLOW_ZERO`: ResourceReference_Load (the 2.3.1 entry was mid-function), MappinSystem_GetPoiData, CBaseFunction_Handlers (a data
address recorded with segment 1), CommandListContext_FlushPendingBarriers, CommandListContext_AddPendingBarrier, CommandListContext_dtor,
and the ConfigVar MFX/PreExposure row.

## Validator

`python3 scripts/validate_addresses.py --binary <2.5.0 Cyberpunk2077>`: 0 errors, 37 warnings (leaf functions without a stack prologue),
with and without `--verified-only`. `KNOWN_LAYOUT` (used when no binary is given) is now the 2.5.0 layout. The 2.3.1 verification
scripts that carry fixed addresses (`medium_heap.py`, `drs_update.py`, `rtti_layout_scan.py`) still describe 2.3.1.

## Reproducing

`scripts/remap_2.5/README.txt`. The tools read `~/repos/cp2077-mac/p25/diff-feat.pkl` (macdiff's matching of the two binaries) and
`tools/addr-match` from the cp2077-mac workspace, so they run only there.
