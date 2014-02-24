int main(void)
{
	// this is meant to throw an error if you actually try to assemble it
	asm volatile("matzeq error KAPUTT");
	return 0;
}
