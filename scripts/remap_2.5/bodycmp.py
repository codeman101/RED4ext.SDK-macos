#!/usr/bin/env python3
"""bodycmp: compare an arm64 function of game 2.3.1 with a candidate twin in game 2.5.0 (read-only, static).

Claude (Opus), 2026-10-26, for the loader-2.5 SDK address database. Uses tools/addr-match/macdiff.py's pickle
(p25/diff-feat.pkl: both binaries' function starts, masked body hashes, call and data-reference tables, and the
old->new function matching) so nothing is disassembled twice.

    bodycmp.py PKL pairs.json out.json
    pairs.json: [{"id": ..., "old": "0x...", "new": "0x..."}, ...]   (image-relative addresses, function starts or mid-function)

Per pair it reports:
  same_body   masked body hash equal (PC-relative fields and ADRP page offsets masked), i.e. the same instructions
  seq         difflib ratio of the masked instruction sequences
  size        instruction counts old/new
  strings     C strings referenced (old set vs new set): equal / jaccard
  consts      MOVZ/MOVN/MOVK/ADD/SUB/CMP immediates, as multisets: min/max overlap
  offsets     LDR/STR/LDP/STP field offsets from non-SP bases, as multisets: min/max overlap
  calls       bl count old/new, and how many of the old callees' matched twins (macdiff matching) are called by the new body
"""
import sys, json, pickle, collections, difflib
import numpy as np
sys.path.insert(0, '/Users/frankgreico/repos/cp2077-mac/tools/addr-match')
import macdiff
from macdiff import body, calls_of, refs_of

OLD = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/_backup-2026-10-09/Cyberpunk2077-jm.app/Contents/MacOS/Cyberpunk2077'
NEW = '/Volumes/Gaming Drive/SteamLibrary-Mac/steamapps/common/Cyberpunk 2077/Cyberpunk2077.app/Contents/MacOS/Cyberpunk2077'


def fn_index(A, rva):
    k = int(np.searchsorted(A['starts'], rva, side='right') - 1)
    if k < 0 or not (A['starts'][k] <= rva < A['ends'][k]):
        return None
    return k


def words(A, mask_unused, k, B):
    s, e = int(A['starts'][k]), int(A['ends'][k])
    raw = B.read(s, e - s)
    return np.frombuffer(raw, dtype='<u4'), s


def features(A, B, k):
    w, s = words(A, None, k, B)
    refpcs = set(int(x) for x in A['ref_pc'][np.searchsorted(A['ref_pc'], s):np.searchsorted(A['ref_pc'], s + 4 * len(w))])
    consts = collections.Counter()
    offs = collections.Counter()
    for i, x in enumerate(w.tolist()):
        pc = s + 4 * i
        if pc in refpcs:
            continue
        top = x & 0x7F800000
        if top in (0x52800000, 0x12800000, 0x72800000):  # movz / movn / movk (w and x forms share these after masking sf)
            consts[('mov', (x >> 5) & 0xFFFF, (x >> 21) & 3, top)] += 1
        elif (x & 0x7F000000) in (0x11000000, 0x31000000, 0x51000000, 0x71000000):  # add/adds/sub/subs imm
            rn, rd = (x >> 5) & 31, x & 31
            setflags = bool(x & 0x20000000)
            if not (rn == 31 or (rd == 31 and not setflags)):  # leave out stack-pointer arithmetic
                consts[('arith', ((x >> 10) & 0xFFF) << (12 if (x >> 22) & 1 else 0))] += 1
        if (x & 0x3B000000) == 0x39000000:  # ldr/str unsigned offset (GPR, FP, vector)
            rn = (x >> 5) & 31
            if rn != 31:
                scale = (x >> 30) & 3
                if (x >> 26) & 1 and (x >> 23) & 1:
                    scale = 4
                offs[(((x >> 10) & 0xFFF) << scale, scale)] += 1
        elif (x & 0x3E000000) == 0x28000000 and ((x >> 23) & 3) in (1, 2, 3):  # ldp/stp (post, offset, pre)
            rn = (x >> 5) & 31
            if rn != 31:
                imm7 = (x >> 15) & 0x7F
                imm7 = imm7 - 128 if imm7 & 64 else imm7
                opc, v = (x >> 30) & 3, (x >> 26) & 1
                scale = (4 << opc) if v else (8 if opc == 2 else 4)
                offs[(imm7 * scale, 'p')] += 1
    strs = set()
    ra, rb = np.searchsorted(A['ref_pc'], [s, s + 4 * len(w)])
    for t in A['ref_t'][ra:rb].tolist():
        c = B.cstring(int(t))
        if c is not None and len(c) >= 3:
            strs.add(c)
    return dict(n=len(w), consts=consts, offs=offs, strs=strs)


