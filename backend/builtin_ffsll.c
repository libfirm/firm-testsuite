#include <assert.h>

int __attribute__((noinline)) ffsll(unsigned long long x)
{
	return __builtin_ffsll(x);
}

int main(void)
{
#define ASSERTFFSLL(v, result)             \
	assert(ffsll(v) == result);            \
	assert(__builtin_ffsll(v) == result);

	ASSERTFFSLL(0x0000000000000000ULL, 0);
	ASSERTFFSLL(0x0000000000000001ULL, 1);
	ASSERTFFSLL(0x0000000000000002ULL, 2);
	ASSERTFFSLL(0x0000000000000004ULL, 3);
	ASSERTFFSLL(0x0000000000000008ULL, 4);
	ASSERTFFSLL(0x0000000000000010ULL, 5);
	ASSERTFFSLL(0x0000000000000020ULL, 6);
	ASSERTFFSLL(0x0000000000000040ULL, 7);
	ASSERTFFSLL(0x0000000000000080ULL, 8);
	ASSERTFFSLL(0x0000000000000100ULL, 9);
	ASSERTFFSLL(0x0000000000000200ULL, 10);
	ASSERTFFSLL(0x0000000000000400ULL, 11);
	ASSERTFFSLL(0x0000000000000800ULL, 12);
	ASSERTFFSLL(0x0000000000001000ULL, 13);
	ASSERTFFSLL(0x0000000000002000ULL, 14);
	ASSERTFFSLL(0x0000000000004000ULL, 15);
	ASSERTFFSLL(0x0000000000008000ULL, 16);
	ASSERTFFSLL(0x0000000000010000ULL, 17);
	ASSERTFFSLL(0x0000000000020000ULL, 18);
	ASSERTFFSLL(0x0000000000040000ULL, 19);
	ASSERTFFSLL(0x0000000000080000ULL, 20);
	ASSERTFFSLL(0x0000000000100000ULL, 21);
	ASSERTFFSLL(0x0000000000200000ULL, 22);
	ASSERTFFSLL(0x0000000000400000ULL, 23);
	ASSERTFFSLL(0x0000000000800000ULL, 24);
	ASSERTFFSLL(0x0000000001000000ULL, 25);
	ASSERTFFSLL(0x0000000002000000ULL, 26);
	ASSERTFFSLL(0x0000000004000000ULL, 27);
	ASSERTFFSLL(0x0000000008000000ULL, 28);
	ASSERTFFSLL(0x0000000010000000ULL, 29);
	ASSERTFFSLL(0x0000000020000000ULL, 30);
	ASSERTFFSLL(0x0000000040000000ULL, 31);
	ASSERTFFSLL(0x0000000080000000ULL, 32);
	ASSERTFFSLL(0x0000000100000000ULL, 33);
	ASSERTFFSLL(0x0000000200000000ULL, 34);
	ASSERTFFSLL(0x0000000400000000ULL, 35);
	ASSERTFFSLL(0x0000000800000000ULL, 36);
	ASSERTFFSLL(0x0000001000000000ULL, 37);
	ASSERTFFSLL(0x0000002000000000ULL, 38);
	ASSERTFFSLL(0x0000004000000000ULL, 39);
	ASSERTFFSLL(0x0000008000000000ULL, 40);
	ASSERTFFSLL(0x0000010000000000ULL, 41);
	ASSERTFFSLL(0x0000020000000000ULL, 42);
	ASSERTFFSLL(0x0000040000000000ULL, 43);
	ASSERTFFSLL(0x0000080000000000ULL, 44);
	ASSERTFFSLL(0x0000100000000000ULL, 45);
	ASSERTFFSLL(0x0000200000000000ULL, 46);
	ASSERTFFSLL(0x0000400000000000ULL, 47);
	ASSERTFFSLL(0x0000800000000000ULL, 48);
	ASSERTFFSLL(0x0001000000000000ULL, 49);
	ASSERTFFSLL(0x0002000000000000ULL, 50);
	ASSERTFFSLL(0x0004000000000000ULL, 51);
	ASSERTFFSLL(0x0008000000000000ULL, 52);
	ASSERTFFSLL(0x0010000000000000ULL, 53);
	ASSERTFFSLL(0x0020000000000000ULL, 54);
	ASSERTFFSLL(0x0040000000000000ULL, 55);
	ASSERTFFSLL(0x0080000000000000ULL, 56);
	ASSERTFFSLL(0x0100000000000000ULL, 57);
	ASSERTFFSLL(0x0200000000000000ULL, 58);
	ASSERTFFSLL(0x0400000000000000ULL, 59);
	ASSERTFFSLL(0x0800000000000000ULL, 60);
	ASSERTFFSLL(0x1000000000000000ULL, 61);
	ASSERTFFSLL(0x2000000000000000ULL, 62);
	ASSERTFFSLL(0x4000000000000000ULL, 63);
	ASSERTFFSLL(0x8000000000000000ULL, 64);
	ASSERTFFSLL((unsigned long long)-1LL, 1);
}
