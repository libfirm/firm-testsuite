int foo(int k)
{
	return -1;

	switch(k) {
	case 0:
		return 42;
	default:
		return 0;
	}
}

int main(void)
{
	return foo(12) != -1;
}
