int a(int a, int b)
{
	return a | !b;
}

int main(void)
{
	return a(0, 0) == 0;
}
