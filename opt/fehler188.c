extern int printf(const char *str, ...);

typedef unsigned long long BITBOARD;

void __attribute__((noinline)) foobar(int square, BITBOARD val0)
{
	/* Some experimental 64bit shift-lowering code in firm produced invalid code
	 * when shifting with a 0 value */
	BITBOARD b = val0 >> (56-((square)&56));
	printf("%llX\n", b);
}

int main(void)
{
	foobar(59, 0x1AC74128043CE719ull);
}
