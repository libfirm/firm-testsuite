int f(extern int k)
{
	return k;
}

int main(void)
{
	return f(0);
}
