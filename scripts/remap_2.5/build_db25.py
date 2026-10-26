#!/usr/bin/env python3
"""build_db25: remap cyberpunk2077_addresses.json from game 2.3.1 to 2.5.0 and write the per-row evidence. Claude (Opus), 2026-10-26.

Inputs (all read-only):
  - the merged 2.3.1 database (loader-2.5 worktree)
  - p25/map-final.tsv, accepted-auto.tsv, all.map, decide.tsv, decisions-claude.tsv (macdiff / feature matching results and their review)
  - bodycmp output (sdk-tools/bodycmp.py) for every candidate pair
  - config_var_dump.py output for both binaries (config variable rows are remapped by group/name)
  - the hash tables of the 2.5 plugin builds and the sdk-pkg SDK (hash -> RVA), only for corroboration and the cross-check
  - sdk-tools/manual.py: decisions made by hand (disassembly, vtable context, caller context)

Outputs: new database, evidence TSV, summary.json.
"""
import json, re, sys, collections, os
SCR = sys.argv[1]            # scratch dir with the intermediate files
SDK = sys.argv[2]            # worktree
OUT = sys.argv[3]            # output dir
P = '/Users/frankgreico/repos/cp2077-mac/p25/'
sys.path.insert(0, SDK + '/scripts')
from config_var_dump import fnv1a32, vtable_types

SEG231 = {1: 0, 2: 0x6de0000, 3: 0x7394000}
SEG25 = {1: (0, 0x7758000), 2: (0x7758000, 0x5d8000), 3: (0x7d30000, 0x1ff8000)}
NEWUUID = '7D7382D0-EADD-36F0-BA1C-CEBEC1D5BEBC'


def seg_of(rva):
    for s, (b, n) in SEG25.items():
        if b <= rva < b + n:
            return s, rva - b
    return None, None


db = json.load(open(SDK + '/cyberpunk2077_addresses.json'))
names = {}
for n, v in re.findall(r"constexpr\s+(?:std::)?uint32_t\s+(\w+)\s*=\s*(0x[0-9A-Fa-f]+|\d+)", open(SDK + '/include/RED4ext/Detail/AddressHashes.hpp').read()):
    names.setdefault(int(v, 0), n)
harv = json.load(open(SCR + '/harvest.json'))
for h, v in harv.items():
    for f, rva, cm in v:
        m = re.match(r'([A-Za-z_][\w:/]*)', cm or '')
        if m and int(h) not in names and not m.group(1)[0].isdigit():
            names.setdefault(int(h), m.group(1) + '*')   # '*' = name taken from a plugin table comment
for _t in ('Renderer/Global', 'Upscaler/ScaleTable', 'DRS/Update', 'Memory/MediumHeap/Alloc', 'Memory/MediumHeap/AllocDefault',
           'Memory/MediumHeap/Free', 'Memory/MediumHeap/Init', 'Memory/MediumHeap/Release'):
    names.setdefault(fnv1a32(_t), _t)
exec(open(SCR + '/manual.py').read())   # M
exec(open(SCR + '/datarows.py').read())  # DATA: hash -> (status, new_rva, method, note)


def loadmap(path):
    d = collections.defaultdict(list)
    for line in open(path):
        f = line.rstrip('\n').split('\t')
        if len(f) >= 2 and f[0].startswith('0x'):
            d[int(f[0], 16)].append(f)
    return d


maps = {n: loadmap(P + n) for n in ['map-final.tsv', 'accepted-auto.tsv', 'all.map', 'decide.tsv', 'decisions-claude.tsv']}
maps['macdiff-text'] = loadmap(SCR + '/macdiff-text.out')
bc = {}
for x in json.load(open(SCR + '/bodycmp-text.json')):
    bc[(x['id'], int(x['new'], 16))] = x
