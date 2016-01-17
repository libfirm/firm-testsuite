int x;

int main(void)
{
	if (x != x)
		__asm__("" :: "r" (x));
	return 0;
}
