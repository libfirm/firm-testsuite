#!/bin/bash
set +e
cd cparser/libfirm
git fetch origin
cd -
cd cparser
git fetch origin
../revs > ../revs.txt
cd -
./go.py
./extract2.py > ~/public_html/data.js
