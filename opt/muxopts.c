#include <limits.h>
#include <stdio.h>

/* should be transformed to "return x&64" */
unsigned mux_singlebit0(unsigned x)
{
	if (x & 64)
		return 64;
	return 0;
}

/* should be transformed to "return x & (1<<y)" */
unsigned mux_singlebit1(unsigned x, unsigned y)
{
	if (x & (1 << y))
		return 1<<y;
	return 0;
}

/* should be transformed to "return x & (1 << y) ^ (1 << y)" */
unsigned mux_singlebit2(unsigned x, unsigned y)
{
	if (x & (1 << y))
		return 0;
	return 1<<y;
}

/* should be transformed to:
 *  sext = x >> 31   (sizeof(x)*8-1 to be exact...)
 *  return (x^sext)-sext
 */
int my_abs(int x)
{
	if (x < 0)
		x = -x;
	return x;
}

int v = 6;

int main(void)
{
	printf("Abstests: %d %d %d %d %d %d %d\n",
	       my_abs(-1), my_abs(1), my_abs(INT_MAX), my_abs(INT_MIN),
	       my_abs(0), my_abs(42), my_abs(-42));
	printf("singlebit0: %x %x %x %x %x\n",
	       mux_singlebit0(0),
	       mux_singlebit0(1),
	       mux_singlebit0((unsigned)-1),
	       mux_singlebit0(64),
	       mux_singlebit0(12345));
	printf("singlebit1: %x %x %x %x %x\n",
	       mux_singlebit1(0, v),
	       mux_singlebit1(1, v),
	       mux_singlebit1((unsigned)-1, v),
	       mux_singlebit1(64, v),
	       mux_singlebit1(12345, v));
	printf("singlebit2: %x %x %x %x %x\n",
	       mux_singlebit2(0, v),
	       mux_singlebit2(1, v),
	       mux_singlebit2((unsigned)-1, v),
	       mux_singlebit2(64, v),
	       mux_singlebit2(12345, v));

	return 0;
}
