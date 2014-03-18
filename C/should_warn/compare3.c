struct A { int a; };
struct B { int a; };

static struct A *a;
static struct B *b;

int main(void)
{
	(void) (a != b);
	(void) (a == 42);
	(void) (a == (char*)0);
	(void) (a > 0);
}
