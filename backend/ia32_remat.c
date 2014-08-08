long long a;
int b;

void fn1(void)
{
	b = a > 2036854775807 - b || 0 < a + b;
	for (;;)
		;
}

int main(void)
{
	return 0;
}
