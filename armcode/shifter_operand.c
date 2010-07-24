#ifdef _MSC_VER
#define NOINLINE __declspec(noinline)
#else
#define NOINLINE __attribute__((noinline))
#endif

static int NOINLINE add2(int a, int b)
{
	return a + (b << 3);
}

static int NOINLINE add3(int a, int b, int c)
{
	return (a << b) + c;
}

static int NOINLINE bic(int a, int b)
{
	return a & (~b);
}

static int NOINLINE mvn(int a, int b)
{
	return ~(a << b);
}

static int NOINLINE rsb3(int a, int b, int c)
{
	return (a << b) - c;
}

static int NOINLINE rsb1(int a)
{
	return 32 - a;
}

int main(void)
{
	printf("add2(%d, %d)     = %d\n", 3, 1,    add2(3, 1));
	printf("add3(%d, %d, %d) = %d\n", 1, 3, 1, add3(1, 3, 1));
	printf("bic(%d, %d)      = %d\n", 3, 1,    bic(3, 1));
	printf("mvn(%d, %d)      = %d\n", 3, 1,    mvn(3, 1));
	printf("rsb3(%d, %d, %d) = %d\n", 3, 1, 1, rsb3(3, 1, 1));
	printf("rsb1(%d)         = %d\n", 3,       rsb1(3));
	return 0;
}
