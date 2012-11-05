/*$ !check fst $*/

double f(int x, double a)
{
	/* There is not need to cut off exess precision, as both a and 0 are double. */
	return x ? a : 0;
}

int main(void) { return 0; }
