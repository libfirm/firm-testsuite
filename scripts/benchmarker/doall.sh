#!/bin/bash
set -eu
cd cparser/libfirm
git co master
git fetch origin
git reset --hard origin/master
cd -
cd cparser
git co master
git fetch origin
git reset --hard origin/master
../revs.sh > ../revs.txt
cd -
./go.py
./make_names
./extract2.py > ~/public_html/data.js
