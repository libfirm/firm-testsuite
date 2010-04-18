int A, B, C, D;

/* no spill frame is allocated when compiled with -fno-omit-frame-pointer */
void test(int p[]) {
	int a = A, b = B, c = C;
	a += 1;
	b += 1;
	c += 1;
	p[0] = a;
	p[1] = b;
	p[2] = c;

}

int main(int argc, char *argv[]) {
	int p[3];

	test(p);
	return 0;
}
