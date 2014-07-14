unsigned a = 1;
int b;
int *c = &b;

int fn1(int p1)
{
	return -p1;
}

int main(void)
{
	int d = fn1(0 > -1L);
	a--;
	*c = d != a;
	return b - 1;
}
