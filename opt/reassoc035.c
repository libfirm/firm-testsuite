int a = 1;
int b;

int main(void)
{
	a &= b ^= 4;
	return a &= b;
}
