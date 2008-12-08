int main(void)
{
	double d = -12.;
	/* the line below seems to leave garbage in the tarval module, which kills the
	 * sign bit for conversion of d to int */
	double e = 23;
	int    x = d;
	printf("%d (-12)\n", x);
	return x != -12;
}
