static void foo(int array[static 10]) {
	(void) array; // suppress unused var compiler warning
	return;
}

int main () {
	int x[9];
	foo(x);
	return 0;
}
