#ifdef _MSC_VER
#define NOINLINE __declspec(noinline)
#else
#define NOINLINE __attribute__((noinline))
#endif

static int NOINLINE clz(int a)
{
	return __builtin_clz(a);
}

int main(void)
{
	printf("clz(%d) = %d\n", 3, clz(3));
	return 0;
}
