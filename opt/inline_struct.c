#include <stdio.h>

typedef struct foo {
	short x;
	int y;
	double z;
} foo;

static inline foo func(foo a, foo *b) {
	a.x = 1;
	a.y = 2;
	a.z = 3.0;
	printf("no side effect %hi, %hi\n", a.x, b->x);
	printf("no side effect %i, %i\n",   a.y, b->y);
	printf("no side effect %G, %G\n",   a.z, b->z);
	foo inner = {4, 5, 6.7};
	return inner;
}

int main() {
	foo base = {42, 11, 3.1415};
	foo result = func(base, &base);
	printf("returned %hi, %i, %G\n", result.x, result.y, result.z);
	return 0;
}
