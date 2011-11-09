extern int printf(const char *str, ...);

static float __attribute__((noinline)) setfloat(int x)
{
	/* firm tried to produce an integer result for a float mux and failed
	 * when trying to shift float tarvals */
	return x < 0 ? 1.f : 0.f;
}

int main(void)
{
	printf("%f\n", setfloat(0));
	printf("%f\n", setfloat(-42));
	printf("%f\n", setfloat(42));
	return 0;
}
