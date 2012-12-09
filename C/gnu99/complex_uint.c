#include <stdio.h>
#include <complex.h>

int main(void)
{
	_Complex unsigned c1 = 7 + 3i;
	_Complex unsigned c2 = 5 + 2j;
	_Complex unsigned plu = +c1;
	_Complex unsigned min = -c1;
	_Complex unsigned add = c1 + c2;
	_Complex unsigned sub = c1 - c2;
	_Complex unsigned mul = c1 * c2;
	_Complex unsigned div = c1 / c2;
	printf("%u %u\n", __real__ c1,  __imag__ c1);
	printf("%u %u\n", __real__ c2,  __imag__ c2);
	printf("%u %u\n", __real__ plu, __imag__ plu);
	printf("%u %u\n", __real__ min, __imag__ min);
	printf("%u %u\n", __real__ add, __imag__ add);
	printf("%u %u\n", __real__ sub, __imag__ sub);
	printf("%u %u\n", __real__ mul, __imag__ mul);
	printf("%u %u\n", __real__ div, __imag__ div);
}
