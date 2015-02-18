int f(int a, int b, int c, int d)
{
	int l = b ^ c;
	return ((a & l) | (l ^ d)) & c;
}

int main(void)
{
	return f(0,1,1,0);
}
