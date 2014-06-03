/*$ check[1] (pkhbt\s+r[0-9])|(pkhtb\s+r[0-9]) $*/
unsigned __attribute__((noinline)) pack_halfword(unsigned x, unsigned y)
{
	return (x & 0xffff) | (y & 0xffff0000);
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("%X\n", pack_halfword(0xCAFEBABE, 0x12345678));
	printf("%X\n", pack_halfword(0x12345678, 0xCAFEBABE));
	return 0;
}
