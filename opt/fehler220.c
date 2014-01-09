int a;
int b;
struct S0 {
  int f0 : 10;
} c;

int fn1(int p1)
{
	return 0;
}

struct S0 fn2(void) {
  c.f0 &= 1;
  a ^ (b = fn1(c.f0) != c.f0);
  return c;
}

int main(void)
{
	return 0;
}
