int a;

void fn1(void)
{
	int b = 0;
	for (;; b = 1)
		a = b < !b && b;
}

int main(void)
{
	return 0;
}
