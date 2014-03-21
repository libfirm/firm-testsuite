int a[2] = {1, 0};
int b = 2581256771;
short c = 50224;

int main(void)
{
	long long d = b & c;
	return a[d >> 56 & 1];
}
