extern int printf(char const*, ...);

long double l = 41.23L;

int main(void) {
		l = l + 1.0;
		printf("%Lf\n", l);
		return 0;
}
