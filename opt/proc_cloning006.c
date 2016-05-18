/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
int a;

int fn1(int p1)
{
	return p1 << a;
}

static int fn2(int p1, int p2) {
	while (a) {
		fn1(&p2 != 0);
	}
	a = p1;
	return p2;
}

int main(void)
{
	return fn2(0, a);
}
