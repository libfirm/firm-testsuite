/*
 * This test demonstrated Confirm and cond_eval handling of libfirm
 */

/*
 * Can you detct that this function ALWAYS returns 8?
 */
static int test(int a) {
	int b;

	if (a)
		b = 1;
	else
		b = a;
	b += 3;
	if (a)
		return b + b;
	else
		return b + 5;
}

int main(int argc, char *argv[]) {
	return test(argc - 1) != 8;
}
