struct S0 {
	int f0;
} a[6][3] = { 1 };

int main(void)
{
	a[5][1] = a[2][2];

	return a[2][2].f0;
}
