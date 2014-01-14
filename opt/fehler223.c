char a;
int b;

int main(void)
{
	char  c = 128;
	char *d = &c;

	a &= 1;
	c ^= a;
	b  = c;

	return 0;
}
