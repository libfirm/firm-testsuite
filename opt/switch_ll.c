#include <limits.h>
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

static void __attribute__((noinline)) switch64_3(long long v)
{
	switch (v) {
	case -0x100000001ll: printf("huge -0x100000001\n"); break;
	case -0x100000002ll: printf("huge -0x100000002\n"); break;
	case -0x100000003ll: printf("huge -0x100000003\n"); break;
	case -0x100000004ll: printf("huge -0x100000004\n"); break;
	case -0x100000005ll: printf("huge -0x100000005\n"); break;
	case -0x100000006ll: printf("huge -0x100000006\n"); break;
	case -0x100000007ll: printf("huge -0x100000007\n"); break;
	case -0x100000008ll: printf("huge -0x100000008\n"); break;
	default: printf("unknown (%lld)\n", v); break;
	}
}

int main(void)
{
	for (long long i = -5; i < 10; ++i) {
		switch64(i);
	}
	switch64(0x100000001ll);
	switch64(LLONG_MIN);
	switch64(LLONG_MAX);
	switch64(0);
	switch64(-1);
	switch64(1);

	for (unsigned long long i = 0; i < 10; ++i) {
		switch64_2(i);
	}
	switch64_2(0x100000001ull);
	switch64_2(0x100000002ull);
	switch64_2(ULLONG_MAX);

	for (long long i = -0x100000010ll; i <= -0x100000000ll; ++i) {
		switch64_3(i);
	}
	switch64_3(LLONG_MIN);
	switch64_3(LLONG_MAX);
	switch64_3(0);
	switch64_3(-1);
	switch64_3(1);

	return 0;
}
