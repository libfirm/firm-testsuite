#include <stdio.h>

double x = 23.;

int main()
{ /* The dynamic PIC base is not added to the offset of the double literal 42.
	 * when loading it from memory. */
	printf("%f\n", 42. * x);
}
