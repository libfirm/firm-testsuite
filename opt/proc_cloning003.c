/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
int a;

int fn1(int p1)
{
	return p1 - a;
}

int main(void)
{
	fn1(1);
	return fn1(0);
}
