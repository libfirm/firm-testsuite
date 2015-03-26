int a;
int b;
int *c = &b;

int main(void)
{
	a = b <= 1;
	*c = 1 - b;

	return 0;
}
