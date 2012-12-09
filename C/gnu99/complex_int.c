#include <stdio.h>
#include <complex.h>

int main(void)
{
	_Complex int c1 = -200 + 30i;
	_Complex int c2 = 5 + -7j;
	_Complex int plu = +c1;
	_Complex int min = -c1;
	_Complex int add = c1 + c2;
	_Complex int sub = c1 - c2;
	_Complex int mul = c1 * c2;
	_Complex int div = c1 / c2;
	printf("%d %d\n", __real__ c1,  __imag__ c1);
	printf("%d %d\n", __real__ c2,  __imag__ c2);
	printf("%d %d\n", __real__ plu, __imag__ plu);
	printf("%d %d\n", __real__ min, __imag__ min);
	printf("%d %d\n", __real__ add, __imag__ add);
	printf("%d %d\n", __real__ sub, __imag__ sub);
	printf("%d %d\n", __real__ mul, __imag__ mul);
	printf("%d %d\n", __real__ div, __imag__ div);
}
