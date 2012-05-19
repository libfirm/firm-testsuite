/*$ -Waggregate-return $*/

struct S { int a, b; };
union U { int a, b; };

static struct S testS(void) {
	struct S ret = { 1, 2 };

	return ret;
}

static union U testU(void) {
	union U ret = { 2 };

	return ret;
}

int main(int argc, char *argv[]) {
	(void)argc, (void)argv;
	struct S x = testS();
	union U y = testU();
	(void)x, (void)y;

	return 0;
}
