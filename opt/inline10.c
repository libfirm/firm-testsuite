// inline10.c

void foo(int x);
void bar(int *ptr);

void foo(int x)
{
	bar(&x);
}

void bar(int *ptr)
{
	*ptr = 3;
}

int main()
{
	return 0;
}
