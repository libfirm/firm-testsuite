/* should warn about "struct x" being only defined/known inside the parameter list */
int test(struct x *p) {
	return sizeof(p);
}

int main(void) {
	return 0;
}
