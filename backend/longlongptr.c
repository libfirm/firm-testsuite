extern int printf(const char *str, ...);

unsigned long long *ptr;
unsigned long long *ptr2;

static void __attribute__((noinline)) printptrs(void)
{
	printf("%llX %llX\n", *ptr, *ptr2);
}

/* the following function should get changed to fastcall calling convention
 * (on x86) while at the same time someone is taking the address of a parameter
 * which is tricky to get right... */
static void __attribute__((noinline)) blup(unsigned long long v,
                                           unsigned long long v2)
{
	ptr = &v;
	ptr2 = &v2;
	printptrs();
}

int main(void)
{
	blup(0xbadf00dcafebabeLLU, 0x4242212142422121LLU);
	return 0;
}
