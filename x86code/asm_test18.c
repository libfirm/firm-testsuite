int volatile v0 = 0;
int f(int i0, int i1)
{
	int l0 = v0;
	int o0;
	asm volatile("/* 0:%0 1:%1 2:%2 */" : "=a" (o0) : "r" (i0), "c" (i1));
	v0 = l0;
	return i0 + o0;
}

int main(void)
{
	return 0;
}
