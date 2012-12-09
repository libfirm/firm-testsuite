#include <stdio.h>
#include <complex.h>

int main(void)
{
	/* totally crazy, but we do it anyway because we can ;-) */
	_Complex _Bool c1 = 1 + 1i;
	_Complex _Bool c2 = 1 + 1j;
	_Complex _Bool plu = +c1;
	_Complex _Bool min = -c1;
	_Complex _Bool add = c1 + c2;
	_Complex _Bool sub = c1 - c2;
	_Complex _Bool mul = c1 * c2;
	_Complex _Bool div = c1 / c2;
	printf("%d %d\n", __real__ c1,  __imag__ c1);
	printf("%d %d\n", __real__ c2,  __imag__ c2);
	printf("%d %d\n", __real__ plu, __imag__ plu);
	printf("%d %d\n", __real__ min, __imag__ min);
	printf("%d %d\n", __real__ add, __imag__ add);
	printf("%d %d\n", __real__ sub, __imag__ sub);
	printf("%d %d\n", __real__ mul, __imag__ mul);
	printf("%d %d\n", __real__ div, __imag__ div);
}
