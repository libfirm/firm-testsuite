int a[4];

int main(void)
{
	int res = 0;

	for (unsigned i = 4; i-- != 0;)
		res |= a[i];

	return res;
}
