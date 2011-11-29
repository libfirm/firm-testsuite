#!/bin/sh

set -e

BASE="../build/ioccc2006"
RESULT=0

BIRKEN_DIR="$BASE/birken"
for test in adder buffer lfsr memory multiplier oneline shift zuse zuse2; do
	"$BIRKEN_DIR/birken" < "$BIRKEN_DIR/$test.tofu" > /tmp/$test.tofu.out
	if ! diff -u birken/$test.tofu.out /tmp/$test.tofu.out; then
		echo "wrong results (birken/$test)"
		RESULT=1
	fi
done

BORSANYI_DIR="$BASE/borsanyi"
test="Tester@quickbrownfoxjumpsoverthelazy.dog"
"$BORSANYI_DIR/borsanyi" "$test" > "/tmp/$test.gif"
if ! diff -u "borsanyi/$test.gif" "/tmp/$test.gif"; then
	echo "wrong results (borsanyi)"
	RESULT=1
fi

# I don't know how to write a good test for grothe...

HAMRE_DIR="$BASE/hamre"
test='-1+4/3*(2+1/(3/2*(7/2-7/3+1/6)))/2'
# ignore return value
"$HAMRE_DIR/hamre" "$test" > /tmp/hamre.out || true
if test "`cat /tmp/hamre.out`" != "2/3"; then
	echo "wrong results (hamre)"
	RESULT=1
fi

# meyer is interactive, won't test
# monge is interactive, won't test
# night is interactive, won't test
# sloane is animated, won't test
#   (and it fails with cparser...)

STEWART_DIR="$BASE/stewart"
for test in box circles crystal dragon gasket octagon spirals4 tree2 box2 cross curve dragon2 gasket_mod spirals stars tree3 box3 cross2 diamonds dragon3 gasket_mod2 spirals2 stars2 tree4 carpet cross3 diamonds2 fern maze spirals3 tree triangle; do
	"$STEWART_DIR/stewart" 256 1000000 "$STEWART_DIR/$test" > /tmp/$test.xbm
	if ! diff -u "stewart/$test.xbm" "/tmp/$test.xbm"; then
		echo "wrong results (stewart/$test)"
		RESULT=1
	fi
done

SYKES1_DIR="$BASE/sykes1"
"$SYKES1_DIR/sykes1" > /tmp/sykes1.out
mv cube.gif /tmp
if ! diff -u "sykes1/sykes1.out" /tmp/sykes1.out; then
	echo "wrong results (sykes1/text)"
	RESULT=1
fi
#if ! diff -u "sykes1/cube.gif" /tmp/cube.gif; then
#	echo "wrong results (sykes1/gif)"
#	RESULT=1
#fi

# Sykes2 produces different output depending on compile time...

TOLEDO1_DIR="$BASE/toledo1"
for test in 30 80; do
	"$TOLEDO1_DIR/toledo1" $test > /tmp/toledo1_$test
	if ! diff -u "toledo1/toledo1_$test" "/tmp/toledo1_$test"; then
		echo "wrong results (toledo1/$test)"
		RESULT=1
	fi
done

# toledo3 randomly produces different games

if [ "$RESULT" = "0" ]; then
	echo "all tests passed"
fi

exit $RESULT
