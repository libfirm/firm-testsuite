static int zero(void) { return 0; }

int main(void)
{
	return ({ int (*p)(void) = &zero; p; })();
}
