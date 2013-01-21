/*$ -fno-inline $*/
/* as seen in musl libc */
static inline int a_swap(volatile int *x, int v)
{
	__asm__( "xchg %0, %1" : "=r"(v), "=m"(*x) : "0"(v) : "memory" );
	return v;
}

int main(void)
{
	static int lock;
	while (a_swap(&lock, 1));
	return 0;
}
