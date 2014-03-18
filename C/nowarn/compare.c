struct A { int a; };

static struct A *a;

int main(void)
{
	(void) (a == (void*)0);
	(void) (a == 0);
	(void) (a == (void*)42);

	return 0;
}
