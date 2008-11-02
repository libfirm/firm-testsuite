struct A { int k2; };

struct A retMe(struct A a)
{
	return a;
}

int main(void)
{
	struct A a1;
	a1.k2 = 42;
	a1 = retMe(a1);
	return a1.k2 != 42;
}
