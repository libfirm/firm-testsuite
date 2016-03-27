/* Repeated errors about fields missing in incomplete types */
typedef struct Foo Foo;

int main(void)
{
	Foo f;
	f.a = f.b + f.c;
	f.a *= f.b;
	f.a /= f.c;
}

void dosomething(Foo *f)
{
	f->a  = f->b + f->c;
	f->a *= f->b;
	f->a /= f->c;
}

struct Foo {
	int a, b, c;
};
