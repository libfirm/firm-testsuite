short a;
short *b = &a;
unsigned short c;

int main(void)
{
	*b = -1;
	c = a;
	return a >= 0;
}
