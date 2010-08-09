unsigned glob = 0;

extern int printf(const char *str, ...);

void __attribute__((noinline)) print(unsigned value)
{
	printf("%08X\n", value);
}

int main(void)
{
	/* use %g0 */
	print(0u);
	/* single or/mov only */
	print(0x000000ffU);
	print(0x00000fffU);
	print(0xfffffc00U);
	print(0xffffffffU);
	/* single sethi */
	print(0xff000000U);
	print(0xabcd0000U);
	/* sethi + mov */
	print(0xa1b2c3d4U);
	print(0xcafebabeU);
	/* use sub imm instead of add */
	print(glob + 0x1000);
	return 0;
}
