#include <assert.h>

static int __attribute__((noinline)) clzll(unsigned long long x)
{
	return __builtin_clzll(x);
}

int main(void)
{
#define ASSERTCLZLL(val, result) \
	assert(__builtin_clzll(val) == result); \
	assert(clzll(val) == result);

	ASSERTCLZLL(0x0000000000000001ULL, sizeof(unsigned long long)*8-1);
	ASSERTCLZLL(0x0000000000000002ULL, sizeof(unsigned long long)*8-2);
	ASSERTCLZLL(0x0000000000000004ULL, sizeof(unsigned long long)*8-3);
	ASSERTCLZLL(0x0000000000000008ULL, sizeof(unsigned long long)*8-4);
	ASSERTCLZLL(0x0000000000000010ULL, sizeof(unsigned long long)*8-5);
	ASSERTCLZLL(0x0000000000000020ULL, sizeof(unsigned long long)*8-6);
	ASSERTCLZLL(0x0000000000000040ULL, sizeof(unsigned long long)*8-7);
	ASSERTCLZLL(0x0000000000000080ULL, sizeof(unsigned long long)*8-8);
	ASSERTCLZLL(0x0000000000000100ULL, sizeof(unsigned long long)*8-9);
	ASSERTCLZLL(0x0000000000000200ULL, sizeof(unsigned long long)*8-10);
	ASSERTCLZLL(0x0000000000000400ULL, sizeof(unsigned long long)*8-11);
	ASSERTCLZLL(0x0000000000000800ULL, sizeof(unsigned long long)*8-12);
	ASSERTCLZLL(0x0000000000001000ULL, sizeof(unsigned long long)*8-13);
	ASSERTCLZLL(0x0000000000002000ULL, sizeof(unsigned long long)*8-14);
	ASSERTCLZLL(0x0000000000004000ULL, sizeof(unsigned long long)*8-15);
	ASSERTCLZLL(0x0000000000008000ULL, sizeof(unsigned long long)*8-16);
	ASSERTCLZLL(0x0000000000010000ULL, sizeof(unsigned long long)*8-17);
	ASSERTCLZLL(0x0000000000020000ULL, sizeof(unsigned long long)*8-18);
	ASSERTCLZLL(0x0000000000040000ULL, sizeof(unsigned long long)*8-19);
	ASSERTCLZLL(0x0000000000080000ULL, sizeof(unsigned long long)*8-20);
	ASSERTCLZLL(0x0000000000100000ULL, sizeof(unsigned long long)*8-21);
	ASSERTCLZLL(0x0000000000200000ULL, sizeof(unsigned long long)*8-22);
	ASSERTCLZLL(0x0000000000400000ULL, sizeof(unsigned long long)*8-23);
	ASSERTCLZLL(0x0000000000800000ULL, sizeof(unsigned long long)*8-24);
	ASSERTCLZLL(0x0000000001000000ULL, sizeof(unsigned long long)*8-25);
	ASSERTCLZLL(0x0000000002000000ULL, sizeof(unsigned long long)*8-26);
	ASSERTCLZLL(0x0000000004000000ULL, sizeof(unsigned long long)*8-27);
	ASSERTCLZLL(0x0000000008000000ULL, sizeof(unsigned long long)*8-28);
	ASSERTCLZLL(0x0000000010000000ULL, sizeof(unsigned long long)*8-29);
	ASSERTCLZLL(0x0000000020000000ULL, sizeof(unsigned long long)*8-30);
	ASSERTCLZLL(0x0000000040000000ULL, sizeof(unsigned long long)*8-31);
	ASSERTCLZLL(0x0000000080000000ULL, sizeof(unsigned long long)*8-32);
	ASSERTCLZLL(0x0000000100000000ULL, sizeof(unsigned long long)*8-33);
	ASSERTCLZLL(0x0000000200000000ULL, sizeof(unsigned long long)*8-34);
	ASSERTCLZLL(0x0000000400000000ULL, sizeof(unsigned long long)*8-35);
	ASSERTCLZLL(0x0000000800000000ULL, sizeof(unsigned long long)*8-36);
	ASSERTCLZLL(0x0000001000000000ULL, sizeof(unsigned long long)*8-37);
	ASSERTCLZLL(0x0000002000000000ULL, sizeof(unsigned long long)*8-38);
	ASSERTCLZLL(0x0000004000000000ULL, sizeof(unsigned long long)*8-39);
	ASSERTCLZLL(0x0000008000000000ULL, sizeof(unsigned long long)*8-40);
	ASSERTCLZLL(0x0000010000000000ULL, sizeof(unsigned long long)*8-41);
	ASSERTCLZLL(0x0000020000000000ULL, sizeof(unsigned long long)*8-42);
	ASSERTCLZLL(0x0000040000000000ULL, sizeof(unsigned long long)*8-43);
	ASSERTCLZLL(0x0000080000000000ULL, sizeof(unsigned long long)*8-44);
	ASSERTCLZLL(0x0000100000000000ULL, sizeof(unsigned long long)*8-45);
	ASSERTCLZLL(0x0000200000000000ULL, sizeof(unsigned long long)*8-46);
	ASSERTCLZLL(0x0000400000000000ULL, sizeof(unsigned long long)*8-47);
	ASSERTCLZLL(0x0000800000000000ULL, sizeof(unsigned long long)*8-48);
	ASSERTCLZLL(0x0001000000000000ULL, sizeof(unsigned long long)*8-49);
	ASSERTCLZLL(0x0002000000000000ULL, sizeof(unsigned long long)*8-50);
	ASSERTCLZLL(0x0004000000000000ULL, sizeof(unsigned long long)*8-51);
	ASSERTCLZLL(0x0008000000000000ULL, sizeof(unsigned long long)*8-52);
	ASSERTCLZLL(0x0010000000000000ULL, sizeof(unsigned long long)*8-53);
	ASSERTCLZLL(0x0020000000000000ULL, sizeof(unsigned long long)*8-54);
	ASSERTCLZLL(0x0040000000000000ULL, sizeof(unsigned long long)*8-55);
	ASSERTCLZLL(0x0080000000000000ULL, sizeof(unsigned long long)*8-56);
	ASSERTCLZLL(0x0100000000000000ULL, sizeof(unsigned long long)*8-57);
	ASSERTCLZLL(0x0200000000000000ULL, sizeof(unsigned long long)*8-58);
	ASSERTCLZLL(0x0400000000000000ULL, sizeof(unsigned long long)*8-59);
	ASSERTCLZLL(0x0800000000000000ULL, sizeof(unsigned long long)*8-60);
	ASSERTCLZLL(0x1000000000000000ULL, sizeof(unsigned long long)*8-61);
	ASSERTCLZLL(0x2000000000000000ULL, sizeof(unsigned long long)*8-62);
	ASSERTCLZLL(0x4000000000000000ULL, sizeof(unsigned long long)*8-63);
	ASSERTCLZLL(0x8000000000000000ULL, sizeof(unsigned long long)*8-64);
	ASSERTCLZLL((unsigned long long)-1LL, 0);
}
