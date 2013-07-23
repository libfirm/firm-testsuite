typedef int (intfunc)(int);

int getx(int x) { return x; }
static intfunc f = getx;

int main(void)
{
	return f(0);
}
