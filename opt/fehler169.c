/* strength reduction gets confused with modes */
unsigned int out;

int main(void)
{
	unsigned char *p   = (unsigned char*) "foo";
	unsigned char *fp  = (unsigned char*) "bar";
	unsigned char *sp  = p;
	unsigned char *sfp = fp;
	for(;;) {
		p++;
		fp++;
		if (p > sp+5)
			break;
		out = fp - sfp;
	}
	printf("Res: %d (should be 5)\n", out);
	return 0;
}