c231 = json.load(open(SCR + '/cv231d.json'))
c25 = json.load(open(SCR + '/cv25d.json'))
t231, t25 = vtable_types(c231), vtable_types(c25)
for r in c231: r['type'] = t231.get(r['vtable'])
for r in c25: r['type'] = t25.get(r['vtable'])
cv231 = {(r['group'], r['name']): r for r in c231}
cv25 = {(r['group'], r['name']): r for r in c25}
cvhash = {str(fnv1a32(f"ConfigVar/{g}/{n}")): (g, n) for (g, n) in cv231}
cvtype = {str(fnv1a32(f"ConfigVar/@{k}")): k for k in ('bool', 'int', 'float')}


def h2i(x):
    try:
        return int(x, 16)
    except Exception:
        return None


def mdesc(r, rva, pick):
    """short list of the sources that carry this old->new pair"""
    out = []
    for n in ('map-final.tsv', 'accepted-auto.tsv', 'decisions-claude.tsv', 'macdiff-text', 'all.map'):
        for f in maps[n].get(rva, []):
            if h2i(f[1]) == pick:
                lab = {'map-final.tsv': 'map-final:' + f[2], 'accepted-auto.tsv': 'accepted-auto:' + f[2].split()[0],
                       'decisions-claude.tsv': 'decisions-claude:' + f[2], 'macdiff-text': 'macdiff:' + f[2].replace(' ', '_'),
                       'all.map': 'all.map'}[n]
                out.append(lab)
    for x in r['harv']:
        if x[1] == pick:
            out.append('table:' + os.path.basename(x[0]))
    return out


def metrics_str(m):
    s = f"seq={m['seq']} strings={'eq' if m['strings_equal'] else m['strings_jacc']} consts={m['consts']} offsets={m['offsets']} callees={m['calls'][3]}/{m['calls'][2]} callers={m['callers'][3]}/{m['callers'][2]} insns={m['size'][0]}->{m['size'][1]}"
    return s


rows = []
for r in db['Addresses']:
    seg, off = r['offset'].split(':')
    seg = int(seg); off = int(off, 16)
    h = int(r['hash'])
    rows.append(dict(hash=r['hash'], seg=seg, off=off, rva=(SEG231[seg] + off) if off else 0, ver=bool(r.get('verified')),
                     name=names.get(h, ''), harv=harv.get(r['hash'], [])))

recs = []
cands_cache = {}


def cands_for(r):
    rva = r['rva']
    out = collections.OrderedDict()

    def add(v, src):
        if v and v > 0:
            out.setdefault(v, []).append(src)
    for n in ('map-final.tsv', 'accepted-auto.tsv', 'decisions-claude.tsv', 'decide.tsv'):
        for f in maps[n].get(rva, []):
            add(h2i(f[1]), n)
    for n in ('macdiff-text', 'all.map'):
        for f in maps[n].get(rva, []):
            add(h2i(f[1]), n)
    for x in r['harv']:
        add(x[1], 'table')
    return out


def pickbest(r):
    c = cands_for(r)
    order = []
    for v, s in c.items():
        if 'map-final.tsv' in s or 'decisions-claude.tsv' in s: pr = 1
        elif 'accepted-auto.tsv' in s: pr = 2
        elif any(x in s for x in ('macdiff-text', 'all.map')):
            ms = [f[2] for n in ('macdiff-text', 'all.map') for f in maps[n].get(r['rva'], []) if h2i(f[1]) == v][0]
            pr = 3 if ms.split(' ')[0] in ('exact', 'named', 'propagate') and '+changed' not in ms else 5
        elif 'table' in s: pr = 4
        else: pr = 6
        order.append((pr, v))
    order.sort()
    return order[0][1] if order else None


