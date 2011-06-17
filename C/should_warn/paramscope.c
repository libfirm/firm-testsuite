/* should warn about "struct x" being only defined/known inside the parameter list */
static int test(struct x *p) {
	return sizeof(p);
}

int main(void) {
	test(0);
	return 0;
}
