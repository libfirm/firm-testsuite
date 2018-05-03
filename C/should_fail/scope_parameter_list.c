static int f(struct T { int a; }* p)
{
	return p->a;
}

int main(void)
{
	struct T v = { 42 };
	return f(&v) != 42;
}
