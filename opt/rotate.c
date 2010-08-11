unsigned __attribute__((noinline)) rotl(unsigned a, unsigned b)
{
	return (a << b) | (a >> (32-b));
}

unsigned __attribute__((noinline)) rotl2(unsigned a, unsigned b)
{
	return (a << b) | (a >> -b);
}

unsigned __attribute__((noinline)) rotr(unsigned a, unsigned b)
{
	return (a >> b) | (a << (32-b));
}

unsigned __attribute__((noinline)) rotr2(unsigned a, unsigned b)
{
	return (a >> b) | (a << -b);
}

unsigned __attribute__((noinline)) rotli(unsigned a)
{
	return (a << 5) | (a >> 27);
}

unsigned __attribute__((noinline)) rotri(unsigned a)
{
	return (a >> 5) | (a << 27);
}

extern int printf(const char *str, ...);

#define TEST2(f)   \
	printf(#f "(0x%X,%u) = %u\n", 0u, 0u, f(0, 0)); \
	printf(#f "(0x%X,%u) = %u\n", 1u, 0u, f(1, 0)); \
	printf(#f "(0x%X,%u) = %u\n", 0u, 1u, f(0, 1)); \
	printf(#f "(0x%X,%u) = %u\n", 1u, 1u, f(0, 0)); \
	printf(#f "(0x%X,%u) = %u\n", 0xf0f0f0f0u, 4u, f(0xf0f0f0f0u, 4)); \
	printf(#f "(0x%X,%u) = %u\n", 0x0f0f0f0fu, 4u, f(0x0f0f0f0fu, 4)); \
	printf(#f "(0x%X,%u) = %u\n", 0xf0f0f0f0u, 2u, f(0xf0f0f0f0u, 4)); \
	printf(#f "(0x%X,%u) = %u\n", 0x0f0f0f0fu, 2u, f(0x0f0f0f0fu, 4)); \
	printf(#f "(0x%X,%u) = %u\n", 0x1234ABCDu, 15u, f(0x1234ABCDu, 15)); \
	printf(#f "(0x%X,%u) = %u\n", 0x1234ABCDu, 31u, f(0x1234ABCDu, 31)); \
	printf(#f "(0x%X,%u) = %u\n", 0x1234ABCDu, 0xffffffffu, f(0x1234ABCDu, 0xffffffu));

int main(void)
{
	TEST2(rotl)
	TEST2(rotl2)
	TEST2(rotr)
	TEST2(rotr2)
	return 0;
}
