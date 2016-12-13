/*$ -O0 -fconst-fold $*/

int a = 1;

int main(void)
{
	return a = a ? 0 / a : a / a;
}
