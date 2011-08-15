/* should warn about "struct x" being only defined/known inside the parameter list */
static void test(struct x *p) {
	(void)p;
}

int main(void) {
	test(0);
	return 0;
}
