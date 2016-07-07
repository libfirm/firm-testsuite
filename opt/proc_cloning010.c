/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
void fn1(int p1, int p2)
{
	p1 ? 0 : 0 / 1;
}

int main(void)
{
	fn1(0, 0);

	return 0;
}
