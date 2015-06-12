int *a;

void f(void)
{
	*++a = 0;
}

int main(void)
{
	return 0;
}
