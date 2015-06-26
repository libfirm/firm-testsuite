int a = 1;
int b;

int main(void)
{
	a ^= b;
	return (a ^ 1) & 1;
}
