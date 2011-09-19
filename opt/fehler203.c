int global = 0;

void __attribute__((noinline)) f(long long p_1, long long p_2, unsigned p_3)
{
	(void) p_1;

	if (p_3)
	{
		global = p_2;
	}
}

int main(void)
{
	f(0, 0, 42);

	return global;
}
