extern int rand(void);

static int *f(void)
{
	int *ptr = (int*) rand();
	__asm__("" : "=m" (*ptr));
	return 0;
}

int main(void)
{
	(void) f;
	return 0;
}
