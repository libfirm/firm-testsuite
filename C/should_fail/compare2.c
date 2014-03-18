struct A { int a; };

int main(void)
{
	struct A a = { 42 };
	struct A *ap = &a;
	return a == ap;
}
