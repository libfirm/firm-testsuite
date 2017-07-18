extern int printf(const char *str, ...);

/* use -march=k6-2, athlon, pentium4 to see instructions :-) */
int main(int argc, char *argv[]) {
	printf("default default\n");
	__builtin_prefetch(argv);
	printf("0 default\n");
	__builtin_prefetch(argv, 0);
	printf("1 default\n");
	__builtin_prefetch(argv, 1);
	return 0;
}
