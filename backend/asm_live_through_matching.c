static int fun(int a, int b)
{
	int c;
	asm("/* 0:%0 1:%1 2:%2 */" : "=r" (c) : "0" (a), "r" (b));
	return a != c;
}

int main(void)
{
	int volatile a = 23;
	int volatile b = 42;
	return fun(a, b);
}
