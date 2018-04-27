/*$ -fomit-frame-pointer -O3 $*/

static void __attribute__((noinline)) f(int* p)
{
	__asm__(
			"xorl %%eax,%%eax\n\t"
			"xorl %%ebx,%%ebx\n\t"
			"xorl %%ecx,%%ecx\n\t"
			"xorl %%edx,%%edx\n\t"
			"xorl %%esi,%%esi\n\t"
			"xorl %%edi,%%edi\n\t"
			"incl %0"
			: "+m" (*p) :
			: "eax", "ebx", "ecx", "edx", "esi", "edi", "cc"
	);
}

int main(void)
{
	int v = 42;
	f(&v);
	return v != 43;
}
