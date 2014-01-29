unsigned a;
unsigned b = 1;

int main(void)
{
	unsigned c = a - b;
	c || (a = 1);

	return a;
}
