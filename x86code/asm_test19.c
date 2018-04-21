#include <stdio.h>

int main(void)
{
	int a;
	int b = 2;
	int c = -1;
	asm("movl $42, %0; addl $3, %1; subl $2, %2" : "=m" (a), "+r" (b), "=r" (c) : "2" (c));
	printf("a:%d b:%d c:%d\n", a, b, c);
	return 0;
}
