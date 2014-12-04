static int __attribute__((noinline)) f(void) { return 0; }

int main(void)
{
	int res = f();
	asm("mov $23, %0; mov %1, %0" : "=&r" (res) : "r" (res));
	return res;
}
