extern int __attribute__((format(scanf, 2, 3))) sscanf(const char *input, const char *format, ...);

static char somestring[] = "123Hello123";

int main(void)
{
	int i;
	double d;
	float f;
	sscanf(somestring, "%f", &d);
	sscanf(somestring, "%lf", &f);
	sscanf(somestring, "\0 %d", &i);
	sscanf(somestring, i ? "%d" : "%d %d %d", &i, &i);
	return 0;
}
