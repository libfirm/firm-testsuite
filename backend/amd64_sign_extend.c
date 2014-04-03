int a[2] = {1, 0};
int b = -1713710525;
short c = -15312;

int main(void)
{
	long long d = b & c;
	return a[d >> 56 & 1];
}
