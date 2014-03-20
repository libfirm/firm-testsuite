struct A { int a; };

static struct A *a;

int main(void)
{
	(void) (a == (void*)0);
	(void) (a == 0);
	(void) (a == (void*)42);
	(void) (a == (const struct A*)a);
	(void) (a == (const volatile struct A*)a);

	return 0;
}
