static void postinc_break(int *a, int *b) {
	// assumes sizeof(int) == sizeof(int*)
	*a = (int)(b+1);
	*b = (int)(a+1);
}

int main(void) {
	struct x {
		int a, b;
	} x;

	postinc_break(&x.a, &x.b);
	printf("%d\n", x.a - x.b);
	return 0;
}
