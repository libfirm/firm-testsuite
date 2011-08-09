struct bitfield {
	unsigned long long val : 60;
	unsigned long long v2  : 2;
} bitfield = { 0x12345678CAFEBABULL, 2 };

extern int printf(const char *str, ...);

int main(void)
{
	printf("%llX %X\n", (unsigned long long)bitfield.val, (int)bitfield.v2);
	bitfield.val = 123;
	printf("%llX %X\n", (unsigned long long)bitfield.val, (int)bitfield.v2);
	bitfield.v2 = 1;
	printf("%llX %X\n", (unsigned long long)bitfield.val, (int)bitfield.v2);
	return 0;
}
