#include <assert.h>

unsigned long long __attribute__((noinline)) foobar(void)
{
	unsigned long long res0;
	unsigned arg = 12572;
	unsigned res1;
	__asm__ __volatile__(
		"movl $0xdeadbeef, %0\n"
		"\tmovl $0xcafebabe, %%edx\n"
		"\tleal 1(%1), %2\n"
		"\tleal 1(%%ebx), %%ebx\n"
		: "=A"(res0), "=b"(res1)
		: "b"(arg));
	return res0 + res1;
}

int main(void)
{
	unsigned long long res = foobar();
	assert(res == 0xCAFEBABEDEADF00Dull);
	return 0;
}