for r in rows:
    h = r['hash']
    rec = dict(hash=h, name=r['name'], seg=r['seg'], off=r['off'], old_rva=r['rva'], old_ver=r['ver'], new_rva=None, method='', ver=False, note='')
    if r['off'] == 0:
        rec.update(method='unresolved', note='zero in 2.3.1 (deliberately unresolved on macOS: see ALLOW_ZERO in validate_addresses.py); stays zero')
    elif h in cvhash:
        g, n = cvhash[h]
        o, nw = cv231[(g, n)], cv25.get((g, n))
        if nw and nw['type'] and nw['type'] == o['type']:
            rec.update(new_rva=int(nw['address'], 16) - 0x100000000, method='configvar-name', ver=r['ver'],
                       note=f"ConfigVar {g}/{n}: same group/name strings, constructor call and value-type vtable ({o['type']}); object 2.3.1 {o['address']} -> 2.5 {nw['address']}")
        else:
            rec.update(method='unresolved', note=f'ConfigVar {g}/{n}: not found in 2.5 with the same group/name and value type')
    elif h in cvtype:
        k = cvtype[h]
        va25 = [vt for vt, kk in t25.items() if kk == k][0]
        rec.update(new_rva=int(va25, 16) - 0x100000000, method='configvar-name', ver=r['ver'],
                   note=f'ConfigVar value-type vtable ({k}): the vtable that the {k} variables store after the constructor call; {sum(1 for x in c25 if x["type"]==k)} variables in 2.5 vs {sum(1 for x in c231 if x["type"]==k)} in 2.3.1')
    elif h in M:
        st, nw, note = M[h]
        if st == 'Z':
            rec.update(method='unresolved', note=note)
        else:
            rec.update(new_rva=nw, method='manual-comparison', ver=(st == 'V' and r['ver']), note=note)
    elif h in DATA:
        st, nw, meth, note = DATA[h]
        rec.update(new_rva=nw, method=meth, ver=(st == 'V' and r['ver']), note=note)
        if nw is None: rec['method'] = 'unresolved'
    else:
        pick = pickbest(r)
        if pick is None:
            rec.update(method='unresolved', note='no candidate in 2.5 (no match from macdiff, the feature matcher or the plugin tables)')
        else:
            m = bc.get((h, pick))
            if m is None or 'error' in m:
                rec.update(method='unresolved', note='candidate %#x could not be compared' % pick)
            else:
                srcs = mdesc(r, r['rva'], pick)
                same = m['same_body']
                ok = (m['strings_equal'] or (m['strings_jacc'] or 0) >= 0.5) and (m['seq'] or 0) >= 0.4 and m['consts'] >= 0.5 and m['offsets'] >= 0.4
                inacc = any(s.startswith('accepted-auto') for s in srcs)
                cls = 'same-body' if same else ('strong' if ok else 'weak')
                rec['cls'] = cls
                rec['m'] = m
                ms = metrics_str(m)
                if r['ver']:
                    if same or ok or inacc:
                        meth = ('exact/named/propagate' if same else ('accepted-auto' if inacc else 'bodycmp'))
                        lab = 'same masked body' if same else ('body similar' if ok else 'body changed a lot (accepted entry, callee/caller twins checked)')
                        rec.update(new_rva=pick, method=meth, ver=True, note=f"{lab}; sources: {', '.join(srcs)}; {ms}")
                    else:
                        rec.update(new_rva=pick, method='candidate-unproven', ver=False, note=f"WEAK candidate, not verified; sources: {', '.join(srcs)}; {ms}")
                else:
                    ctx = (m['calls'][2] >= 3 and m['calls'][3] >= 0.9 * m['calls'][2]) or (m['callers'][2] >= 3 and m['callers'][3] >= 0.9 * m['callers'][2])
                    if (same or ok or ctx) and m['old_is_start'] and m['new_is_start']:
                        if not (same or ok): cls = 'context (weak body, consistent callees/callers)'; 
                        rec.update(new_rva=pick, method='exact/named/propagate' if same else 'bodycmp', ver=False, note=f"unverified in 2.3.1 and stays so; {cls}; sources: {', '.join(srcs)}; {ms}")
                    else:
                        rec.update(method='unresolved', note=f"unverified in 2.3.1; candidate {pick:#x} is {cls}{'' if m['old_is_start'] else ', old address is not a function start'}{'' if m['new_is_start'] else ', new address is not a function start'}; not carried over; {ms}")
    recs.append(rec)

json.dump(recs, open(OUT + '/recs.json', 'w'), indent=1, default=str)
print(len(recs))
