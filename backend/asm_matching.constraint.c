int v = 42;

int main(void)
{
	int a = v;
	int b;
	asm("/* %%0:%0 <- %%1:%1 */" : "=r" (b) : "0" (a));
	return a != b;
}
