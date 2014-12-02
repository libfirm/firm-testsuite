static void foo(void)
{ }

static void bar(void)
{
	return foo();
}

int main(void)
{
	bar();
	return 0;
}
