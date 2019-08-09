/*$ -fverbose-asm -O3 $*/
/*$ check[10] ia32_ $*/

#include <stdbool.h>
#include <stdint.h>

bool test(char *p, int x, int y)
{
	asm volatile("" : : "r" (p), "r" (x), "r" (y) : "memory");
	char *a = p + 1 + x;
	char *b = a + y;
	return a < b;
}

int main(void)
{
}
