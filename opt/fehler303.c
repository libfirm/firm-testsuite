int  a = 1;
int *b = &a;

char fn1(int p1)
{
	return p1;
}

int main(void)
{
	*b = fn1(a << 7) != 0;
	return a ^ 1;
}
