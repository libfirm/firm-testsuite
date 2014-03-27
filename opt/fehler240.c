int a = 1;
char b;

unsigned char fn1(unsigned char p1)
{
	return p1 ? p1 : 0;
}

int main(void)
{
	int c = fn1(b - a);
	return ~c;
}
