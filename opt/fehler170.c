/* Combo wrongly CSEs (does not separate) su*su and sp*sp */
extern int printf(const char *fmt, ...);
int numf1s = 1;

double v1 = 66;
double v2 = -1000000;

void simtest2(void)
{
	int j;
	double Su,Sp;
	double su,sp;

	su = sp = 0.0;
	for (j=0;j<numf1s;j++)
	{
		su += v1;
		sp += v2;
	}
	Su = su*su;
	printf("%f\n", Su);
	Sp = sp*sp;
	printf("%f\n", Sp);
}

int main(void)
{
	simtest2();
	return 0;
}
