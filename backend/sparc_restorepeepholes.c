/* a "restore" operations gives us a free "add" instruction, so the compiler
 * should fold some instructions into it. */

int g;

extern int rand(void); /* libc rand, just here so the compiler has a call it can't optimize away */

unsigned __attribute__((noinline)) fold_const(void)
{
	g = 1;  /* so the call delay slots gets filled */
	rand(); /* force save/restore usage */
	return 42;
}

unsigned __attribute__((noinline)) fold_add(unsigned x, unsigned y)
{
	g = 1;
	rand();
	return x+y;
}

unsigned __attribute__((noinline)) fold_add_imm(unsigned x)
{
	g = 1;
	rand();
	return x + 42;
}

unsigned __attribute__((noinline)) fold_sub_imm(unsigned x)
{
	g = 1;
	rand();
	return x - 42;
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("1: %u\n", fold_const());
	printf("2: %u\n", fold_add(13, 30));
	printf("3: %u\n", fold_add_imm(2));
	printf("4: %u\n", fold_sub_imm(87));
	return 0;
}
