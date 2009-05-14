/*$ -fno-inline $*/

static int func(a)
	int a;
{
	return a;
}

int ret42(void)
{
	return func(42);
}

static int func(int);

int main(void)
{
	return func(21) + func(21) - ret42();
}
