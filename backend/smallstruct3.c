extern int printf(const char *str, ...);


typedef struct {
	int a;
	float b;
	float c;
} b;

b c(void) {
	return (b){42, 4.2, 3.14};
}

void d(void) {
	b x = c();
	printf("%d ", x.a);
	printf("%f ", x.b);
	printf("%f\n", x.c);
}

int main(void) {
	d();
	return 0;
}
