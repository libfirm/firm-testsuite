int a;

int main(void)
{
	for (; a; a++)
		a = 0 / 0;

	return 0;
}
