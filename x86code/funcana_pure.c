static __attribute__((noinline)) int id(int x)
{
	return x;
}

static __attribute__((noinline)) int add(int x, int y)
{
	return id(x) + y;
}

/*$ !check call $*/
int main(void)
{
	return add(4, 5) - add(4, 5);
}
