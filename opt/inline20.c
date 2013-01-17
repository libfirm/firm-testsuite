// inline20.c

typedef struct compound {
	int a;
} compound;

compound called()
{
	compound local;
	local.a = 42;
	return local;
}

void callee()
{
	compound ret;
	ret = called();
}

int main()
{
	return 0;
}
