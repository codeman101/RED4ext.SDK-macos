Tools used to carry cyberpunk2077_addresses.json from game 2.3.1 to 2.5.0 (docs/re/ADDRESS_DB_2.5.md). Static analysis only: the
game binaries are read, nothing is run. They depend on the cp2077-mac workspace (tools/addr-match/macdiff.py, p25/diff-feat.pkl,
p25/map-final.tsv, p25/accepted-auto.tsv, p25/all.map) and on the two binaries at fixed paths, so they run on the author's machine only.
They are kept so the decisions in the evidence table can be re-checked.

Order:
  1. tools/addr-match: macdiff.py build / map                     function matching and first mapping (p25/diff-feat.pkl, all.map)
  2. config_var_dump_2.5.py --binary <bin> --json cvNNN.json      config variables of each binary (scripts/config_var_dump.py plus aliasing
                                                                   stores and a 40000-instruction replay window)
  3. bodycmp.py PKL pairs.json out.json                           per candidate pair: masked body, strings, constants, offsets, callee and caller twins
  4. card.py / callers.py / strrefs.py / vtctx.py / vtctx2.py / vtfind2.py / dataxref.py
                                                                   side-by-side review aids used for the hand decisions
  5. manual_decisions.py, data_rows.py                            the decisions made by hand (one line each, with the reason)
  6. build_db25.py SCRATCH SDK OUT ; emit_db25.py recs.json SDK EVIDENCE.tsv
                                                                   write the database and docs/re/ADDRESS_DB_2.5_EVIDENCE.tsv
build_db25.py expects, in SCRATCH: harvest.json (hash -> RVA rows of the 2.5.0 plugin tables), macdiff-text.out, bodycmp-text.json,
cv231d.json, cv25d.json, manual.py (= manual_decisions.py) and datarows.py (= data_rows.py).
