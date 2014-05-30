/* Example from http://blog.regehr.org/archives/482 */

#include <stdio.h>
#include <limits.h>

int foo (signed char x) {
	signed char y = x;
	return ++x > y;
}

int main (void) {
	int i;
	for (i= -128; i<=127; i++) {
		printf (" %d", foo(i));
		if ((i&31)==31) printf ("\n");
	}
	return 0;
}
