int main(void)
{
	unsigned iab = 0, iac = 1, oac, oad;
	asm volatile("/* =ac: %0  =ad: %1  ab: %2  ac: %3 */" : "=ac" (oac), "=ad" (oad) : "ab" (iab), "ac" (iac));
	return 0;
}
