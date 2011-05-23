unsigned long long __attribute__((noinline)) shr_imm(unsigned long long x)
{
	return x >> 4;
}

unsigned long long __attribute__((noinline)) shr(unsigned long long x, unsigned long long y)
{
	return x >> y;
}

long long __attribute__((noinline)) shrs_imm(long long x)
{
	return x >> 4;
}

long long __attribute__((noinline)) shrs(long long x, long long y)
{
	return x >> y;
}

unsigned long long __attribute__((noinline)) shl_imm(unsigned long long x)
{
	return x << 4;
}

unsigned long long __attribute__((noinline)) shl(unsigned long long x, unsigned long long y)
{
	return x << y;
}

extern int printf(const char *str, ...);

int main(void)
{
	unsigned long long v = 0x87654321CAFEBABEull;
	puts("Shr:");
	printf("%llX\n", shr_imm(v));
	printf("%llX\n", shr(v, 4));
	printf("%llX\n", shr(v, 28));
	printf("%llX\n", shr(v, 40));
	printf("%llX\n", shr(v, 0));
	printf("%llX\n", shr(v, 63));

	long long vl = (long long) v;
	puts("Shrs:");
	printf("%llX\n", shrs_imm(vl));
	printf("%llX\n", shrs(vl, 4));
	printf("%llX\n", shrs(vl, 28));
	printf("%llX\n", shrs(vl, 40));
	printf("%llX\n", shrs(vl, 0));
	printf("%llX\n", shrs(vl, 63));

	long long vl2 = (long long) 0x12345678CAFEBABEull;
	puts("Shrs (no high bit):");
	printf("%llX\n", shrs_imm(vl2));
	printf("%llX\n", shrs(vl2, 4));
	printf("%llX\n", shrs(vl2, 28));
	printf("%llX\n", shrs(vl2, 40));
	printf("%llX\n", shrs(vl2, 0));
	printf("%llX\n", shrs(vl2, 63));

	puts("Shl:");
	printf("%llX\n", shl_imm(v));
	printf("%llX\n", shl(v, 4));
	printf("%llX\n", shl(v, 28));
	printf("%llX\n", shl(v, 40));
	printf("%llX\n", shl(v, 0));
	printf("%llX\n", shl(v, 63));
	printf("%llX\n", shl(1, 63));

	return 0;
}
