#if defined __amd64__
#define RESULT "rax"
#elif defined __arm__
#define RESULT "r0"
#elif defined __i386__
#define RESULT "eax"
#elif defined __mips__
#define RESULT "v0"
#define PREFIX "$"
#elif defined __riscv
#define RESULT "a0"
#elif defined __sh__
#define RESULT "r0"
#elif defined __sparc__
#define RESULT "o0"
#else
#error unknown architecture
#endif

int __attribute__((noinline)) zero(void) { return 0; }

int __attribute__((noinline)) id(int v) { return v; }

int main(void)
{
	int x = zero();
	/* GCC accepts these two for all architectures.
	 * See strip_reg_name() in varasm.c */
	asm("/* x:%0 clobber:%%" RESULT " */" : "+r" (x) :: "%" RESULT);
	x = id(x);
	asm("/* x:%0 clobber:#" RESULT " */" : "+r" (x) :: "#" RESULT);
	x = id(x);
#ifdef PREFIX
	asm("/* x:%0 clobber:" PREFIX RESULT " */" : "+r" (x) :: PREFIX RESULT);
#endif
	return x;
}
