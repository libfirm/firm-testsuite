unsigned char a;

unsigned mod(unsigned short p1, int p2)
{
	return p1 % p2;
}

int main(void)
{
	return mod(1, 2) > mod(a | 2, 257);
}
