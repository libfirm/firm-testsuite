typedef struct { int x, y, z; } FooBar;
FooBar *g;

FooBar *getFooBar(void)
{
	if (g == 0) {
		g = malloc(sizeof(*g));
		/* could do partial redundancy elimination with load/store */
	}
	return g;
}
