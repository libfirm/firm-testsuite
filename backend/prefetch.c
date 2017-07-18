extern int printf(const char *str, ...);

/* use -march=k6-2, athlon, pentium4 to see instructions :-) */
int main(int argc, char *argv[]) {
	printf("0 0\n");
	__builtin_prefetch(argv, 0, 0);
	printf("0 1\n");
	__builtin_prefetch(argv, 0, 1);
	printf("0 2\n");
	__builtin_prefetch(argv, 0, 2);
	printf("0 3\n");
	__builtin_prefetch(argv, 0, 3);
	printf("1 0\n");
	__builtin_prefetch(argv, 1, 0);
	printf("1 1\n");
	__builtin_prefetch(argv, 1, 1);
	printf("1 2\n");
	__builtin_prefetch(argv, 1, 2);
	printf("1 3\n");
	__builtin_prefetch(argv, 1, 3);
	return 0;
}
