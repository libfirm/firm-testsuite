int a;

int main(void)
{
	a |= 4;
	return a ^ 2 ^ (a ^ 1) ^ 3;
}
