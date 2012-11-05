/*$ !check fld.*%st $*/

double f(double a, double b, double c)
{
	/* Instead of duplicating a using fld %st, it is better to not load from
	 * memory in the first multiplication. */
	return a * b + a * c;
}

int main(void) { return 0; }
