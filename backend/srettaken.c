struct bla {
	int a, b, c;
};

static int __attribute__((noinline)) getaddr(int *a)
{
	return *a;
}

static struct bla __attribute__((noinline)) gets(int a, int b, int c)
{
	struct bla bl = { getaddr(&a), getaddr(&b), getaddr(&c) };
	return bl;
}

extern int printf(const char *str, ...);

int main(void)
{
	struct bla b = gets(7, 42, 13);
	printf("%d %d %d\n", b.a, b.b, b.c);
	return 0;
}
