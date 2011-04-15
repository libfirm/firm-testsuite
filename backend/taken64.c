extern int printf(const char *str, ...);

int *ptr;
void __attribute__((noinline)) print_ptr(void)
{
	printf("%d\n", *ptr);
}

unsigned long long __attribute__((noinline)) testit(int arg)
{
	/* when lowering the 64bit method type firm somehow failed to move
	 * entities from the old value_param_type to the new one, which confused
	 * the backend */
	ptr = &arg;
	print_ptr();
	return arg;
}

int main(void)
{
	unsigned long long r = testit(42);
	printf("%llu\n", r);
	return 0;
}
