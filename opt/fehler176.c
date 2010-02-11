extern int printf(const char *str, ...);

double x = 4294967295.0;

int main(void) {
	printf("%d (should be -1)\n", (int) (unsigned int)x);
	return 0;
}
