/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
int a;

int fn1(int p1)
{
	(void)p1;
	return a;
}

int main(void)
{
	return fn1(0);
}
