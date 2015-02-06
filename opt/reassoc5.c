int a;

int main(void)
{
	while (a)
		a = (a ^ 42) & (a ^ -a);

	return 0;
}
