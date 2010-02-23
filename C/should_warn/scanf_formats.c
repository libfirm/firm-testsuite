extern int __attribute__((format(scanf, 2, 3))) sscanf(const char *input, const char *format, ...);

char somestring[] = "123Hello123";

int main(void)
{
	int i;
	double d;
	float f;
	sscanf(somestring, "%f", &d);
	sscanf(somestring, "%lf", &f);
	sscanf(somestring, "\0 %d", &i);
	return 0;
}
