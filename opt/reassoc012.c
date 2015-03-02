int a;

void fn1(void)
{
	unsigned b[6][4];
	for (;; a--)
		b[a][a]--;
}

int main(void)
{
	return 0;
}
