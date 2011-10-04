#include <assert.h>

static int __attribute__((noinline)) clzl(unsigned long x)
{
	return __builtin_clzl(x);
}

int main(void)
{
#define ASSERTCLZL(val, result) \
	assert(__builtin_clzl(val) == result); \
	assert(clzl(val) == result);

	ASSERTCLZL(0x00000001UL, sizeof(unsigned long)*8-1);
	ASSERTCLZL(0x00000002UL, sizeof(unsigned long)*8-2);
	ASSERTCLZL(0x00000004UL, sizeof(unsigned long)*8-3);
	ASSERTCLZL(0x00000008UL, sizeof(unsigned long)*8-4);
	ASSERTCLZL(0x00000010UL, sizeof(unsigned long)*8-5);
	ASSERTCLZL(0x00000020UL, sizeof(unsigned long)*8-6);
	ASSERTCLZL(0x00000040UL, sizeof(unsigned long)*8-7);
	ASSERTCLZL(0x00000080UL, sizeof(unsigned long)*8-8);
	ASSERTCLZL(0x00000100UL, sizeof(unsigned long)*8-9);
	ASSERTCLZL(0x00000200UL, sizeof(unsigned long)*8-10);
	ASSERTCLZL(0x00000400UL, sizeof(unsigned long)*8-11);
	ASSERTCLZL(0x00000800UL, sizeof(unsigned long)*8-12);
	ASSERTCLZL(0x00001000UL, sizeof(unsigned long)*8-13);
	ASSERTCLZL(0x00002000UL, sizeof(unsigned long)*8-14);
	ASSERTCLZL(0x00004000UL, sizeof(unsigned long)*8-15);
	ASSERTCLZL(0x00008000UL, sizeof(unsigned long)*8-16);
	ASSERTCLZL(0x00010000UL, sizeof(unsigned long)*8-17);
	ASSERTCLZL(0x00020000UL, sizeof(unsigned long)*8-18);
	ASSERTCLZL(0x00040000UL, sizeof(unsigned long)*8-19);
	ASSERTCLZL(0x00080000UL, sizeof(unsigned long)*8-20);
	ASSERTCLZL(0x00100000UL, sizeof(unsigned long)*8-21);
	ASSERTCLZL(0x00200000UL, sizeof(unsigned long)*8-22);
	ASSERTCLZL(0x00400000UL, sizeof(unsigned long)*8-23);
	ASSERTCLZL(0x00800000UL, sizeof(unsigned long)*8-24);
	ASSERTCLZL(0x01000000UL, sizeof(unsigned long)*8-25);
	ASSERTCLZL(0x02000000UL, sizeof(unsigned long)*8-26);
	ASSERTCLZL(0x04000000UL, sizeof(unsigned long)*8-27);
	ASSERTCLZL(0x08000000UL, sizeof(unsigned long)*8-28);
	ASSERTCLZL(0x10000000UL, sizeof(unsigned long)*8-29);
	ASSERTCLZL(0x20000000UL, sizeof(unsigned long)*8-30);
	ASSERTCLZL(0x40000000UL, sizeof(unsigned long)*8-31);
	ASSERTCLZL(0x80000000UL, sizeof(unsigned long)*8-32);
	ASSERTCLZL((unsigned long)-1L, 0);
}
