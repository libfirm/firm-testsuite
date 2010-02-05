/* stabs debug info has problems with VLAs */

#include <stdlib.h>

#include "rand.h"

void f(int x)
{
	int a[x];
	int i;
	for (i = 0; i < x; ++i) {
		a[i] = my_rand();
	}
}


int main(void)
{
	my_srand(23);
	f(my_rand() & 31);
	return 0;
}
