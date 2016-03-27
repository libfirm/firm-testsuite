
void f(
	int a0,
	int a1,
	int a2,
	int a3,
	int a4,
	int a5,
	int a6,
	int a7);

void callit(void)
{
	/* Produces 4 errors + 4 warnings because of the missing comma */
	f(0, 1, 2, 3 /* comma missing */4, 5, 6, 7);
}
