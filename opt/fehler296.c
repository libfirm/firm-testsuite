int  a;
int *b = &a;

int main(void)
{
	int c = *b;
	if (a || b)
		c = a;
	if (c)
		a++;
}
