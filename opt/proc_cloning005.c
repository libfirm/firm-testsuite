/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
int *a;

int fn1(int p1)
{
	int *b[2] = {a};
	a = b[0];
	return p1;
}

int main(void)
{
	return fn1(0);
}
