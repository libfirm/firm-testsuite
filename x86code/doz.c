/*$ -fif-conversion $*/
extern int printf(const char *str, ...);

/* some variations of the doz pattern */

/*$ check sbb $*/
unsigned __attribute__((noinline)) doz0(unsigned a, unsigned b)
{
	return a >= b ? a-b : 0;
}

unsigned __attribute__((noinline)) doz1(unsigned a, unsigned b)
{
	return b < a ? a-b : 0;
}

unsigned __attribute__((noinline)) doz2(unsigned a, unsigned b)
{
	return a <= b ? 0 : a-b;
}

unsigned __attribute__((noinline)) doz3(unsigned a, unsigned b)
{
	return b > a ? 0 : a-b;
}

int main(void)
{
	printf("doz(0,1)   = %u\n", doz0(0, 1));
	printf("doz(1,0)   = %u\n", doz0(1, 0));
	printf("doz(42,13) = %u\n", doz0(42, 13));
	printf("doz(13,42) = %u\n", doz0(13, 42));
	printf("doz(0,1)   = %u\n", doz1(0, 1));
	printf("doz(1,0)   = %u\n", doz1(1, 0));
	printf("doz(42,13) = %u\n", doz1(42, 13));
	printf("doz(13,42) = %u\n", doz1(13, 42));
	printf("doz(0,1)   = %u\n", doz2(0, 1));
	printf("doz(1,0)   = %u\n", doz2(1, 0));
	printf("doz(42,13) = %u\n", doz2(42, 13));
	printf("doz(13,42) = %u\n", doz2(13, 42));
	printf("doz(0,1)   = %u\n", doz3(0, 1));
	printf("doz(1,0)   = %u\n", doz3(1, 0));
	printf("doz(42,13) = %u\n", doz3(42, 13));
	printf("doz(13,42) = %u\n", doz3(13, 42));
	return 0;
}
