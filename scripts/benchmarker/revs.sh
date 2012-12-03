#! /bin/sh
set -eu

FIRST="ee79a99034abe9e4702001ebdedb465148e2f2fa"
LAST="origin/master"

CPARSER_PREV=""
LIBFIRM_PREV=""
git rev-list --reverse --first-parent "$FIRST^!" "$LAST" | while read -r CPARSER_REV; do
	LIBFIRM_REV=$(git ls-tree "$CPARSER_REV" -- libfirm | cut -c 15-54)
	if [ -n "$CPARSER_PREV" ]; then
		if [ "$LIBFIRM_PREV" = "$LIBFIRM_REV" ]; then
			echo "$CPARSER_PREV $LIBFIRM_PREV"
		else
			git --git-dir libfirm/.git rev-list --reverse --first-parent "$LIBFIRM_PREV^!" "$LIBFIRM_REV~" | while read -r REV; do
				echo "$CPARSER_PREV $REV"
			done
		fi
	fi
	CPARSER_PREV=$CPARSER_REV
	LIBFIRM_PREV=$LIBFIRM_REV
done

CPARSER_REV=$(git rev-parse "$LAST")
LIBFIRM_REV=$(git ls-tree "$CPARSER_REV" -- libfirm | cut -c 15-54)
git --git-dir libfirm/.git rev-list --reverse --first-parent "$LIBFIRM_REV^!" "origin/master" | while read -r REV; do
	echo "$CPARSER_REV $REV"
done
