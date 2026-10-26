#!/usr/bin/env python3
"""card: side-by-side review card for an (old 2.3.1, new 2.5.0) function pair. Read-only.
    card.py OLD_RVA NEW_RVA [full]
Prints strings, callee twins (macdiff matching), field offsets and constants that differ; with `full`, both disassemblies.
"""
import sys, pickle, collections, struct
import numpy as np
sys.path.insert(0, '/Users/frankgreico/repos/cp2077-mac/tools/addr-match')
import macdiff, rx, capstone
sys.path.insert(0, '/Users/frankgreico/repos/cp2077-mac/p25/loader/sdk-tools')
import bodycmp
from macdiff import calls_of
OLD = macdiff.__dict__.get('OLD') or '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/_backup-2026-10-09/Cyberpunk2077-jm.app/Contents/MacOS/Cyberpunk2077'
NEW = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/Cyberpunk2077.app/Contents/MacOS/Cyberpunk2077'
D = pickle.load(open('/Users/frankgreico/repos/cp2077-mac/p25/diff-feat.pkl', 'rb'))
O, N, match = D['O'], D['N'], D['match']
oidx = {int(a): i for i, a in enumerate(O['starts'])}
nidx = {int(a): i for i, a in enumerate(N['starts'])}
MO, MN = rx.MachO(OLD), rx.MachO(NEW)
md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)


def fn(A, rva):
    k = int(np.searchsorted(A['starts'], rva, side='right') - 1)
    return k, int(A['starts'][k]), int(A['ends'][k])


def dis(M, s, e, A, other_idx, other_A, is_old):
    """returns list of (addr, text) with labels for bl targets and strings"""
    code = M.read(s, e - s)
    adrp = {}
    out = []
    for ins in md.disasm(code, s):
        ops = ins.op_str
        extra = ''
        if ins.mnemonic == 'adrp':
            r, imm = ops.split(', ')
            adrp[r] = int(imm.lstrip('#'), 16)
        elif ins.mnemonic in ('add', 'ldr', 'str', 'ldrb', 'ldrsw', 'ldrh', 'strb') and '#' in ops:
            import re
            mm = re.match(r'(\w+), \[?(\w+)(?:, #(-?0x[0-9a-f]+|-?\d+))?', ops)
            if mm and mm.group(2) in adrp:
                imm = int(mm.group(3), 0) if mm.group(3) else 0
                t = adrp[mm.group(2)] + imm
                extra = f'  ; ->{t:#x} {M.cstr(t)}'
        if ins.mnemonic in ('bl', 'b') and ops.startswith('#0x'):
            t = int(ops[1:], 16)
            tw = ''
            if is_old and t in oidx and oidx[t] in match:
                tw = f' twin={int(N["starts"][match[oidx[t]]]):#x}'
            extra = f'  ; {t:#x}{tw}'
        out.append(f'{ins.address:#x}: {ins.mnemonic} {ops}{extra}')
    return out


def card(old, new, full=False, brief=False):
    ko, so, eo = fn(O, old)
    kn, sn, en = fn(N, new)
    print(f'OLD fn {so:#x}..{eo:#x} ({(eo-so)//4} insns) target {old:#x} (+{old-so:#x})   NEW fn {sn:#x}..{en:#x} ({(en-sn)//4} insns) target {new:#x} (+{new-sn:#x})')
    for tag, M, s, e, A in (('OLD', MO, so, eo, O), ('NEW', MN, sn, en, N)):
        strs = []
        for line in dis(M, s, e, A, None, None, tag == 'OLD'):
            if "'" in line and '; ->' in line:
                strs.append(line.split("; ->")[1].split(' ', 1)[1])
        print(tag, 'strings:', sorted(set(strs))[:12])
    co = [(a, oidx.get(a)) for a in calls_of(O, ko).tolist()]
    cn = [a for a in calls_of(N, kn).tolist()]
    tw_hits = 0; tw_total = 0; nomatch = 0; missing = []
    cn_left = collections.Counter(cn)
    for a, i in co:
        tw = int(N['starts'][match[i]]) if i in match else None
        if tw is None:
            nomatch += 1
        else:
            tw_total += 1
            if cn_left[tw] > 0:
                cn_left[tw] -= 1; tw_hits += 1
            else:
                missing.append((hex(a), hex(tw)))
    print(f'calls: old {len(co)} new {len(cn)}; old callees with a matched twin {tw_total}, found in new body {tw_hits}; old callees unmatched {nomatch}')
    if missing: print('   twins not called by new body (old->twin):', missing[:8])
    print('   new callees not twins of any old callee:', [hex(x) for x in cn if x not in {int(N["starts"][match[i]]) for a, i in co if i in match}][:10])
    # strings in callees that are new (outlined helpers) and in unmatched old callees
    def fstrings(A, B, addr, idx):
        k = idx.get(addr)
        if k is None: return []
        ra, rb = np.searchsorted(A['ref_pc'], [int(A['starts'][k]), int(A['ends'][k])])
        out = []
        for tt in A['ref_t'][ra:rb].tolist():
            c = B.cstring(int(tt))
            if c is not None and len(c) >= 3: out.append(c.decode('latin1'))
        return sorted(set(out))
    BN_ = bodycmp.macdiff.Bin(NEW); BO_ = bodycmp.macdiff.Bin(OLD)
    twinset = {int(N["starts"][match[i]]) for a, i in co if i in match}
    shown = 0
    for c in dict.fromkeys(cn):
        if c in twinset: continue
        s = fstrings(N, BN_, c, nidx)
        if s and shown < 8:
            print(f'   new helper {c:#x} strings: {s[:5]}'); shown += 1
    shown = 0
    for a, i in dict.fromkeys(co):
        if i in match: continue
        s = fstrings(O, BO_, a, oidx)
        if s and shown < 8:
            print(f'   old unmatched callee {a:#x} strings: {s[:5]}'); shown += 1
    fo = bodycmp.features(O, bodycmp.macdiff.Bin(OLD), ko)
    fnw = bodycmp.features(N, bodycmp.macdiff.Bin(NEW), kn)
    def d(a, b):
        return ({k: v - b.get(k, 0) for k, v in a.items() if v - b.get(k, 0) > 0})
    print('offsets only OLD:', sorted(d(fo['offs'], fnw['offs']).items(), key=str)[:14])
    print('offsets only NEW:', sorted(d(fnw['offs'], fo['offs']).items(), key=str)[:14])
    print('consts only OLD:', sorted(d(fo['consts'], fnw['consts']).items(), key=str)[:14])
    print('consts only NEW:', sorted(d(fnw['consts'], fo['consts']).items(), key=str)[:14])
    if full or (not brief and max(eo - so, en - sn) <= 4 * 130):
        print('--- OLD'); print('\n'.join(dis(MO, so, eo, O, None, None, True)))
        print('--- NEW'); print('\n'.join(dis(MN, sn, en, N, None, None, False)))


if __name__ == '__main__':
    if sys.argv[1] == '--batch':
        # --batch old:new[:full] ...   ('brief' = no disassembly unless 'full')
        for spec in sys.argv[2:]:
            parts = spec.split(':')
            print('===========', spec)
            try:
                card(int(parts[0], 16), int(parts[1], 16), full=len(parts) > 2 and parts[2] == 'full', brief=True)
            except Exception as ex:
                print('ERROR', ex)
    else:
        card(int(sys.argv[1], 16), int(sys.argv[2], 16), full=len(sys.argv) > 3)
