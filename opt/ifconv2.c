long long a = 0;

int fn1 (long long p1)
{
    return a && 0 / 0 || p1 <= 0 ? 42 : p1 * a;
}

int main ()
{
	return fn1(8);
}
