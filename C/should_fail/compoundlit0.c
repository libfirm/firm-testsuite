typedef int (intfunc)(int);

int getx(int x) { return x; }

int main(void)
{
	return ((intfunc) { getx }) (42);
}
