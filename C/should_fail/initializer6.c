typedef int(intfunc)(int);
static int getx(int x) { return x; }
static intfunc f = { getx };

int main(void)
{
	return f(42) - 42;
}
