int a;
short b;

int main(void)
{
	b = -(a & 1L) < 5UL;
	return b - 1;
}
