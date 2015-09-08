extern int printf(const char *str, ...);

static unsigned a0;
static unsigned a1;
unsigned g0 = 13;
unsigned g1 = 66;

int main(void)
{
	a0 = 42;
	unsigned r0 = __sync_val_compare_and_swap(&a0, 17, 88);
	unsigned r1 = __sync_val_compare_and_swap(&a0, 42, 3);
	unsigned r2 = __sync_val_compare_and_swap(&a0, 42, 7);
	printf("%u %u %u %u\n", a0, r0, r1, r2);

	a1 = 17;
	unsigned c0 = __sync_val_compare_and_swap(&a1, 17, 88);
	unsigned c1 = __sync_val_compare_and_swap(&a1, 42, 3);
	unsigned c2 = __sync_val_compare_and_swap(&a1, 42, 7);
	printf("%u %u %u %u\n", a1, c0, c1, c2);

	return 0;
}
