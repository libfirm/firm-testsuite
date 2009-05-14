void ngx_cpuid(unsigned i, unsigned *buf)
{
	__asm__ (
			"mov %%ebx, %%esi\n\t"

			"cpuid\n\t"
			"mov %%eax, (%1)\n\t"
			"mov %%ebx, 4(%1)\n\t"
			"mov %%edx, 8(%1)\n\t"
			"mov %%ecx, 12(%1)\n\t"

			"mov %%esi, %%ebx"
			: "+a" (i) : "D" (buf) : "ecx", "edx", "esi", "memory" );
}

int main(void)
{
	int buf[5];

	ngx_cpuid(0, buf);

	return 0;
}
