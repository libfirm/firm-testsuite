/*$ -Wcast-qual $*/
static void test(const char *p) {
	char *q = (char *)p;
	volatile char *r = q;

	(void)p, (void)r;

	*q = 1;
}

int main(int argc, char *argv[]) {
	(void)argc, (void)argv, (void)test;
	return 0;
}
