unsigned short *a[2];
int b;

void fn1(void)
{
	unsigned short **c = &a[1];
	if ((long long)!c / 0)
		b++;
}

int main(void)
{
	return 0;
}
