typedef struct foobar {
	int a;
	int b;
} foobar;

extern int printf(const char *str, ...);

int __attribute__((const, noinline)) calc(foobar f0, foobar f1)
{
	return f0.a*2 + f0.b*3 + f1.a*5 + f1.b*7;
}

int main(void)
{
	printf("Result: %d\n", calc((foobar){1,2}, (foobar){3,4}));
	return 0;
}
