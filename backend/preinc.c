char a[] = { 2, 1, 0 };
char *b = a;

int main(void)
{
	return *++b == 0;
}
