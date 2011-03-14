#include <stdio.h>
#include <math.h>

int end = 4;
float k[] = { 2.8, 2.8, 2.8, 2.8, 2.8 };

void print_fpcw()
{
	unsigned short val;
	asm("fnstcw %0" : "=m" (val));
	printf("0x%04X\n", val & 0x0C00U); // show rounding mode
}

int main()
{
	int i;
	int res = 0;

	for(i = 0; i < end; ++i) {
		print_fpcw();
		res = (int)k[i];
	}
	print_fpcw();
	printf("%d\n", res);

	return 0;
}
