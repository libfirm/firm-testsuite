int a;
int b;
int *c = &a;

int main(void)
{
	b = 0;
	for (; b <= 3; b++)
		*c = 0;
	a = 0;
	b--;
	if (c)
		a = 0;
	return b - 3;
}
