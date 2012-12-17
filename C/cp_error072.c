typedef struct foo {
	unsigned long long x : 64;
} foo;

int main(void)
{
	foo f = { 0x12345678CAFEBABEull };
	printf("%llX\n", f.x);
	return 0;
}
