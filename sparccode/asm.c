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
	__asm__ __volatile__("cas %[mem], %[old], %[new]"
		: "=r" (result), [mem] "+w"  (*addr)
		: [new] "0"  (newval), [old] "r"  (oldval)
		: "memory");
#else
	// not atomic... but this file is just a stupid compilertest
	result = *addr;
	if (result == oldval)
		*addr = newval;
#endif
	return result;
}

static inline unsigned cas2(unsigned *addr, unsigned oldval, unsigned newval)
{
#ifdef __leon__
	__asm__ __volatile__("stbar\n\tcas %[mem], %[old], %[new]"
		: [new] "+r" (newval), [mem] "+w" (*addr)
		: [old] "r"  (oldval)
		: "memory");
	return newval;
#else
	// not atomic... but this file is just a stupid compilertest
	unsigned result = *addr;
	if (result == oldval)
		*addr = newval;
	return result;
#endif
}



static unsigned a0;
static unsigned a1;
unsigned g0 = 13;
unsigned g1 = 66;

int main(void)
{
	a0 = 42;
	unsigned r0 = cas(&a0, 17, 88);
	unsigned r1 = cas(&a0, 42, 3);
	unsigned r2 = cas(&a0, 42, 7);
	printf("%u %u %u %u\n", a0, r0, r1, r2);

	a1 = 17;
	unsigned c0 = cas2(&a1, 17, 88);
	unsigned c1 = cas2(&a1, 42, 3);
	unsigned c2 = cas2(&a1, 42, 7);
	printf("%u %u %u %u\n", a1, r0, r1, r2);

	unsigned add1 = add(42, 7);
	unsigned add2 = add(g0, g1);
	unsigned add3 = add(42, 12345);
	printf("%u %u %u\n", add1, add2, add3);

	return 0;
}
