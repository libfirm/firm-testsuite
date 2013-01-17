// inline11.c

int foo(int x);
int bar(int *ptr);

int foo(int x)
{
	int r = bar(&x);
	return r;
}

int bar(int *ptr)
{
	int res = 0;
	int i;
	for (i=0; i < *ptr; ++i) {
		res += i;
	}
	*ptr = i + *ptr;
	return res;
}

int main()
{
	foo(7);
	return 0;
}
