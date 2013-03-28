static inline unsigned short swap16(unsigned short x)
{
	__asm__("xchgb %b[input], %h[output] /* in: %1 out: %0 */" : [output] "=q" (x) : [input] "0" (x));
	return x;
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("0x%X\n", swap16(0xFECAu));
	return 0;
}
