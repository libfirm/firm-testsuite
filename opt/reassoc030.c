int a;
int b = 1;

int main(void)
{
	int c = 1;
	a ^= a & (c ^= b);
	return a |= c;
}
