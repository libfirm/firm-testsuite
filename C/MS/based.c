int printf(const char *str, ...);

void *vpBuffer;

int main(int argc, char *argv[]) {
	void __based( vpBuffer ) *vpData = vpBuffer;

	printf("%p\n", vpData);
	return 0;
}
