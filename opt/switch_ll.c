extern int printf(const char *str, ...);

static void __attribute__((noinline)) switch64(long long v)
{
	switch (v) {
	case -4: printf("minus four\n"); break;
	case -1: printf("minus one\n"); break;
	case 0: printf("zero\n"); break;
	case 2: printf("two\n");  break;
	case 3: printf("three\n");  break;
	case 4: printf("four\n");  break;
	case 5: printf("five\n");  break;
	default:
		printf("unknown (%lld)\n", v);
	}
}

static void __attribute__((noinline)) switch64_2(unsigned long long v)
{
	switch (v) {
	case 0: printf("zero\n"); break;
	case 2: printf("two\n");  break;
	case 3: printf("three\n");  break;
	case 4: printf("four\n");  break;
	case 5: printf("five\n");  break;
	case 0x100000001ull:
		printf("huge 0x100000001\n");
		break;
	case 0xFFFFFFFFFFFFFFFFull:
		printf("64bit max\n");
		break;
	default:
		printf("unknown (0x%llX)\n", v);
	}
}

int main(void)
{
	for (long long i = -5; i < 10; ++i) {
		switch64(i);
	}
	switch64(0x100000001ll);

	for (unsigned long long i = 0; i < 10; ++i) {
		switch64_2(i);
	}
	switch64_2(0x100000001ull);
	switch64_2(0x100000002ull);
	switch64_2(0xFFFFFFFFFFFFFFFFull);

	return 0;
}
