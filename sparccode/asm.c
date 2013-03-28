extern int printf(const char *str, ...);

static inline unsigned add(unsigned x, unsigned y)
{
	unsigned result;
	__asm__("add %1, %2, %0" : "=r"(result) : "r"(x), "rI"(y));
	return result;
}

static inline unsigned cas(unsigned *addr, unsigned oldval, unsigned newval)
{
	unsigned result;
#ifdef __leon__
	__asm__ __volatile__("cas [%[address]], %[new], %[old]"
		: "=r" (result)
		: [new] "0"  (newval), [address] "r"  (addr), [old] "r"  (oldval)
		: "memory");
#else
	// not atomic... but this file is just a stupid compilertest
	result = *addr;
	if (result == oldval)
		*addr = newval;
#endif
	return result;
}

static unsigned a0;
unsigned g0 = 13;
unsigned g1 = 66;

int main(void)
{
	a0 = 42;
	unsigned r0 = cas(&a0, 17, 88);
	unsigned r1 = cas(&a0, 42, 3);
	unsigned r2 = cas(&a0, 42, 7);
	printf("%u %u %u %u\n", a0, r0, r1, r2);

	unsigned add1 = add(42, 7);
	unsigned add2 = add(g0, g1);
	unsigned add3 = add(42, 12345);
	printf("%u %u %u\n", add1, add2, add3);

	return 0;
}
