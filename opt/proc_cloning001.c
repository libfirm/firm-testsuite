/*$ -fopt-proc-clone -fno-inline $*/
int a;

void fn1(int p1)
{
	a = p1;
}

int main(void)
{
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
	fn1(0);
}
