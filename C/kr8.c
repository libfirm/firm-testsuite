int f(l)
	char l;
{
	return l;
}

int main(void)
{
	return f(0x10000) != 0;
}
