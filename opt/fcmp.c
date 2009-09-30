#include <stdio.h>

double Fa = 200.;
double Fb = 2;

double dcmp1(double a, double b) {
  if (a < b)
    return a;
  else
    return b;
}

double dcmp2(double a, double b) {
  if (a > b)
    return a;
  else
    return b;
}

int main(void)
{
	double fa = Fa, fb = Fb;

	printf("dcmp1(%f, %f) = %f\n", -fa, -fb, dcmp1(-fa, -fb));
	printf("dcmp2(%f, %f) = %f\n", -fa, -fb, dcmp2(-fa, -fb));
	printf("dcmp1(%f, %f) = %f\n", fa, fb, dcmp1(fa, fb));
	printf("dcmp2(%f, %f) = %f\n", fa, fb, dcmp2(fa, fb));
}
