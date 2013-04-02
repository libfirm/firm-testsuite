long long one = 1;

int divide_7(unsigned x, long long count)
{
	long long result = 0;

	while (count--) {
		result += x++ / 7;
	}

	return result;
}

int main(void)
{
	return divide_7(5, one);
}
