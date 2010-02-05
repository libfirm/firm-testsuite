int test_minus_1(int a, int b) {
	return a < b ? -1 : 0;
}

int test_1(int a, int b) {
	return a < b ? 1 : 0;
}

int test_2(int a, int b) {
	return a < b ? 2 : 0;
}

int test_3(int a, int b) {
	return a < b ? 3 : 0;
}

int test_4(int a, int b) {
	return a < b ? 0 : 4;
}

int test_5(int a, int b) {
	return a < b ? 0 : 5;
}

int test_6(int a, int b) {
	return a < b ? 0 : 6;
}

int test_7(int a, int b) {
	return a < b ? 0 : 7;
}

int test_8(int a, int b) {
	return a < b ? 0 : 8;
}

int test_9(int a, int b) {
	return a < b ? 0 : 9;
}

int test_minus_9(int a, int b) {
	return a < b ? 0 : -9;
}

int test_add_65(int a, int b) {
	return a < b ? 65 : 66;
}

int test_add_33_42(int a, int b) {
	return a < b ? 33 : 42;
}

int test_add_33_41(int a, int b) {
	return a < b ? 41 : 33;
}

int test_neg(int a, int b) {
	return a < b ? -1 : 0;
}

int test_sbb1(unsigned a, unsigned b) {
	return a >= b ? 8 : 0;
}

int test_sbb2(unsigned a, unsigned b) {
	return a > b ? 8 : 0;
}

int test_sbb3(unsigned a, unsigned b) {
	return a <= b ? 8 : 0;
}

int test_sbb4(unsigned a, unsigned b) {
	return a < b ? 8 : 0;
}
