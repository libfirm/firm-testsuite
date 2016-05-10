/*$ -fopt-proc-clone -fclone-threshold=0 $*/
void fn1(int p1)
{
	(void)p1;
	for (;;) {
		fn1(0);
	}
}

int main(void)
{
	return 0;
}
