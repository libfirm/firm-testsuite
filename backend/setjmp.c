/* Modeling setjmp correctly is difficult.  Currently, it is modeled as
 * a call that invalidates all registers.  However, this is not sufficient.
 * If values are spilled before the setjmp, then the assigned spill slots must
 * _not_ be used for other values after the setjmp.
 * If they are used otherwise, and setjmp returns the second time, the reloads
 * after the setjmp will likely not load the correct values.
 */

#include <setjmp.h>
#include <stdio.h>

int g0 = 1;
int g1 = 2;
int g2 = 3;
int g3 = 4;
int g4 = 5;
int g5 = 6;

int h0 = 100;
int h1 = 101;
int h2 = 102;
int h3 = 103;
int h4 = 104;
int h5 = 105;

jmp_buf buf1;
jmp_buf buf2;

int main()
{
	int a0 = g0;
	int a1 = g1;
	int a2 = g2;
	int a3 = g3;
	int a4 = g4;
	int a5 = g5;

	int b0;
	int b1;
	int b2;
	int b3;
	int b4;
	int b5;

	int ret;

	printf("%d %d %d %d %d %d\n", a0, a1, a2, a3, a4, a5);

	ret = setjmp(buf1);

	printf("%d %d %d %d %d %d\n", a0, a1, a2, a3, a4, a5);

	/* The following setjmp forces the register allocator to spill b0..b5.
	 * The spill slot coalescer used to assign the same spill slots
	 * to b0..b5 as it used for a0..a5.
	 */
	b0 = h5;
	b1 = h4;
	b2 = h3;
	b3 = h2;
	b4 = h1;
	b5 = h0;

	setjmp(buf2);

	printf("%d %d %d %d %d %d\n", b0, b1, b2, b3, b4, b5);

	if (!ret) {
		longjmp(buf1, 1);
	}

	return 0;
}
