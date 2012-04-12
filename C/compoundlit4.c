#include <stdio.h>

struct X { int x; };

int main(void)
{
	printf("%d\n", (struct X){ 42 }.x);
	printf("%d\n", (int){ 23 });
	printf("%d\n", (int[]){ 9000, 9001 }[1]);
	printf("%d\n", *(int[]){ 666 });
	printf("%d\n", *(int*){ &(int){ 1337 } });
	return 0;
}
