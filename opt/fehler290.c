int  a;
int *b = &a;

void fn1(void)
{
}

int main(void)
{
	a ^= *b ^= a ^= 2;
	return 0;
}
