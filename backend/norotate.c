unsigned __attribute__((noinline)) rol(unsigned a, unsigned b)
{
	return (a << b) + (a >> -b);
}

int main(void)
{
	return rol(1, 0) ^ 2;
}
