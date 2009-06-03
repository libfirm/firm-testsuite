extern int printf(const char *str, ...);

int main(void)
{
	_Bool a = 1;
	a += 1;
	printf("Res: %d (should be 1)\n", (int) a);
	return 0;
}
