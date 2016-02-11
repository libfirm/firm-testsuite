int a = 1;

int main(void)
{
	int  b =  a;
	int *c = &a;
	&c;
	*c -= 0 % b;
	*c -= *c -= b;

	return 0;
}
