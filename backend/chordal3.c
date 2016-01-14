void fn1(void *p)
{
}

struct s1 {
	void (*f)(void *);
} a = { &fn1 };

void *__attribute__((noinline)) fn2(void)
{
	return &a;
}

int main(void)
{
	struct s1 *a = fn2();
	a->f(a);
	return 0;
}
