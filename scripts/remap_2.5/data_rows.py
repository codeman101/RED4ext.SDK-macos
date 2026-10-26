# data rows (not config variables): hash -> (status, new_rva, method, note)
DATA = {
 '458427884': ('U', 0x7eb5740, 'data-xref', 'Memory_Vault: 6 of 6 referencing functions have twins that reference the new address; unverified in 2.3.1 (not the vault; unused on macOS) and stays so'),
 '677908004': ('U', 0x944ead0, 'data-xref', 'LaunchParameters: 3 of the 4 referencing functions have twins that reference the new address (0x4e3253c does not); unverified in 2.3.1 and stays so'),
 '961751128': ('V', 0x9a5c940, 'data-xref', 'OpcodeHandlers: 3610 of the 3612 referencing functions that have a twin reference the new address; macdiff data votes 127; sdk-pkg table agrees'),
 '1508445968': ('V', 0x9d0e550, 'data-xref', 'JobDispatcher: 26 of 26 referencing functions that have a twin reference the new address; sdk-pkg table agrees'),
 '1704595399': ('V', 0x805a7d8, 'data-xref', 'ResourceDepot: both referencing functions (accessors 0x21c6820, 0x21c682c -> 0x10f1230, 0x10f123c) have twins that reference the new address; sdk-pkg table agrees'),
 '2017202228': ('V', 0x99dc690, 'data-xref', 'ResourceLoader: 188 of 189 referencing functions with a twin reference the new address'),
 '2549221846': ('V', 0x9d0e288, 'data-xref', 'CGameEngine: 399 of 402 referencing functions with a twin reference the new address; sdk-pkg table agrees'),
 '2630817091': ('V', 0x99dc5e8, 'data-xref', 'ISerializable_Counter: the single referencing function 0x2186b30 -> 0x10b158c references the new address'),
 '2635337807': ('V', 0x8ece4d0, 'data-xref', 'InkSystem instance: 7 of 7 referencing functions with a twin reference the new address'),
 '3720157672': ('V', 0x8055a60, 'data-xref', 'RTTI async id counter: the single referencing function 0x2184d7c -> 0x10af5dc (propagate match) has the same shape (function-local static guard at +8, ldaddal +1, returns +1); counter 0x7d69e50 -> 0x8055a60, guard 0x7d69e58 -> 0x8055a68'),
 '3788966949': ('V', 0x9cc5908, 'data-xref', 'RedFileManager instance: 120 of 120 referencing functions with a twin reference the new address'),
 '161059256': ('V', 0x9d231f0, 'data-xref', 'Renderer/Global (DRS and MetalFX upscaler state): 651 of 655 referencing functions with a twin reference the new address; the matched DRS::Update twin loads it'),
 '882511585': ('V', 0x78300d8, 'data-xref', 'CStack vtable (slot 0 value): 5 of 7 slots are twin-confirmed function pointers in the same positions, the other two unmatched; macdiff data votes 4; sdk-pkg table agrees'),
 '1391946771': ('V', 0x73c2be0, 'script', 'Upscaler/ScaleTable: scripts/upscaler_scale_table.py on the 2.5 binary finds the four floats (1.5, 1.7, 2.0, 3.0) once in __TEXT,__const at 0x73c2be0 with 6 ADRP+ADD references from code'),
}