def ms_overlap(a, b):
    if not a and not b:
        return 1.0
    keys = set(a) | set(b)
    num = sum(min(a[k], b[k]) for k in keys)
    den = sum(max(a[k], b[k]) for k in keys)
    return num / den if den else 1.0


def main():
    pkl, pairs_path, out_path = sys.argv[1:4]
    D = pickle.load(open(pkl, 'rb'))
    O, N = D['O'], D['N']
    BO, BN = macdiff.Bin(OLD), macdiff.Bin(NEW)
    match = D['match']
    rev = {v: k for k, v in match.items()}
    nidx = {int(a): i for i, a in enumerate(N['starts'])}
    oidx = {int(a): i for i, a in enumerate(O['starts'])}
    pairs = json.load(open(pairs_path))
    out = []
    fcache = {}
    for p in pairs:
        old, new = int(p['old'], 16), int(p['new'], 16)
        ko, kn = fn_index(O, old), fn_index(N, new)
        r = dict(id=p['id'], old=hex(old), new=hex(new))
        if ko is None or kn is None:
            r['error'] = 'not in __text (old %s, new %s)' % (ko is not None, kn is not None)
            out.append(r)
            continue
        r['old_start'] = hex(int(O['starts'][ko]))
        r['new_start'] = hex(int(N['starts'][kn]))
        r['new_is_start'] = int(N['starts'][kn]) == new
        r['old_is_start'] = int(O['starts'][ko]) == old
        r['delta_old'] = old - int(O['starts'][ko])
        r['delta_new'] = new - int(N['starts'][kn])
        r['same_body'] = bool(O['hashes'][ko] == N['hashes'][kn])
        ob, nb = body(O, D['Omask'], ko), body(N, D['Nmask'], kn)
        r['size'] = [len(ob), len(nb)]
        if len(ob) * len(nb) < 4_000_000:
            r['seq'] = round(difflib.SequenceMatcher(None, ob, nb, autojunk=False).ratio(), 3)
        else:
            r['seq'] = None
        for key, A, B, k in (('o', O, BO, ko), ('n', N, BN, kn)):
            ck = (key, k)
            if ck not in fcache:
                fcache[ck] = features(A, B, k)
        fo, fn = fcache[('o', ko)], fcache[('n', kn)]
        r['strings_old'] = sorted(s.decode('latin1') for s in fo['strs'])[:6]
        r['strings_new'] = sorted(s.decode('latin1') for s in fn['strs'])[:6]
        r['strings_equal'] = fo['strs'] == fn['strs']
        r['strings_jacc'] = round(len(fo['strs'] & fn['strs']) / max(1, len(fo['strs'] | fn['strs'])), 3) if (fo['strs'] or fn['strs']) else None
        r['consts'] = round(ms_overlap(fo['consts'], fn['consts']), 3)
        r['offsets'] = round(ms_overlap(fo['offs'], fn['offs']), 3)
        co = [oidx[a] for a in calls_of(O, ko).tolist() if a in oidx]
        cn = [nidx[a] for a in calls_of(N, kn).tolist() if a in nidx]
        cn_set = collections.Counter(cn)
        twins = [match[c] for c in co if c in match]
        hit = 0
        tmp = cn_set.copy()
        for t in twins:
            if tmp[t] > 0:
                tmp[t] -= 1
                hit += 1
        r['calls'] = [len(co), len(cn), len(twins), hit]
        # callers: direct callers of the old function (bl/b at any place) mapped through the matching versus callers of the new function
        def caller_set(A, target):
            hits = np.nonzero(A['call_t'] == target)[0]
            return set(int(np.searchsorted(A['starts'], int(A['call_pc'][h]), side='right') - 1) for h in hits)
        oc = caller_set(O, int(O['starts'][ko]))
        nc = caller_set(N, int(N['starts'][kn]))
        otw = set(match[c] for c in oc if c in match)
        r['callers'] = [len(oc), len(nc), len(otw), len(otw & nc)]
        out.append(r)
    json.dump(out, open(out_path, 'w'), indent=1)
    print('wrote', len(out))


if __name__ == '__main__':
    main()
