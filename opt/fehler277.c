int a;

void f(int p)
{
	if (1)
		;
	else
		label:
			a;
	if (p)
		goto label;
}

int main(void)
{
	return 0;
}
