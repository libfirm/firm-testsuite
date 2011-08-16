int leading_zeros(long long a)
{
	int zeros = __builtin_clzll(a);
	return zeros;
}

int main(void)
{
	return 0;
}
