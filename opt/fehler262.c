int a;
int b;

void fn1(void)
{
	a = 0;
	int *c;
	*c = (&a != (b = 1)) > a;
}

int main(void)
{
	return 0;
}
