#!/usr/bin/env python3
"""emit_db25: write the 2.5.0 address database and the evidence TSV from build_db25.py's recs.json. Claude (Opus), 2026-10-26.
    emit_db25.py RECS.json SDK_WORKTREE EVIDENCE.tsv
"""
import json, sys
recs = json.load(open(sys.argv[1]))
sdk = sys.argv[2]
SEG25 = {1: (0, 0x7758000), 2: (0x7758000, 0x5d8000), 3: (0x7d30000, 0x1ff8000)}
NEWUUID = '7D7382D0-EADD-36F0-BA1C-CEBEC1D5BEBC'
db = json.load(open(sdk + '/cyberpunk2077_addresses.json'))
by = {r['hash']: r for r in recs}
bad = []
for e in db['Addresses']:
    r = by[e['hash']]
    if r['new_rva']:
        seg = next((s for s, (b, n) in SEG25.items() if b <= r['new_rva'] < b + n), None)
        if seg is None or seg != r['seg']:
            bad.append((e['hash'], r['seg'], seg, hex(r['new_rva'])))
            e['offset'] = '%d:0x0' % r['seg']
            r['ver'] = False
            r['note'] += ' [segment changed or outside the image: left unresolved]'
            r['new_rva'] = None
            continue
        e['offset'] = '%d:0x%X' % (seg, r['new_rva'] - SEG25[seg][0])
    else:
        e['offset'] = '%d:0x0' % r['seg']
    e.pop('verified', None)
    if r['ver']:
        e['verified'] = True
rows = db['Addresses']
zeros = sum(1 for e in rows if int(e['offset'].split(':')[1], 16) == 0)
db['game_version'] = '2.5.0'
db['uuid'] = NEWUUID
db['stats'] = {'total': len(rows), 'resolved': len(rows) - zeros, 'unresolved': zeros,
               'verified': sum(1 for e in rows if e.get('verified'))}
open(sdk + '/cyberpunk2077_addresses.json', 'w').write(json.dumps(db, indent=2) + '\n')
print(db['stats'], 'segment problems:', bad)
with open(sys.argv[3], 'w') as f:
    f.write('hash\tname\told_offset\tnew_offset\tmethod\tverified_2.3.1\tverified_2.5\tnote\n')
    for e in rows:
        r = by[e['hash']]
        old = '%d:0x%X' % (r['seg'], r['off'])
        f.write('\t'.join([e['hash'], r['name'], old, e['offset'], r['method'], 'yes' if r['old_ver'] else 'no', 'yes' if e.get('verified') else 'no',
                           r['note'].replace('\t', ' ').replace('\n', ' ')]) + '\n')
