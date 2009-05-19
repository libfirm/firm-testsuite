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
