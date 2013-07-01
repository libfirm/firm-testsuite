#include <stdbool.h>
#include <stdio.h>

int global = 128;

bool f(void)
{
	bool b;

	if (global >= 0) {
		b = 1;
	} else {
		b = !global;
	}

	int i = b;

	printf("Boolean value: %d\n", i);

	return b;
}

int main(void)
{
	return !f();
}
