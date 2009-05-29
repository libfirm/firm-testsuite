<<<<<<< .mine
/* strength reduction gets confused with modes */
unsigned int out;

int main(void)
{
	unsigned char *p   = (unsigned char*) "foo";
	unsigned char *fp  = (unsigned char*) "bar";
	unsigned char *sp  = p;
	unsigned char *sfp = fp;
	for(;;) {
		p++;
		fp++;
		if (p > sp+5)
			break;
		out = fp - sfp;
	}
	printf("Res: %d (should be 5)\n", out);
	return 0;
}

=======
/*$ -fno-inline */
int printf(const char *format, ...);

/* variation of fehler166, this time WITHOUT a prototype */
static int test2(), test();

int main() {
	/* call BEFORE definition uses the prototype */
	int t = test(1, 2, 3) - 6;
	test2();
	printf("%d\n", t);
	return t;
}

static int test(a, b, c)
	int a;
	int b;
	int c;
{
	return a+b+c;
}

int test2(void) {
	/* call BEFORE definition uses the prototype */
	int t = test(1, 2, 3) - 6;
	printf("%d\n", t);
	return t;
}

>>>>>>> .r26062
