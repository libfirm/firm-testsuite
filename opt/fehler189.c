typedef unsigned long long BITBOARD;

BITBOARD SwapXray(BITBOARD attacks, int from, int direction);
extern int printf(const char *str, ...);

int main(void)
{
	SwapXray(0, 27, -9);
	return 0;
}

BITBOARD __attribute__((noinline)) SwapXray(BITBOARD attacks, int from, int direction)
{
	/* doubleword lowering code exchanged Start-Projs while iterating over them
	 * in effect translating some of them twice resulting in wrong proj
	 * numbers for the parameters */
	printf("%llX %d %d\n", attacks, from, direction);
	return attacks;
}
