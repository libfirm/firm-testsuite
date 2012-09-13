extern int printf(const char *fmt, ...);

struct S
{
	int x, y;
};

__attribute__((noinline)) struct S create(int a)
{
	struct S s = { a, 2 * a };
	return s;
}

__attribute__((noinline)) void test(struct S s1, struct S s2)
{
	printf("%d %d %d %d\n", s1.x, s1.y, s2.x, s2.y);
}

int main()
{
	test(create(42), create(23));
	return 0;
}
