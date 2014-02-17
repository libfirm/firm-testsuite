int fn1(char *p1)
{
	char *a;
	while (*p1 != '\0') {
		if (*p1 == '.')
			a = p1;
		p1++;
	}
	int b = *a;
	if (b == '\0')
		return 1;
	return 0;
}

int __attribute__((noinline)) fn2(char *p1)
{
	return fn1(p1);
}

int main(void)
{
	fn2(".");
	return 0;
}
