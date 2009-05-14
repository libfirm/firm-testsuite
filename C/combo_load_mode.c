void f(char *src, char *dest, int x)
{
	static void *handlers[] = {&&u4, &&u8};
	goto *handlers[x];
u4:
	*dest = *src;
	return;
u8:
	*(short*)dest = *(short*)src;
}

int main(void)
{
	return 0;
}
