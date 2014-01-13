long long a;
long long c;
unsigned  f;

void fn1(int p)
{
	a = ((c = 0 || f) & p) == p;
}

int main(void)
{
	fn1(92);
	return a;
}
