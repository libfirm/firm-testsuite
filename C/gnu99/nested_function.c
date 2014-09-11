int f(int a) {
	int v = a + a;

	__attribute__((noinline)) int g(int k) {
		return k + a + v;
	}

	return g(1);
}

int main(int argc, char *argv[]) {
	(void) argc;
	(void) argv;
	printf("%d\n", f(1));
	return 0;
}
