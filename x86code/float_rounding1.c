/*$ !check fst $*/

/* There is not need to cut off exess precision, as both a and -a are double. */
double f(double a)
{
	return -a;
}

double g(double a)
{
	return a < 0 ? -a : a;
}

int main(void) { return 0; }
