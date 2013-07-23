typedef struct foo foo;

static foo f = { 1,2,3 };

struct foo {
	int a,b,c;
};

int main(void)
{
	return f.a + f.b - f.c;
}
