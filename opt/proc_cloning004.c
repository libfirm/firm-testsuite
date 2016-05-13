/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
static int fn1(int p1)
{
	int  a   = 0;
	int *b[] = {&a};
	return p1;
}

int main(void)
{
	return fn1(0);
}
