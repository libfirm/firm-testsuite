extern int printf(const char *str, ...);

int main(void)
{
	_Bool a = 1;
	a += 5;
	_Bool b = 1;
	b += (unsigned char) 255;
	printf("Res: %d (should be 1)\n", (int) a);
	printf("Res2: %d (should be 1)\n", (int) b);
	return 0;
}
