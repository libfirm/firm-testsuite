#include <stdio.h>

typedef struct Tuple {
	int a, b;
} Tuple;

void print_tuple(const Tuple* tuple)
{
	printf("%d, %d\n", tuple->a, tuple->b);
}

typedef struct foobar {
	Tuple t1;
	int x;
	Tuple t2;
} foobar;

Tuple make_tuple(int x, int y)
{
	Tuple t = { x, y };
	return t;
}

int main(void)
{
	foobar f = {
		.t1 = make_tuple(5, 8),
		.t2 = make_tuple(42, 58),
		.x = 13
	};
	print_tuple(&f.t2);
	print_tuple(&f.t1);
	return 0;
}
