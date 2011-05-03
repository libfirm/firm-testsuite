int rand(void);
int printf(const char *fmt, ...);

int main() {
	int x = 1;
	int y = rand();
	int z = y;

	while (rand() % 2 == 0) {
		if (y != z)
			x = 2;
		x = 2 - x;
		if (x != 1)
			y = 2;
	}
	printf("%d\n", x);

	return x;
}
