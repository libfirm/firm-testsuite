void ngx_cpuid(unsigned i, unsigned *buf)
{
	__asm__ (
			"    mov    %%ebx, %%esi;  "

			"    cpuid;                "
			"    mov    %%eax, (%1);   "
			"    mov    %%ebx, 4(%1);  "
			"    mov    %%edx, 8(%1);  "
			"    mov    %%ecx, 12(%1); "

			"    mov    %%esi, %%ebx;  "

			: : "a" (i), "D" (buf) : "ecx", "edx", "esi", "memory" );
}

int main(void)
{
	int buf[5];

	ngx_cpuid(0, buf);

	return 0;
}
