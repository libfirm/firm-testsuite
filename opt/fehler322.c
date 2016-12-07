/*$ -O0 -fconst-fold $*/

int volatile g;

void f(int a, int b)
{
	for (;;) {
		g ? g, a / b : a / b;
	}
}

int main(void)
{
	return 0;
}
