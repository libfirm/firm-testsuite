int foo;
int bla[10];

struct blablo {
	int foo;
};

int __attribute__((noinline)) noalias(struct blablo* f)
{
	/* a global variable can't alias with something out of a struct */
	foo = 23;
	f->foo = 42;
	return foo;
}

int __attribute__((noinline)) alias(struct blablo* f)
{
	int *ptr = bla+5;
	*ptr = 42;
	bla[5] = 23;
	return *ptr;
}

int main(void)
{
	return 0;
}
