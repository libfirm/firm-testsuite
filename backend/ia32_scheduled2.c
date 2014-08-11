volatile long long a;
int b;
int *d;

void fn1(void)
{
	b = *d++ > 0 < 1 - a;
}

int main(void)
{
	return 0;
}
