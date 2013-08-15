void __attribute__((alias("bar"))) foo(void);

void foo(void)
{
}

void bar(void)
{
}

int main(void)
{
	return 0;
}
