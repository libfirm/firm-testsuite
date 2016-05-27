/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
int *a;
unsigned b;

void fn1(int p1, unsigned p2)
{
	a = &p1;
	b = p2;
}

int main(void)
{
	fn1(b, 0);

	return 0;
}
