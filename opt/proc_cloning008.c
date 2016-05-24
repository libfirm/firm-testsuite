/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
void fn1(int p1)
{
	while (p1) {
		&p1;
	}
}

int main(void)
{
	fn1(0);

	return 0;
}
