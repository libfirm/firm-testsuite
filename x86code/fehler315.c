struct S { long a; } *salsa;

int main(void)
{
	if (salsa != salsa)
		__asm__("": : "r"(0), "m"(*(int *)&salsa->a));
	return 0;
}
