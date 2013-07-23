typedef int(intfunc)(int);
static int getx(int x) { return x; }
static struct {
	intfunc f;
} s = { getx };

int main(void)
{
	return s.f(42) - 42;
}
