int main(void)
{
	int a, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
	__asm__("movl $21, %0; addl $-1, %1; addl $-2, %2; addl $-3, %3; addl $-4, %4; addl $-5, %5; addl $-6, %6"
			: "=&r" (a), "+r" (b), "+r" (c), "+r" (d), "+r" (e), "+r" (f), "+r" (g));
	return a + b + c + d + e + f + g;
}
