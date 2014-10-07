int a;
int b[];
int c;

void fn1(void)
{
	c = a || &b[1] == 0;
}

int main(void)
{
	return 0;
}
