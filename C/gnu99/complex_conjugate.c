#include <stdint.h>
#include <stdio.h>

int main(void)
{
	_Complex double c0 = 4. + 3.5i;
	printf("%f %f\n", __real__ c0, __imag__ c0);
	c0 = ~c0;
	printf("%f %f\n", __real__ c0, __imag__ c0);
	_Complex int c1 = -2. - 7i;
	printf("%d %d\n", __real__ c1, __imag__ c1);
	c1 = ~c1;
	printf("%d %d\n", __real__ c1, __imag__ c1);
	_Complex unsigned short c2 = 4 + 7ui;
	printf("%u %u\n", __real__ c2, __imag__ c2);
	c2 = ~c2;
	printf("%u %u\n", __real__ c2, __imag__ c2);
	return 0;
}
